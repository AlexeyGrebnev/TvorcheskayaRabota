#pragma once
#include <iostream>
#include <cmath>
#include <string>

namespace Project55 {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Orchid;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(471, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логарифмы чисел при различных основаниях";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(26, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 28);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Orchid;
			this->label2->Location = System::Drawing::Point(8, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите основание логарифма:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Red;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkVisited = true;
			this->linkLabel1->Location = System::Drawing::Point(464, 505);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(92, 16);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Онлайн-урок";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Orchid;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Orchid;
			this->label3->Location = System::Drawing::Point(8, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите число логарифма:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(26, 242);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 28);
			this->textBox2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Orchid;
			this->label4->Location = System::Drawing::Point(8, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Результат:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(26, 312);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(286, 28);
			this->textBox3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Orchid;
			this->button2->Location = System::Drawing::Point(94, 346);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 40);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Orchid;
			this->button1->Location = System::Drawing::Point(412, 455);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Полная чистка";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Orchid;
			this->label5->Location = System::Drawing::Point(345, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(290, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Введите основание логарифма:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Orchid;
			this->label6->Location = System::Drawing::Point(345, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(251, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Введите число логарифма:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Orchid;
			this->label7->Location = System::Drawing::Point(345, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Результат:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(367, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(286, 28);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(367, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(286, 28);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(367, 312);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(286, 28);
			this->textBox6->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Orchid;
			this->button3->Location = System::Drawing::Point(433, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 40);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Orchid;
			this->label8->Location = System::Drawing::Point(697, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 24);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Результат действий:";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(714, 170);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(286, 28);
			this->textBox7->TabIndex = 18;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Сложение", L"Вычитание" });
			this->comboBox1->Location = System::Drawing::Point(853, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 27);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Orchid;
			this->label9->Location = System::Drawing::Point(21, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 26);
			this->label9->TabIndex = 20;
			this->label9->Text = L"log";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Orchid;
			this->label10->Location = System::Drawing::Point(364, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 26);
			this->label10->TabIndex = 21;
			this->label10->Text = L"log";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::Color::Orchid;
			this->textBox8->Location = System::Drawing::Point(49, 119);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(26, 12);
			this->textBox8->TabIndex = 22;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->textBox9->ForeColor = System::Drawing::Color::Orchid;
			this->textBox9->Location = System::Drawing::Point(392, 119);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(26, 12);
			this->textBox9->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->ForeColor = System::Drawing::Color::Orchid;
			this->textBox10->Location = System::Drawing::Point(67, 97);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(40, 20);
			this->textBox10->TabIndex = 24;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->textBox11->ForeColor = System::Drawing::Color::Orchid;
			this->textBox11->Location = System::Drawing::Point(412, 97);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(40, 20);
			this->textBox11->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label11->ForeColor = System::Drawing::Color::Orchid;
			this->label11->Location = System::Drawing::Point(546, 57);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(301, 24);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Выбор действия над логарифма:";
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Orchid;
			this->button4->Location = System::Drawing::Point(846, 429);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 89);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Рандом";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Orchid;
			this->button6->Location = System::Drawing::Point(476, 99);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 27);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Чистка";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Orchid;
			this->button5->Location = System::Drawing::Point(128, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 27);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Чистка";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1026, 530);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"LogCalculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Функция для вычисления log с разными основаниями 
		double log_n(double osn, double chislo)
		{
			return log(chislo) / log(osn); //вычисляем log основания и делим на вычисленный log числа в логарифме
		}
		//Функция на проверку ввода первого логарифма
		bool Check_log1()
		{
			if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) return false;//Если пустые, то отдаём false
			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9')) {}//Если встречается элемент не 0-9 в первом информационном поле, то отдаём false
				else return false;
			}
			for (int i = 0; i < textBox2->Text->Length; i++)
			{
				if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9')) {}//Если встречается элемент не 0-9 во втором информационном поле, то отдаём false
				else return false;
			}
			return true;//Проверка прошла успешно
		}
		//Функция на проверку ввода второго логарифма
		bool Check_log2()
		{
			if ((textBox4->Text->Length == 0) || (textBox5->Text->Length == 0)) return false; //Если пустые, то отдаём false
			for (int i = 0; i < textBox4->Text->Length; i++)
			{
				if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9')) {}//Если встречается элемент не 0-9 в первом информационном поле, то отдаём false
				else return false;
			}
			for (int i = 0; i < textBox5->Text->Length; i++)
			{
				if ((textBox5->Text[i] >= '0') && (textBox5->Text[i] <= '9')) {}//Если встречается элемент не 0-9 во втором информационном поле, то отдаём false
				else return false; 
			}
			return true;//Проверка прошла успешно
		}
	//Функция клика по ссылке в калькуляторе на видео-урок
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		Diagnostics::Process::Start("MicrosoftEdge.exe", "https://www.youtube.com/watch?v=iGLQTAsWZ3Q");
	}
	//Функция клика по кнопке для вычисления первого логарифма
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Check_log1())//Проверка на ввод
		{
			//Передача значений в логарифм, который отображает математический вид в верхней части калькулятора
			textBox8->Text = textBox1->Text;
			textBox10->Text = textBox2->Text;
			int osn, num;
			double result;

			//Конвертация для присваивания переменной с целью вычисления логарифма
			osn = System::Convert::ToInt64(textBox1->Text);
			num = System::Convert::ToInt64(textBox2->Text);

			//Конвертация результата и последующий вывод в информационного поле результата в калькуляторе
			result = Convert::ToDouble(log_n(osn, num));
			textBox3->Text = Convert::ToString(result);
		}
		else MessageBox::Show("Ошибка ввода данных", "Выполнение программы"); //Если ввод будет не верен, то выйдет окно ошибки
	}
	//Функция клика по кнопке для полной очистки информационных полей
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
	}
	//Функция клика по кнопке для вычисления второго логарифма
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	if (Check_log2())//Проверка на ввод
	{
		//Передача значений в логарифм, который отображает математический вид в верхней части калькулятора
		textBox9->Text = textBox4->Text;
		textBox11->Text = textBox5->Text;
		int osn, num;
		double result;

		//Конвертация для присваивания переменной с целью вычисления логарифма
		osn = System::Convert::ToInt64(textBox4->Text);
		num = System::Convert::ToInt64(textBox5->Text);

		//Конвертация результата и последующий вывод в информационного поле результата в калькуляторе
		result = Convert::ToDouble(log_n(osn, num));
		textBox6->Text = Convert::ToString(result);
	}
	else MessageBox::Show("Ошибка ввода данных", "Выполнение программы");//Если ввод будет не верен, то выйдет окно ошибки

}
	//Функция списка действий над двумя логарифмами через combobox
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Text = "";//Очищаем информационное поле результата при каждом выборе
	switch(comboBox1->SelectedIndex)
	{
	case 0:
		if(textBox3->Text->Length == 0 || textBox6->Text->Length == 0) MessageBox::Show("Результаты двух логарифмов не найдены! ");//Вывод ошибки 

		else textBox7->Text = Convert::ToString(Convert::ToDouble(textBox3->Text) + Convert::ToDouble(textBox6->Text)); //Сложение логарифмов
		break;

	case 1:
		if (textBox3->Text->Length == 0 || textBox6->Text->Length == 0) MessageBox::Show("Результаты двух логарифмов не найдены! ");//Вывод ошибки 
		
		else textBox7->Text = Convert::ToString(Convert::ToDouble(textBox3->Text) - Convert::ToDouble(textBox6->Text));//Вычитание логарифмов
	}
}
	   //Функция клика по кнопке рандома значений для вычисления двух логарифмов с предварительной очисткой информационных полей
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length != 0 || textBox2->Text->Length != 0 || textBox4->Text->Length != 0 || textBox5->Text->Length != 0)
	{
		textBox1->Text = "";
		textBox2->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
	}
	textBox1->Text += rand() % 16;
	textBox2->Text += rand() % 13;
	textBox4->Text += rand() % 17;
	textBox5->Text += rand() % 14;

	textBox8->Text = textBox1->Text;
	textBox10->Text = textBox2->Text;

	textBox9->Text = textBox4->Text;
	textBox11->Text = textBox5->Text;

}
	   //Функции клика по кнопкам для частного удаления(т.е только у одного log) в информационных полях (1 и 2 логарифмы)
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox8->Text = "";
	textBox10->Text = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox9->Text = "";
	textBox11->Text = "";
}
};
}
