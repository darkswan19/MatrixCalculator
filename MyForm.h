#pragma once

namespace MatrixDeterminant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;



	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;

	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Button^ button3;














	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(112, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(216, 156);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(320, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 26);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(112, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(107, 26);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(216, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(107, 26);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(320, 206);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(107, 26);
			this->textBox6->TabIndex = 3;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(112, 255);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(107, 26);
			this->textBox7->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(216, 255);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(107, 26);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(320, 255);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(107, 26);
			this->textBox9->TabIndex = 6;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Window;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(112, 312);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(315, 26);
			this->textBox13->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 23);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Matrix Determinant 3x3";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 21);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Result:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 314);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Result:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(173, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 36);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(173, 610);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 28);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Clean";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(36, 422);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 20);
			this->textBox10->TabIndex = 14;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(100, 422);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 20);
			this->textBox11->TabIndex = 15;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(36, 465);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 20);
			this->textBox12->TabIndex = 16;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(100, 465);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 20);
			this->textBox14->TabIndex = 17;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(207, 422);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(49, 20);
			this->textBox15->TabIndex = 18;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(275, 422);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(49, 20);
			this->textBox16->TabIndex = 19;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(207, 465);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(49, 20);
			this->textBox17->TabIndex = 20;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(275, 465);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(49, 20);
			this->textBox18->TabIndex = 21;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(390, 422);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(49, 20);
			this->textBox19->TabIndex = 24;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(457, 422);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(49, 20);
			this->textBox20->TabIndex = 25;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(390, 465);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(49, 20);
			this->textBox21->TabIndex = 26;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(457, 465);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(49, 20);
			this->textBox22->TabIndex = 27;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(341, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 33);
			this->button3->TabIndex = 28;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"+", L"-", L"x" });
			this->comboBox1->Location = System::Drawing::Point(157, 437);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(41, 29);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->Text = L"+";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(151, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 31);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Matrix Calculator";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(546, 650);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Matrix Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {	
}
bool defence() { //to avoid errors and empty cells
	if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) || (textBox4->Text->Length == 0) || (textBox5->Text->Length == 0) || (textBox6->Text->Length == 0) || (textBox7->Text->Length == 0) || (textBox8->Text->Length == 0) || (textBox9->Text->Length == 0)) {
		return false;
	}
	for (int i = 0; i < textBox1->Text->Length; i++) {
		if ((textBox1->Text[0] == '-') || (textBox1->Text[i] >= '0') & (textBox1->Text[i] <= '9')) { return true; }
		else {return false;}
		if ((textBox1->Text[0] == '.') || (textBox1->Text[textBox1->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox2->Text->Length; i++) {
		if ((textBox2->Text[0] == '-') || (textBox2->Text[i] >= '0') & (textBox2->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox2->Text[0] == '.') || (textBox2->Text[textBox2->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox3->Text->Length; i++) {
		if ((textBox3->Text[0] == '-') || (textBox3->Text[i] >= '0') & (textBox3->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox3->Text[0] == '.') || (textBox3->Text[textBox3->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox4->Text->Length; i++) {
		if ((textBox4->Text[0] == '-') || (textBox4->Text[i] >= '0') & (textBox4->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox4->Text[0] == '.') || (textBox4->Text[textBox4->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox5->Text->Length; i++) {
		if ((textBox5->Text[0] == '-') || (textBox5->Text[i] >= '0') & (textBox5->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox5->Text[0] == '.') || (textBox5->Text[textBox5->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox6->Text->Length; i++) {
		if ((textBox6->Text[0] == '-') || (textBox6->Text[i] >= '0') & (textBox6->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox6->Text[0] == '.') || (textBox6->Text[textBox6->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox7->Text->Length; i++) {
		if ((textBox7->Text[0] == '-') || (textBox7->Text[i] >= '0') & (textBox7->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox7->Text[0] == '.') || (textBox7->Text[textBox7->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox8->Text->Length; i++) {
		if ((textBox8->Text[0] == '-') || (textBox8->Text[i] >= '0') & (textBox8->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox8->Text[0] == '.') || (textBox8->Text[textBox8->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox9->Text->Length; i++) {
		if ((textBox9->Text[0] == '-') || (textBox9->Text[i] >= '0') & (textBox9->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox9->Text[0] == '.') || (textBox9->Text[textBox9->Text->Length - 1] == '.')) {
			return false;
		}
	}
}
bool defence2() { //to avoid errors and empty cells
	if ((textBox10->Text->Length == 0) || (textBox11->Text->Length == 0) || (textBox12->Text->Length == 0) || (textBox14->Text->Length == 0) || (textBox15->Text->Length == 0) || (textBox16->Text->Length == 0) || (textBox17->Text->Length == 0) || (textBox18->Text->Length == 0)) {
		return false;
	}
	for (int i = 0; i < textBox10->Text->Length; i++) {
		if ((textBox10->Text[0] == '-') || (textBox10->Text[i] >= '0') & (textBox10->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox10->Text[0] == '.') || (textBox10->Text[textBox10->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox11->Text->Length; i++) {
		if ((textBox11->Text[0] == '-') || (textBox11->Text[i] >= '0') & (textBox11->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox11->Text[0] == '.') || (textBox11->Text[textBox11->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox12->Text->Length; i++) {
		if ((textBox12->Text[0] == '-') || (textBox12->Text[i] >= '0') & (textBox12->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox12->Text[0] == '.') || (textBox12->Text[textBox12->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox14->Text->Length; i++) {
		if ((textBox14->Text[0] == '-') || (textBox14->Text[i] >= '0') & (textBox14->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox14->Text[0] == '.') || (textBox14->Text[textBox14->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox15->Text->Length; i++) {
		if ((textBox15->Text[0] == '-') || (textBox15->Text[i] >= '0') & (textBox15->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox15->Text[0] == '.') || (textBox15->Text[textBox15->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox16->Text->Length; i++) {
		if ((textBox16->Text[0] == '-') || (textBox16->Text[i] >= '0') & (textBox6->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox16->Text[0] == '.') || (textBox16->Text[textBox16->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox17->Text->Length; i++) {
		if ((textBox17->Text[0] == '-') || (textBox17->Text[i] >= '0') & (textBox17->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox17->Text[0] == '.') || (textBox17->Text[textBox17->Text->Length - 1] == '.')) {
			return false;
		}
	}
	for (int i = 0; i < textBox18->Text->Length; i++) {
		if ((textBox18->Text[0] == '-') || (textBox18->Text[i] >= '0') & (textBox18->Text[i] <= '9')) { return true; }
		else { return false; }
		if ((textBox18->Text[0] == '.') || (textBox18->Text[textBox18->Text->Length - 1] == '.')) {
			return false;
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	textBox6->Text = L"";
	textBox7->Text = L"";
	textBox8->Text = L"";
	textBox9->Text = L"";
	textBox13->Text = L"";
	textBox10->Text = L"";
	textBox11->Text = L"";
	textBox12->Text = L"";
	textBox14->Text = L"";
	textBox15->Text = L"";
	textBox16->Text = L"";
	textBox17->Text = L"";
	textBox18->Text = L"";
	textBox19->Text = L"";
	textBox20->Text = L"";
	textBox21->Text = L"";
	textBox22->Text = L"";
}
void convert_calculate() {
	double det, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	a1 = System::Convert::ToDouble(textBox1->Text);
	a2 = System::Convert::ToDouble(textBox2->Text);
	a3 = System::Convert::ToDouble(textBox3->Text);
	a4 = System::Convert::ToDouble(textBox4->Text);
	a5 = System::Convert::ToDouble(textBox5->Text);
	a6 = System::Convert::ToDouble(textBox6->Text);
	a7 = System::Convert::ToDouble(textBox7->Text);
	a8 = System::Convert::ToDouble(textBox8->Text);
	a9 = System::Convert::ToDouble(textBox9->Text);
	det = (a1 * a5 * a9) + (a2 * a6 * a7) + (a3 * a4 * a8) - (a3 * a5 * a7) - (a1 * a6 * a8) - (a2 * a4 * a9);
	textBox13->Text = System::Convert::ToString(det);
}


private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   void convert_calculate2 () {
		   double b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
		   b1 = System::Convert::ToDouble(textBox10->Text);
		   b2 = System::Convert::ToDouble(textBox11->Text);
		   b3 = System::Convert::ToDouble(textBox12->Text);
		   b4 = System::Convert::ToDouble(textBox14->Text);
		   c1 = System::Convert::ToDouble(textBox15->Text);
		   c2 = System::Convert::ToDouble(textBox16->Text);
		   c3 = System::Convert::ToDouble(textBox17->Text);
		   c4 = System::Convert::ToDouble(textBox18->Text);
		   if (comboBox1->SelectedItem == "+") {
			   d1 = b1 + c1;
			   d2 = b2 + c2;
			   d3 = b3 + c3;
			   d4 = b4 + c4;
		   }
		   else
			   if (comboBox1->SelectedItem == "-") {
				   d1 = b1 - c1;
				   d2 = b2 - c2;
				   d3 = b3 - c3;
				   d4 = b4 - c4;
			   }
			   else
				   if (comboBox1->SelectedItem == "x") {
					   d1 = b1 * c1 + b2 * c3;
					   d2 = b1 * c2 + b2 * c4;
					   d3 = b3 * c1 + b4 * c3;
					   d4 = b3 * c2 + b4 * c4;
				   }
		   textBox19->Text = System::Convert::ToString(d1);
		   textBox20->Text = System::Convert::ToString(d2);
		   textBox21->Text = System::Convert::ToString(d3);
		   textBox22->Text = System::Convert::ToString(d4);
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (defence()) {
		convert_calculate();
	}
	else {
		MessageBox::Show("Error! Incorrect data");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (defence2()) {
		convert_calculate2();
	}
	else {
		MessageBox::Show("Error! Incorrect data");
}
//private: System::Void label5_Click(System::Object ^ sender, System::EventArgs ^ e) {
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}