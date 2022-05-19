#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <math.h>
#include <windows.h>

using namespace std;

using namespace sf;

const double pi = 3.1415;

const int V = 6;

//����� �������
class DVertex
{
public:
	Text text;//����� �������
	Font font;//����� ������
	CircleShape circle;//������� - ����������

	DVertex() //����������� �������
	{
		//������ ������
		font.loadFromFile("arial.ttf");
		this->text.setFont(font);
		this->text.setFillColor(Color::Black);
		this->text.setCharacterSize(20);

		//������� ����� ����� ������
		this->text.setOutlineThickness(5);
		this->text.setOutlineColor(Color::White);

		//������ �������
		this->circle.setFillColor(Color::Black);
		this->circle.setOutlineThickness(4);
		this->circle.setOutlineColor(Color::White);

	};
	//������� ������� ������� � ������ � ���
	void setPosition(int x, int y)
	{
		this->text.setPosition(x, y);
		this->circle.setPosition(x, y);
	};
	//������ �������
	Vector2f getPosition()
	{
		return circle.getPosition();
	};
	//������������ ������� �� x � y
	void move(int x, int y)
	{
		this->circle.move(x, y);
		this->text.move(x, y);
	};
	//������� ������ �������
	void setText(String text)
	{
		this->text.setString(text);
	};
	//������� ������� ����������
	void setRadius(int r)
	{
		this->circle.setRadius(r);
	}
	//������ �������
	int getRadius()
	{
		return this->circle.getRadius();
	}
	//��������� � �����
	void draw(RenderWindow& window)
	{
		int length_str = this->text.getString().getSize();//������������ �����

		window.draw(this->circle);

		this->text.move(circle.getRadius() - length_str * 5, circle.getRadius() * 1/2);//������������ ����� � ����� ����������

		window.draw(this->text);
		this->text.move(-circle.getRadius() + length_str * 5, -circle.getRadius() * 1/2);//������� ��� ���������� ������ � ���������(���� ����� �� �������, �� ����� ���� move � �������������)
	};
};

//��������� ������� pos
struct pos {
	int x, y;
};

//����� �����
class DLine
{
public:
	Text text;//��� �����
	Font font;//�����
	RectangleShape line;//����� - �����
public:
	DLine()//�����������
	{
		//������ ������ - ����
		font.loadFromFile("arial.ttf");
		this->text.setFont(font);
		this->text.setCharacterSize(20);

		//���� �����
		this->line.setFillColor(Color::Yellow);
		

		this->text.setOutlineThickness(5);
		this->text.setOutlineColor(Color::Black);

	}
	//���������������� �����
	void setVertex(DVertex& vertex1, DVertex& vertex2, string text)
	{
		//������� ���� ������ �����
		Vector2f pos1 = vertex1.getPosition();
		Vector2f pos2 = vertex2.getPosition();

		//������
		int catet_X;
		int catet_Y;

		//����� � ����
		double lenght;
		double corner;

		//���������� �������
		catet_X = abs(pos2.x - pos1.x);
		catet_Y = abs(pos2.y - pos1.y);

		//����� ����������
		lenght = sqrt(catet_X * catet_X + catet_Y * catet_Y);

		//������� ������� �����
		this->line.setSize(Vector2f(lenght, 6));

		//������������� �������������� ��������, ������������ cmath
		corner = asin(catet_Y / lenght);

		//�������� �� �������� ��������� x y ��������� ������������ ���� ��� �������� ����� � ��������� ���������(����� �����������) ����� ���� ������
		if (((pos2.x - pos1.x) >= 0) && ((pos2.y - pos1.y) >= 0))
			this->line.rotate(corner * (180 / pi));
		else
			if (((pos2.x - pos1.x) < 0) && ((pos2.y - pos1.y) >= 0))
			{
				this->line.rotate(180 - (corner * (180 / pi)));
			}
			else
				if (((pos2.x - pos1.x) < 0) && ((pos2.y - pos1.y) < 0))
				{
					this->line.rotate(180 + (corner * (180 / pi)));
				}
				else
					if (((pos2.x - pos1.x) >= 0) && ((pos2.y - pos1.y) < 0))
					{
						this->line.rotate(0 - (corner * (180 / pi)));
					}
		//�������� ��������� �������
		Vector2f pos(pos1.x + vertex1.getRadius(), pos1.y + vertex1.getRadius());
		//������ ������� �����
		this->line.setPosition(pos);

		//������ ����� � ����������� ��� � ������ ����� ����� ���������� ����� � ������
		this->text.setString(text);
		this->text.setPosition(pos.x + (pos2.x - pos1.x) / 2, pos.y + (pos2.y - pos1.y) / 2);
	};
	//��������� � �����
	void draw(RenderWindow& window)
	{
		window.draw(this->line);
		window.draw(this->text);
	};
};


//��������� ��� ������ ����� � ������� shortWay
struct zerorate
{
	int num;
	int rate;
};
//��������� ��� ���� (�� ������ � ������)
struct way
{
	int first;
	int second;
};

//��������� ��� ������������� ���� (������ �� �������)
int ways2[8];
int result = 0;

//������� ��� ���������� ����������� ���� �� ���� ��������
void shortWay(int V1, int V2, zerorate(&a)[7][7], int(&b)[7][7])
{
	int min = INT_MAX;
	int rowmin[7][1] = {};//������ ��� ������ ������������� �������� �� �������
	//���� ������� �� ������� ��������� ����� 
	for (int i = 0; i < V1; i++)
	{
		min = INT_MAX;
		for (int j = 0; j < V2; j++)
		{
			//���� ����������� �������� � ������
			if (a[i][j].num < min && a[i][j].num != -1 && a[i][j].num != 0) min = a[i][j].num;
		}
		//� ������ � ������������ ������� ���������� ����������� � ������
		rowmin[i][0] = min;
	}
	//�������� ���� ���� �������
	for (int i = 0; i < V1; i++)
	{
		for (int j = 0; j < V2; j++)
		{
			if (a[i][j].num != -1 && a[i][j].num != 0) a[i][j].num = a[i][j].num - rowmin[i][0]; //���� ���� ���������� � �� !=0, �� �������� ����������� �������� �� ������
		}
		
	}
	min = INT_MAX;//����������� �������� ��� ���������� ������
	int colmin[1][7] = {};//������ ��� ������ ������������ �������� �� �������
	for (int j = 0; j < V2; j++)//�������� ���� ���� 
	{
		min = INT_MAX;
		for (int i = 0; i < V1; i++)
		{
			if (a[i][j].num < min && a[i][j].num != -1 && i != j)	min = a[i][j].num; //����������� min, ���� ����� ������
		}
		//���������� ����������� ����� � ������ � ������������ ������� �� ��������
		colmin[0][j] = min;
	}

	for (int j = 0; j < V2; j++) //�������� ���� ����
	{
		for (int i = 0; i < V1; i++)
		{
			if (a[i][j].num != -1 && a[i][j].num != 0) a[i][j].num = a[i][j].num - colmin[0][j]; //���� ���� ���������� � �� !=0, �� �������� ����������� �������� �� ������
		}
	}

	min = INT_MAX;//����������� �������� ��� ���������� ������
	int sum = 0;
	for (int i = 0; i < 7; i++)//�������� ���� ����
	{
		for (int j = 0; j < 7; j++)
		{
			//���� ������� ����� ���� � �� ��������� �� ������� ���������
			if (a[i][j].num == 0 && i != j)
			{
				//���������� ������ ���� �� �������� (���� ����������� ������� � �������, ��� ��������� ����)
				for (int z = 0; z < 7; z++)
				{
					if (a[i][z].num < min && i != z && a[i][z].num != -1 && z != j)
					{
						min = a[i][z].num;
					}
				}
				sum += min;//���������� ������ ���� �� ������� (���� ����������� ������� � ������, ��� ��������� ����)
				min = INT_MAX;//����������� �������� ��� ���������� ������
				for (int k = 0; k < 7; k++)
				{
					if (a[k][j].num < min && a[k][j].num != -1 && k != j && k != i)
					{
						min = a[k][j].num;
					}
				}
				sum += min;//������ ������ �� ��� �������� �� ������ � �������
				a[i][j].rate = sum; //���������� ������ (rate)
				sum = 0;//�������� �����
			}
			
		}
		
	}
	way ways1[7];//������� ������ ways ��� ������������ �������, � ������� �� ��� 

	for (int k = 0; k < 4; k++)
	{
		int max = INT_MIN;//��������� � ����
		//��������� ���������� � ������� ����� ������������ ����� ������ � ������� � ������� ��������� ���� � ���������� �������
		int max_col = 0;
		int max_row = 0;
		for (int i = 0; i < V1; i++)//�������� ���� ����
		{
			for (int j = 0; j < V2; j++)
			{
				if (a[i][j].rate > max && j != i) //������� �������� ��� ���������
				{
					max = a[i][j].rate;
					max_row = i;
					max_col = j;
				}
			}
		}
		for (int z = 0, g = 0; z < 7; z++)
		{
			a[max_row][g].num = -1;
			a[max_row][g].rate = 0;
			g++;
		}
		for (int k = 0, n = 0; k < 7; k++)
		{
			a[n][max_col].num = -1;
			a[n][max_col].rate = 0;
			n++;
		}
		//��� ����� ������� ������� ������ -1 
		a[max_col][max_row].num = -1;
		a[max_col][max_row].rate = 0;

		ways1[k].first = max_row + 1;//���������� � ������ � ������ ������
		ways1[k].second = max_col + 1;
		result += b[max_row][max_col];//��������� � ���������
	}
	//��������� ���������� ��� ������� ����� � ��������, ����� �������� ���������� ����� �������� ����� ����
	int col_p = 0;
	int row_p = 0;
	int p = 4;

	for (int i = 0; i < V1; i++)//�������� ���� ����
	{
		for (int j = 0; j < V2; j++)
		{
			if (a[i][j].num > 1) //��������� ������
			{
				row_p = i;
				col_p = j;
				ways1[p].first = row_p + 1;
				ways1[p].second = col_p + 1;
				p++;
				result += b[row_p][col_p];
			}
		}
		//��������� ����������� �� �������������� ����
	}
	int tmp_help = 1;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (ways1[j].first == tmp_help)	//����������� ���� �� �������
			{
				tmp_help = ways1[j].second;
				ways2[i] = ways1[j].first;
				break;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	const int V1 = 7;
	const int V2 = 7;
	//(-1) - ��� �������� "�������������" 
	zerorate matr1[V1][V2] = 
	{ 
		{0, 0, 42, 0, 19, 0, -1, 0, -1 , 0, -1, 0, 12, 0},
		{42, 0, 0, 0, -1, 0, 23, 0, 19, 0, -1, 0, -1, 0 },
		{22, 0, -1, 0, 0, 0, -1, 0, 34, 0, 33, 0, -1, 0},
		{-1, 0, 43, 0, -1, 0, 0, 0, -1, 0, 9, 0, -1, 0},
		{-1, 0, 22, 0, 33, 0, -1, 0, 0, 0, -1, 0, 47, 0},
		{-1, 0, -1, 0, 25, 0, 9, 0, -1, 0, 0, 0, 33, 0},
		{12, 0, -1, 0, -1, 0, -1, 0, 47, 0, 26, 0, 0, 0} 
	};

	//������� ���������
	int matr2[V1][V2] = //(-1) - ��� �������� "�������������" 
	{   
		{0, 42,  19,  -1, -1, -1, 12},
		{42, 0, -1, 23, 19, -1, -1},
		{22, -1, 0, -1, 34, 33, -1},
		{-1, 23, -1, 0, -1,  9, -1},
		{-1, 19, 34,-1, 0, -1, 47},
		{-1, -1, 30, 9, -1, 0, 26 },
		{12,-1, -1, -1, 47, 26, 0} 
	};
	//�������� ���� 
	RenderWindow window(VideoMode(1080, 1080), "Mission Complited!");

	Text text;

	//������ ��� 
	Texture texture;
	texture.loadFromFile("background.jpg");
	Sprite sprite;
	sprite.setTexture(texture);

	//����������-�������
	DVertex t[7];
	for (int i = 0; i < 7; i++)
	{
		t[i].setRadius(80);
	}

	//����� ����� � ������� ������
	t[0].setText("1) Liverpool");
	t[0].setPosition(400, 20);

	t[1].setText("2) Manchester");
	t[1].setPosition(900, 400);

	t[2].setText("3) London");
	t[2].setPosition(500, 500);

	t[3].setText("4) Leeds");
	t[3].setPosition(900, 50);

	t[4].setText("5) Edinburgh");
	t[4].setPosition(800, 800);

	t[5].setText("6) Cardiff");
	t[5].setPosition(50, 200);

	t[6].setText("7) Glasgow");
	t[6].setPosition(50, 800);

	//����� ������
	DLine l[20];

	//��������� ������� � ����� ���
	string l0 = to_string(matr2[0][1]);
	l[0].setVertex(t[0], t[1], l0);

	string l1 = to_string(matr2[0][2]);
	l[1].setVertex(t[0], t[2], l1);

	string l2 = to_string(matr2[0][6]);
	l[2].setVertex(t[0], t[6], l2);

	string l3 = to_string(matr2[1][0]);
	l[3].setVertex(t[1], t[0], l3);

	string l4 = to_string(matr2[1][3]);
	l[4].setVertex(t[1], t[3], l4);

	string l5 = to_string(matr2[1][4]);
	l[5].setVertex(t[1], t[4], l5);

	string l6 = to_string(matr2[2][0]);
	l[6].setVertex(t[2], t[0], l6);

	string l7 = to_string(matr2[2][4]);
	l[7].setVertex(t[2], t[4], l7);

	string l8 = to_string(matr2[2][5]);
	l[8].setVertex(t[2], t[5], l8);

	string l9 = to_string(matr2[3][1]);
	l[9].setVertex(t[3], t[1], l9);

	string l10 = to_string(matr2[3][5]);
	l[10].setVertex(t[3], t[5], l10);

	string l11 = to_string(matr2[4][1]);
	l[11].setVertex(t[4], t[1], l11);

	string l12 = to_string(matr2[4][2]);
	l[12].setVertex(t[4], t[2], l12);

	string l13 = to_string(matr2[4][6]);
	l[13].setVertex(t[4], t[6], l13);

	string l14 = to_string(matr2[5][2]);
	l[14].setVertex(t[5], t[2], l14);

	string l15 = to_string(matr2[5][3]);
	l[15].setVertex(t[5], t[3], l15);

	string l16 = to_string(matr2[5][6]);
	l[16].setVertex(t[5], t[6], l16);

	string l17 = to_string(matr2[6][0]);
	l[17].setVertex(t[6], t[0], l17);

	string l18 = to_string(matr2[6][4]);
	l[18].setVertex(t[6], t[4], l18);

	string l19 = to_string(matr2[6][5]);
	l[19].setVertex(t[6], t[5], l19);

	
	RectangleShape button(Vector2f(100, 100));
	button.setFillColor(Color::Yellow);
	button.setOutlineThickness(3);
	button.setOutlineColor(Color::White);
	
	while (window.isOpen())
	{
		Vector2i mouse_pos = Mouse::getPosition(window); //������ ������ ����
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
			{
				// "������� ����"
				window.close();
				break;
			}
			}

			if (event.type == Event::MouseButtonPressed)//������� �� ������� ������ ���� = ������� ���������� ����(shortWay)
				if (event.key.code == Mouse::Left)
					if (button.getGlobalBounds().contains(mouse_pos.x, mouse_pos.y))
					{
						shortWay(V1, V2, matr1, matr2);
					}
		}
		//��������������� ������ ����
		window.clear(Color::Red);

		//"������" ������ ��� � ����
		window.draw(sprite);

		//"������" � ���� �����-���������� ������
		for (int i = 0; i < 20; i++)
		{
			l[i].draw(window);
		}

		//"������" � ���� �������
		for (int i = 0; i < 7; i++)
		{
			t[i].draw(window);
		}
		//�������� ������ � ����
		Text text[18];
		Font font;
		//����������� ������
		for (int i = 0; i < 18; i++)
		{
			font.loadFromFile("arial.ttf");
			text[i].setFont(font);
			text[i].setFillColor(Color::Black);
			text[i].setCharacterSize(15); 
			text[i].setOutlineThickness(5);
			text[i].setOutlineColor(Color::White);
		}

		//������ � ������� ������-��������� ��� ������ �� �����
		int k_pos = 250;

		//������� ������� ������
		for (int i = 1; i < 17; i++)
		{
			text[i].setPosition(k_pos, 970);
			k_pos += 40;
		}

		//������ � ����������� ���������� ����� 
		text[0].setString(L"���������� ���� ");
		text[0].setPosition(100, 970);

		string t1 = to_string(ways2[0]);
		text[1].setString(t1);

		text[2].setString("->");

		string t2 = to_string(ways2[1]);
		text[3].setString(t2);

		text[4].setString("->");

		string t3 = to_string(ways2[2]);
		text[5].setString(t3);

		text[6].setString("->");

		string t4 = to_string(ways2[3]);
		text[7].setString(t4);

		text[8].setString("->");

		string t5 = to_string(ways2[4]);
		text[9].setString(t5);

		text[10].setString("->");

		string t6 = to_string(ways2[5]);
		text[11].setString(t6);

		text[12].setString("->");

		string t7 = to_string(ways2[6]);
		text[13].setString(t7);

		text[14].setString("->");

		string t8 = to_string(ways2[7]);
		text[15].setString(t8);

		text[16].setString(L"���������");
		text[16].setPosition(900, 970);

		string t_distance = to_string(result);
		text[17].setString(t_distance);
		text[17].setPosition(1000, 970);
		
		//��������� � ����� ������
		for (int i = 0; i < 18; i++)
		{
			window.draw(text[i]);
		}

		//"������" ������
		window.draw(button);

		//����� ���� "������������" ���������
		window.display();
		//����������! "������������" �������� ����������(�.� �������� ��������������� ����������, �������� ���� �����, ����� ������� display())
	};
	return 0;
}