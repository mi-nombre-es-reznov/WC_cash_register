#pragma once
#include "Add_Tax.h"

namespace WCcashregister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cash_register_UI
	/// </summary>
	public ref class Cash_register_UI : public System::Windows::Forms::Form
	{
	public:
		String^ Tax_Val;

	public:
		Cash_register_UI(String^ tax_rate)
		{
			InitializeComponent();

			Tax_Val = tax_rate;
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1->Location = System::Drawing::Point(63, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(214, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 81);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(365, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 81);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(365, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 81);
			this->button4->TabIndex = 5;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(214, 226);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 81);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(63, 226);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 81);
			this->button6->TabIndex = 3;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(365, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 81);
			this->button7->TabIndex = 8;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(214, 349);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 81);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(63, 349);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(94, 81);
			this->button9->TabIndex = 6;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(365, 469);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(94, 81);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Clear";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Cash_register_UI::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(214, 469);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(94, 81);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Cash_register_UI::Buttons_clicked);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(63, 469);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(94, 81);
			this->button12->TabIndex = 9;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Cash_register_UI::button12_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(63, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(396, 43);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(6, 19);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(183, 49);
			this->button13->TabIndex = 13;
			this->button13->Text = L"Add Item";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(205, 19);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(185, 49);
			this->button14->TabIndex = 14;
			this->button14->Text = L"Total";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 50.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(667, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(568, 82);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Sanger Women\'s Club";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Location = System::Drawing::Point(63, 556);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 80);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Common Transaction Tools";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Location = System::Drawing::Point(494, 105);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(127, 222);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Extras";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(6, 153);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(114, 49);
			this->button17->TabIndex = 15;
			this->button17->Text = L"Discount";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(6, 19);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(114, 49);
			this->button15->TabIndex = 13;
			this->button15->Text = L"Remove";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(6, 86);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(114, 49);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Tax";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Cash_register_UI::button16_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(667, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 414);
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
			this->groupBox3->Location = System::Drawing::Point(494, 337);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(127, 299);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Common Operations";
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(6, 242);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(114, 49);
			this->button22->TabIndex = 20;
			this->button22->Text = L"=";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Cash_register_UI::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(6, 187);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(114, 49);
			this->button21->TabIndex = 19;
			this->button21->Text = L"/";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(6, 132);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(114, 49);
			this->button20->TabIndex = 18;
			this->button20->Text = L"*";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(6, 77);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(114, 49);
			this->button19->TabIndex = 17;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(6, 22);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(114, 49);
			this->button18->TabIndex = 16;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Cash_register_UI::Operations);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 20;
			// 
			// Cash_register_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 663);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
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
			this->Name = L"Cash_register_UI";
			this->Text = L"Cash_register_UI";
			this->Load += gcnew System::EventHandler(this, &Cash_register_UI::Cash_register_UI_Load);
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

	if (textBox1->Text == "0")
	{
		textBox1->Text = Numbers->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}

private: System::Void Operations(System::Object^  sender, System::EventArgs^  e) {

	Button ^ Ops = safe_cast<Button^>(sender);

	first_num = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = Ops->Text;
	label2->Text = System::Convert::ToString(first_num) + " " + operators;
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
	label2->Text = "";
}

private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text = "";
	second_num = Double::Parse(textBox1->Text);

	if (operators == "+")
	{
		result = first_num + second_num;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = first_num - second_num;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = first_num * second_num;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = first_num / second_num;
		textBox1->Text = System::Convert::ToString(result);
	}
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}

private: System::Void Cash_register_UI_Load(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = Tax_Val;
}

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0");
	else
	{
		Add_Tax^ new_window = gcnew Add_Tax();
		new_window->ShowDialog();
	}
}

};
}