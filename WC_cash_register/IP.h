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
	public ref class IP : public System::Windows::Forms::Form
	{
	// Public events (using delegates) are declared here in order to publish strings 
	// for the subscriber (main form) who listens to these events

	// Event IP address, username, and password
	public: delegate void EventDelegate3(System::Object^ sender, System::EventArgs^ e, String^ ip, String^ un, String^ pw, String^ port);	// Publish an event with a text message that others can subscribe to
	public: event EventDelegate3^ myEvent3;

	public:
		IP(void)
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
		~IP()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1->Click += gcnew System::EventHandler(this, &IP::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(318, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter the IP Address of host server: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(370, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 37);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IP::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(152, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"IP Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Enter the username of the host server:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(318, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Enter the password of host server: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(318, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(116, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(261, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Enter the port number of host server: ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(318, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"0";
			// 
			// IP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 258);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"IP";
			this->Text = L"IP Address";
			this->Load += gcnew System::EventHandler(this, &IP::IP_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double verify;
		String ^ IP_addr;
		bool flag_ip, flag_un, flag_pw, flag_port = false;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void IP_Load(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = "0";
	}

	public: void issueEvent3(System::Object^ sender, System::EventArgs^ e)	// This is where we publish the event to all.
	{
		this->myEvent3(this, e, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text);	// Raise the event using event delegate signature
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text != "0")	// Give a message of whether tax was added (requires > 0%) for a tax added message.
		{
			flag_ip = true;
		}

		if (textBox2->Text != "0")
		{
			flag_un = true;
		}

		if (textBox3->Text != "0")
		{
			flag_pw = true;
		}

		if (textBox4->Text != "0")
		{
			flag_port = true;
		}

		if (flag_ip == true && flag_un == true && flag_pw == true && flag_port)
		{
			this->issueEvent3(sender, e);
			MessageBox::Show("Data entered");
			this->Close();
		}
		else
		{
			MessageBox::Show("Please enter all appropriate data before submitting.");
		}

		// Reset all the flags to false
		flag_ip = flag_un = flag_pw = flag_port = false;
	}
};
}
