#pragma once
#include<cmath>

namespace Project2 {

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
	private: System::Windows::Forms::Button^ prs7;
	protected:

	private: System::Windows::Forms::TextBox^ Screen;
	private: System::Windows::Forms::Button^ prs8;
	private: System::Windows::Forms::Button^ prs9;
	protected:



	private: System::Windows::Forms::Button^ prs6;

	private: System::Windows::Forms::Button^ prs5;

	private: System::Windows::Forms::Button^ prs4;

	private: System::Windows::Forms::Button^ prs3;

	private: System::Windows::Forms::Button^ prs2;

	private: System::Windows::Forms::Button^ prs1;
	private: System::Windows::Forms::Button^ prs0;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;





	private: System::Windows::Forms::Button^ multi;
	private: System::Windows::Forms::Button^ divide;




	private: System::Windows::Forms::Button^ decimal;

	private: System::Windows::Forms::Button^ neg;

	private: System::Windows::Forms::Button^ equals;

	private: System::Windows::Forms::Button^ button19;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->prs7 = (gcnew System::Windows::Forms::Button());
			this->Screen = (gcnew System::Windows::Forms::TextBox());
			this->prs8 = (gcnew System::Windows::Forms::Button());
			this->prs9 = (gcnew System::Windows::Forms::Button());
			this->prs6 = (gcnew System::Windows::Forms::Button());
			this->prs5 = (gcnew System::Windows::Forms::Button());
			this->prs4 = (gcnew System::Windows::Forms::Button());
			this->prs3 = (gcnew System::Windows::Forms::Button());
			this->prs2 = (gcnew System::Windows::Forms::Button());
			this->prs1 = (gcnew System::Windows::Forms::Button());
			this->prs0 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multi = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->neg = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// prs7
			// 
			this->prs7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs7->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs7->ForeColor = System::Drawing::SystemColors::Window;
			this->prs7->Location = System::Drawing::Point(8, 89);
			this->prs7->Margin = System::Windows::Forms::Padding(2);
			this->prs7->Name = L"prs7";
			this->prs7->Size = System::Drawing::Size(98, 68);
			this->prs7->TabIndex = 0;
			this->prs7->Text = L"7";
			this->prs7->UseVisualStyleBackColor = false;
			this->prs7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// Screen
			// 
			this->Screen->BackColor = System::Drawing::Color::Snow;
			this->Screen->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Screen->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Screen->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Screen->ForeColor = System::Drawing::Color::Black;
			this->Screen->Location = System::Drawing::Point(8, 10);
			this->Screen->Margin = System::Windows::Forms::Padding(2);
			this->Screen->MaxLength = 10;
			this->Screen->Multiline = true;
			this->Screen->Name = L"Screen";
			this->Screen->Size = System::Drawing::Size(369, 74);
			this->Screen->TabIndex = 1;
			this->Screen->Text = L"0";
			this->Screen->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Screen->TextChanged += gcnew System::EventHandler(this, &MyForm::Screen_TextChanged);
			// 
			// prs8
			// 
			this->prs8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs8->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs8->ForeColor = System::Drawing::SystemColors::Window;
			this->prs8->Location = System::Drawing::Point(110, 89);
			this->prs8->Margin = System::Windows::Forms::Padding(2);
			this->prs8->Name = L"prs8";
			this->prs8->Size = System::Drawing::Size(98, 68);
			this->prs8->TabIndex = 2;
			this->prs8->Text = L"8";
			this->prs8->UseVisualStyleBackColor = false;
			this->prs8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs9
			// 
			this->prs9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs9->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs9->ForeColor = System::Drawing::SystemColors::Window;
			this->prs9->Location = System::Drawing::Point(212, 89);
			this->prs9->Margin = System::Windows::Forms::Padding(2);
			this->prs9->Name = L"prs9";
			this->prs9->Size = System::Drawing::Size(98, 68);
			this->prs9->TabIndex = 3;
			this->prs9->Text = L"9";
			this->prs9->UseVisualStyleBackColor = false;
			this->prs9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs6
			// 
			this->prs6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs6->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs6->ForeColor = System::Drawing::SystemColors::Window;
			this->prs6->Location = System::Drawing::Point(212, 161);
			this->prs6->Margin = System::Windows::Forms::Padding(2);
			this->prs6->Name = L"prs6";
			this->prs6->Size = System::Drawing::Size(98, 68);
			this->prs6->TabIndex = 6;
			this->prs6->Text = L"6";
			this->prs6->UseVisualStyleBackColor = false;
			this->prs6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs5
			// 
			this->prs5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs5->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs5->ForeColor = System::Drawing::SystemColors::Window;
			this->prs5->Location = System::Drawing::Point(110, 161);
			this->prs5->Margin = System::Windows::Forms::Padding(2);
			this->prs5->Name = L"prs5";
			this->prs5->Size = System::Drawing::Size(98, 68);
			this->prs5->TabIndex = 5;
			this->prs5->Text = L"5";
			this->prs5->UseVisualStyleBackColor = false;
			this->prs5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs4
			// 
			this->prs4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs4->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs4->ForeColor = System::Drawing::SystemColors::Window;
			this->prs4->Location = System::Drawing::Point(8, 161);
			this->prs4->Margin = System::Windows::Forms::Padding(2);
			this->prs4->Name = L"prs4";
			this->prs4->Size = System::Drawing::Size(98, 68);
			this->prs4->TabIndex = 4;
			this->prs4->Text = L"4";
			this->prs4->UseVisualStyleBackColor = false;
			this->prs4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs3
			// 
			this->prs3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs3->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs3->ForeColor = System::Drawing::SystemColors::Window;
			this->prs3->Location = System::Drawing::Point(212, 233);
			this->prs3->Margin = System::Windows::Forms::Padding(2);
			this->prs3->Name = L"prs3";
			this->prs3->Size = System::Drawing::Size(98, 68);
			this->prs3->TabIndex = 9;
			this->prs3->Text = L"3";
			this->prs3->UseVisualStyleBackColor = false;
			this->prs3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs2
			// 
			this->prs2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs2->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs2->ForeColor = System::Drawing::SystemColors::Window;
			this->prs2->Location = System::Drawing::Point(110, 233);
			this->prs2->Margin = System::Windows::Forms::Padding(2);
			this->prs2->Name = L"prs2";
			this->prs2->Size = System::Drawing::Size(98, 68);
			this->prs2->TabIndex = 8;
			this->prs2->Text = L"2";
			this->prs2->UseVisualStyleBackColor = false;
			this->prs2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs1
			// 
			this->prs1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs1->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs1->ForeColor = System::Drawing::SystemColors::Window;
			this->prs1->Location = System::Drawing::Point(8, 233);
			this->prs1->Margin = System::Windows::Forms::Padding(2);
			this->prs1->Name = L"prs1";
			this->prs1->Size = System::Drawing::Size(98, 68);
			this->prs1->TabIndex = 7;
			this->prs1->Text = L"1";
			this->prs1->UseVisualStyleBackColor = false;
			this->prs1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// prs0
			// 
			this->prs0->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->prs0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prs0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prs0->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prs0->ForeColor = System::Drawing::SystemColors::Window;
			this->prs0->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->prs0->Location = System::Drawing::Point(316, 89);
			this->prs0->Margin = System::Windows::Forms::Padding(2);
			this->prs0->Name = L"prs0";
			this->prs0->Padding = System::Windows::Forms::Padding(0, 0, 4, 4);
			this->prs0->Size = System::Drawing::Size(61, 140);
			this->prs0->TabIndex = 10;
			this->prs0->Text = L"0";
			this->prs0->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->prs0->UseVisualStyleBackColor = false;
			this->prs0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::SystemColors::Window;
			this->plus->Location = System::Drawing::Point(8, 305);
			this->plus->Margin = System::Windows::Forms::Padding(2);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(98, 48);
			this->plus->TabIndex = 11;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->ForeColor = System::Drawing::SystemColors::Window;
			this->minus->Location = System::Drawing::Point(110, 305);
			this->minus->Margin = System::Windows::Forms::Padding(2);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(98, 48);
			this->minus->TabIndex = 12;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// multi
			// 
			this->multi->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->multi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multi->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multi->ForeColor = System::Drawing::SystemColors::Window;
			this->multi->Location = System::Drawing::Point(8, 357);
			this->multi->Margin = System::Windows::Forms::Padding(2);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(98, 48);
			this->multi->TabIndex = 13;
			this->multi->Text = L"*";
			this->multi->UseVisualStyleBackColor = false;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::SystemColors::Window;
			this->divide->Location = System::Drawing::Point(212, 305);
			this->divide->Margin = System::Windows::Forms::Padding(2);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(98, 48);
			this->divide->TabIndex = 15;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->decimal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->decimal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::SystemColors::Window;
			this->decimal->Location = System::Drawing::Point(110, 357);
			this->decimal->Margin = System::Windows::Forms::Padding(2);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(98, 48);
			this->decimal->TabIndex = 16;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::decimal_Click);
			// 
			// neg
			// 
			this->neg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->neg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->neg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->neg->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->neg->ForeColor = System::Drawing::SystemColors::Window;
			this->neg->Location = System::Drawing::Point(212, 357);
			this->neg->Margin = System::Windows::Forms::Padding(2);
			this->neg->Name = L"neg";
			this->neg->Size = System::Drawing::Size(98, 48);
			this->neg->TabIndex = 17;
			this->neg->Text = L"±";
			this->neg->UseVisualStyleBackColor = false;
			this->neg->Click += gcnew System::EventHandler(this, &MyForm::neg_Click);
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::Color::DarkSalmon;
			this->equals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equals->FlatAppearance->BorderSize = 2;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equals->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::SystemColors::Window;
			this->equals->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->equals->Location = System::Drawing::Point(316, 235);
			this->equals->Margin = System::Windows::Forms::Padding(2);
			this->equals->Name = L"equals";
			this->equals->Padding = System::Windows::Forms::Padding(5, 5, 0, 0);
			this->equals->Size = System::Drawing::Size(61, 170);
			this->equals->TabIndex = 18;
			this->equals->Text = L"=";
			this->equals->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Gadugi", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::Window;
			this->button19->Location = System::Drawing::Point(8, 409);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(98, 48);
			this->button19->TabIndex = 19;
			this->button19->Text = L"CE";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(385, 478);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->neg);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->prs0);
			this->Controls->Add(this->prs3);
			this->Controls->Add(this->prs2);
			this->Controls->Add(this->prs1);
			this->Controls->Add(this->prs6);
			this->Controls->Add(this->prs5);
			this->Controls->Add(this->prs4);
			this->Controls->Add(this->prs9);
			this->Controls->Add(this->prs8);
			this->Controls->Add(this->Screen);
			this->Controls->Add(this->prs7);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"LiteMath";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Screen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (Screen->Text == "0") {
		Screen->Text = Numbers->Text;
	}
	else {
		Screen->Text = Screen->Text + Numbers->Text;
	}
}
private: System::Void Operation(System::Object^ sender, System::EventArgs^ e) {
	Button^ Oper = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(Screen->Text);
	Screen->Text = "";
	operators = Oper->Text;
}
private: System::Void decimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Screen->Text->Contains (".")) {
		Screen->Text = Screen->Text + ".";
	}
}
private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(Screen->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		Screen->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		Screen->Text = System::Convert::ToString(result);
	}
	else if (operators == "*") {
		result = firstDigit * secondDigit;
		Screen->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
		Screen->Text = System::Convert::ToString(result);
	}

}



private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->Text = "0";
}
private: System::Void neg_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Screen->Text->Contains("-")) {
		Screen->Text = Screen->Text->Remove(0, 1);
	}
	else {
		Screen->Text = "-" + Screen->Text;
	}
}

};
}
