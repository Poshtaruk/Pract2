#pragma once
#include<math.h>

namespace Pract2 {

	using namespace System;
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
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(87, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Довжина відрізка m", L"Довжина відрізка h", L"Довжина відрізка b" });
			this->comboBox1->Location = System::Drawing::Point(40, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 28);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(254, 95);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(201, 205);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(36, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(37, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"c";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(292, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 19);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Введіть...";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(281, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 29);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(467, 419);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int n = comboBox1->SelectedIndex;
		label4->Text = "";

		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;

		switch (n) {
		case 0:
			label4->Text = "Введіть a, b, c";
			label4->Visible = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			break;
		case 1:
			label4->Text = "Введіть a, b, c";
			label4->Visible = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			break;
		case 2:
			label4->Text = "Введіть a, b, c";
			label4->Visible = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			break;
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	float a, b, c, p, s;
	int n = comboBox1->SelectedIndex;
	switch (n)
	{
	case 0:
		a = System::Convert::ToDouble(textBox1->Text);
		b = System::Convert::ToDouble(textBox2->Text);
		c = System::Convert::ToDouble(textBox3->Text);
		s = 0.5 * sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2));
		break;
	case 1:
		a = System::Convert::ToDouble(textBox1->Text);
		b = System::Convert::ToDouble(textBox2->Text);
		c = System::Convert::ToDouble(textBox3->Text);
		s = (sqrt(b * c * (pow((b + c), 2) - pow(a, 2)))) / (b + c);
		break;
	case 2:
		a = System::Convert::ToDouble(textBox1->Text);
		b = System::Convert::ToDouble(textBox2->Text);
		c = System::Convert::ToDouble(textBox3->Text);
		p = (a + b + c) / 2;
		s = (2 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
		break;
};
	richTextBox1->AppendText(comboBox1->Text + "=" + Convert::ToString(s) + "\r\n");

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
}
};
}