#pragma once

namespace WCcashregister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_Tax
	/// </summary>
	public ref class Get_Name: public System::Windows::Forms::Form
	{
		// Public events (using delegates) are declared here in order to publish strings 
		// for the subscriber (main form) who listens to these events
	public: delegate void EventDelegate4(System::Object^ sender, System::EventArgs^ e, String^ save_name, String^ Comp_name);	// Publish an event with a text message that others can subscribe to
	public: event EventDelegate4^ myEvent4;

	public:
		Get_Name(void)
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
		~Get_Name()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Get_Name::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(258, 134);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter file save name:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(370, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 37);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Get_Name::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(151, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Get Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Enter computer name:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(258, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Get_Name::textBox2_TextChanged);
			// 
			// Get_Name
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 258);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Get_Name";
			this->Text = L"Save File";
			this->Load += gcnew System::EventHandler(this, &Get_Name::Add_Tax_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double verify;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void Add_Tax_Load(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = "0";
		this->textBox2->Text = "0";
	}

	public: void issueEvent4(System::Object^ sender, System::EventArgs^ e)	// This is where we publish the event to all.
	{
		this->myEvent4(this, e, this->textBox1->Text, this->textBox2->Text);	// Raise the event using event delegate signature
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0" || textBox2->Text == "0")	// Give a message of whether tax was added (requires > 0%) for a tax added message.
		{
			MessageBox::Show("File name invalid!");
		}
		else
		{
			this->issueEvent4(sender, e);
			this->Close();	// Close the Tax window
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
