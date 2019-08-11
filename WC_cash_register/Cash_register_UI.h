#pragma once
#include "Add_Tax.h"
#include "Discount.h"
#include "IP.h"
#include <math.h>

namespace WCcashregister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Cash_register_UI
	/// </summary>
	public ref class Cash_register_UI : public System::Windows::Forms::Form
	{
	public:
		Cash_register_UI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Cash_register_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox;

	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button24;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cash_register_UI::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(84, 129);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(285, 129);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(487, 129);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(487, 278);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 100);
			this->button4->TabIndex = 5;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(285, 278);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 100);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(84, 278);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 100);
			this->button6->TabIndex = 3;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(487, 430);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 100);
			this->button7->TabIndex = 8;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(285, 430);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 100);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(84, 430);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 100);
			this->button9->TabIndex = 6;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(487, 577);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 100);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Clear";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Cash_register_UI::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(285, 577);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 100);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(84, 577);
			this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(125, 100);
			this->button12->TabIndex = 9;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Cash_register_UI::button12_Click);
			// 
			// textBox
			// 
			this->textBox->BackColor = System::Drawing::SystemColors::Window;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(84, 38);
			this->textBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(527, 52);
			this->textBox->TabIndex = 12;
			this->textBox->Text = L"0";
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(5, 23);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(244, 60);
			this->button13->TabIndex = 13;
			this->button13->Text = L"Add Item";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Cash_register_UI::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(273, 23);
			this->button14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(247, 60);
			this->button14->TabIndex = 14;
			this->button14->Text = L"Total";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Cash_register_UI::button14_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 50.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(889, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(705, 101);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Sanger Women\'s Club";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Location = System::Drawing::Point(84, 684);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(528, 98);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Common Transaction Tools";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Location = System::Drawing::Point(659, 129);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(169, 273);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Extras";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(8, 188);
			this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(152, 60);
			this->button17->TabIndex = 15;
			this->button17->Text = L"Discount";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Cash_register_UI::button17_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(8, 23);
			this->button15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(152, 60);
			this->button15->TabIndex = 13;
			this->button15->Text = L"Remove";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Cash_register_UI::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(8, 106);
			this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(152, 60);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Tax";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Cash_register_UI::button16_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(889, 129);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(757, 508);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Location = System::Drawing::Point(659, 415);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Size = System::Drawing::Size(169, 368);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Common Operations";
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(8, 298);
			this->button22->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(152, 60);
			this->button22->TabIndex = 20;
			this->button22->Text = L"=";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Cash_register_UI::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(8, 230);
			this->button21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(152, 60);
			this->button21->TabIndex = 19;
			this->button21->Text = L"/";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(8, 162);
			this->button20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(152, 60);
			this->button20->TabIndex = 18;
			this->button20->Text = L"*";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(8, 95);
			this->button19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(152, 60);
			this->button19->TabIndex = 17;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(8, 27);
			this->button18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(152, 60);
			this->button18->TabIndex = 16;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 46);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(892, 641);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 21;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(667, 38);
			this->button23->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(152, 55);
			this->button23->TabIndex = 22;
			this->button23->Text = L"Statistics";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Cash_register_UI::button23_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(892, 677);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(892, 716);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(892, 757);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 29);
			this->label6->TabIndex = 25;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(-1, -1);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 23);
			this->button24->TabIndex = 26;
			this->button24->Text = L"Connect";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Cash_register_UI::button24_Click);
			// 
			// Cash_register_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1781, 818);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Cash_register_UI";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"Sanger Women\'s Club POS logger";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Cash_register_UI::Exit_Program);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
// Global Variables
		double first_num;
		double second_num;
		double result;
		String^ operators;
		String^ tax;

private: System::Void Buttons_clicked(System::Object^  sender, System::EventArgs^  e) {
	Button ^ Numbers = safe_cast<Button^>(sender);

	if (textBox->Text == "0")
	{
		textBox->Text = Numbers->Text;
	}
	else
	{
		textBox ->Text = textBox->Text + Numbers->Text;
	}
}

private: System::Void Operations(System::Object^  sender, System::EventArgs^  e) {

	Button ^ Ops = safe_cast<Button^>(sender);

	first_num = Double::Parse(textBox->Text);
	textBox ->Text = "";
	operators = Ops->Text;
	label2->Text = System::Convert::ToString(first_num) + " " + operators;
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox->Text = "0";
	label2->Text = "";

	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";
}

private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text = "";
	second_num = Double::Parse(textBox->Text);

	if (operators == "+")
	{
		result = first_num + second_num;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = first_num - second_num;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = first_num * second_num;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = first_num / second_num;
		textBox->Text = System::Convert::ToString(result);
	}
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!textBox->Text->Contains("."))
	{
		textBox->Text = textBox->Text + ".";
	}
}

// More variables - Passing data between forms
private: Add_Tax^ AT;
private: Discount^ Dis;
private: IP^ IP_address;

double tax_rate, discount_rate;
double res_with_tax, res_with_discount;
bool Tax_pressed, Discount_pressed, IP_pressed = false;
double db_result, db_asset, db_defecit, db_temp;
int last_num_db;
double sum_assets, sum_defecits, sum_total;
String^ IP_addr;
String^ User;
String^ PW;
String^ port;

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) { 
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	if (textBox->Text == "0");	// Do not open Tax window if value on calculator is $0.00
	else
	{
		this->AT = gcnew Add_Tax();

		// Main becomes subscriber to child window
		this->AT->myEvent1 += gcnew Add_Tax::EventDelegate1(this, &WCcashregister::Cash_register_UI::mySubscriber1a);
		this->AT->Show();

		Tax_pressed = true;
	}
}

// Main subscriber for form 2 and event handlers (declared above)
private: void mySubscriber1a(System::Object^ sender, System::EventArgs^ e, String^ text)
	{
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	if (Tax_pressed == true)
	{
		//this->label3->Text = text;	// Display message from child 1
		tax_rate = Convert::ToDouble(text);
		tax_rate /= 100;
		result = Convert::ToDouble(textBox->Text);

		res_with_tax = (result + (result * tax_rate));

		// Round to $ amount
		res_with_tax = ((int)(res_with_tax * 100 + .5) / 100.0);

		// Display added tax
		this->label3->Text = "Tax added to total: $" + (result * tax_rate);
		this->textBox->Text = Convert::ToString(res_with_tax);
		
		Tax_pressed = false;
	}
	else if (Discount_pressed == true)
	{
		discount_rate = Convert::ToDouble(text);
		discount_rate /= 100;
		result = Convert::ToDouble(textBox->Text);

		res_with_discount = (result - (result * discount_rate));

		// Round to $ amount
		res_with_discount = ((int)(res_with_discount * 100 + .5) / 100.0);

		// Display added tax
		this->label3->Text = "Discount reduced from total: $" + (result * discount_rate);
		this->textBox->Text = Convert::ToString(res_with_discount);

		Discount_pressed = false;
	}
	else if (IP_pressed == true)
	{
		IP_addr = text;

		textBox->Text += text;

		IP_pressed = false;
	}


}

private: void mySubscriber2a(System::Object^ sender, System::EventArgs^ e, String^ ip, String^ un, String^ pw, String^ port_num)
{
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	IP_addr = ip;
	User = un;
	PW = pw;
	port = port_num;
}

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	if (textBox->Text == "0");	// Do not open Discount window if value on calculator is $0.00
	else
	{
		this->Dis = gcnew Discount();

		// Main becomes subscriber to child window
		this->Dis->myEvent2 += gcnew Discount::EventDelegate2(this, &WCcashregister::Cash_register_UI::mySubscriber1a);
		this->Dis->Show();

		Discount_pressed = true;
	}
}

private: System::Void Exit_Program(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Sanger Women's Club POS logger", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Thank you for using NCompEng Technologies!!!");
		Application::ExitThread();
	}
	else
	{
		e->Cancel = true;	// Cancel the shutdown
	}
}

private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ constring = L"datasource = '"+ IP_addr +"'; port = 3306; username = '"+ User +"'; password = '" + PW + "'";
		MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `women_center_db`.`wc_data`;", conDatabase);
		MySqlDataReader ^ myReader;

		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				last_num_db = (myReader->GetInt32(0));
				sum_assets += (myReader->GetDouble(1));
				sum_defecits += (myReader->GetDouble(2));
				sum_total += (myReader->GetDouble(3));
			}

			label3->Text = "The current number of entries in the database: " + last_num_db;
			label4->Text = "Total Assets: $" + sum_assets;
			label5->Text = "Total Deficits: $" + sum_defecits;
			label6->Text = "Total money earned: $" + sum_total;
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show(ex->Message);
		}
}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	// Pull the current price from the screen
	db_temp = Convert::ToDouble(textBox->Text);

	// Update the db_asset value and show the most updated value
	db_asset += db_temp;
	label3->Text = ("Current charges: $" + Convert::ToString(db_asset));

	// Reset the register to '0'.
	textBox->Text = "0";
}

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	// Calculate values
	db_result = (db_asset - db_defecit);

	// Convert the result to that of 2 decimal places.
	db_result = ((int)(db_result * 100 + .5) / 100.0);

	// Connections to database - push values
	String ^ constring = L"datasource = '" + IP_addr + "'; port = 3306; username = '" + User + "'; password = '" + PW + "'";
	MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand ^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `women_center_db`.`wc_data` (`sale_number`, `assets`, `defecits`, `total`) VALUES (NULL, '" + this->db_asset + "', '"+ this->db_defecit +"', '"+ this->db_result +"');", conDatabase);
	MySqlDataReader ^ myReader;

	// Show the final value the customer owes.
	label3->Text = ("Total Due: $ " + Convert::ToString(db_result));

	// Reset values
	db_asset = 0;
	db_defecit = 0;
	db_result = 0;

	try
	{
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	// Pull the current price from the screen
	db_temp = Convert::ToDouble(textBox->Text);

	// Update the db_defecit value and show the most updated value
	db_defecit += db_temp;
	label3->Text = ("Current savings: $" + Convert::ToString(db_defecit));

	// Reset the register to '0'.
	textBox->Text = "0";
}

private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	// Clear stats data
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";

	this->IP_address = gcnew IP();

	// Main becomes subscriber to child window
	this->IP_address->myEvent3 += gcnew IP::EventDelegate3(this, &WCcashregister::Cash_register_UI::mySubscriber2a);

	this->IP_address->Show();
	IP_pressed = true;
}
};
}