#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(9, 9);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(0);
			this->groupBox1->Size = System::Drawing::Size(1015, 82);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(852, 11);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 64);
			this->button6->TabIndex = 2;
			this->button6->Text = L"��������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(680, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(166, 64);
			this->button5->TabIndex = 2;
			this->button5->Text = L"���������� ������� � ������ ���";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(508, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 64);
			this->button4->TabIndex = 2;
			this->button4->Text = L"�������� �� ������� ���";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(336, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 64);
			this->button3->TabIndex = 2;
			this->button3->Text = L"������������ ���";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(164, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"������� 䳿";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 64);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(689, 94);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 248);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 94);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(671, 248);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"����";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 351);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"�����";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "������ �������� ��������� (���) � ������������ �������� ��������, ���� ��������������� ��� ������������ ��������� ��������� �� �������� ������� �����. ³� ����������� ��������� � ���������, ���� ������� ������� ���������� ��� ������� ����������� ��������� ������� �� ��� �������� ���������� ��������.\r\n\r\n"
			"��� ������ ��� ����������� �� ������� �� ������� ����������� ��������� �������� ��������� ��� �������� � ��������� ����������. ³� ����� ����� �� �������� �� ������������ ���������, ���������� ������ �������� ����� �������� �� ���������� ����� ����������.\r\n\r\n"
			"� ����� ��������� ������ ��������� �������� 䳿 ���, ���� ������������, �������� �� �������, � ����� ������ ���������� �������, �� �������� ���������� ���� ��������������� �� �������. �� ��������� ��� ���� �������� ���������� � ��� ��� � ������� ������� �� ���� ����� �� ����� ��������.\r\n\r\n"
			"�������� �������� �� ���������� ��� ������� �� ����� ��� �������� ��������, ��� � ��� ������ ������������. ��� ������� � ��������� �������� ��������� � ������� �� �������, �� ������� �����, ���� �� ����� �� ��������� ������� ��������.\r\n\r\n"
			"� ��������� ������� ������ ������ ��������� �������� 䳿, ������������, �������� �� ������� ���, � ����� ������ ���������, �� ��������� �� �� ������ ��������. ���������� ��� ��������� ���������� ����� ����� �� �������� ��� ��� �������� �������� ������� � ���� ��������� ��� ���������� ����� ��������.\r\n\r\n";

		this->pictureBox1->Image = Image::FromFile("src/aper.jpeg");
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox1->Text = "������ ���������� ���� � ��� ������ ��� ������ �����:\r\n\r\n"
		"1. ³��� ����: ���� �������� ���������� � �������� �� ��������� "
		"������������ ������ ��� ������� ������ ����.\r\n\r\n"
		"2. ������������ ����: ������� ���� ��������� ����� �����������, "
		"�� ���������� ������ ������������ ������ ��������� ������ �� ��������� ������������ ����.\r\n\r\n"
		"3. ���������� ����: ������������ ���� �������� �� ����������� ����� �������� �� ��������� ������, "
		"���� ��������� �������� �������.\r\n\r\n"
		"4. ����������� ���������: �������� �� ��'�� ����, �� �������� � �������, "
		"����������� �� ��������� ����������� ������� �� �������, "
		"�� ����������� ������� �� ���������� �������� ���������.\r\n\r\n"
		"5. ��������� ������: ����, ��� ����������� � ��� ���� ����������� ����� �������, "
		"������� ������ ���������� ��� ��������, ��� �������� ������ �� �����������.";

	this->pictureBox1->Image = Image::FromFile("src/Shema.png");
	
	
	
	this->pictureBox1->BorderStyle = BorderStyle::None;

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "������������ ������� �������� ��������� (���) �� ������� ������ ����������� � �������. ������ ������ ������������ ��� ���������:\r\n\r\n"
		"1. ճ������ ��������: ��� ��������������� �� ��� ���������� �������� ���������� ��������, "
		"����� �� ��������� �����, ��������� ���������� �� ������������� �����. ϳ��������� ��� �������� ����������� ��������� �������� �� ������� ������������ �� ����� �� ��� ��������.\r\n\r\n"
		"2. ��������� �������� ������������ �����: ��� ��������������� � ���������, ���� ����� �������� ��������� �� ���� ������������� �������� �����."
		"�� ���� ���� � ��� ��������� ������, ������� ������������ ��� ���� ��������, ���� ������� ��� ��� ���������� ������� �����.\r\n\r\n"
		"3. ������� ����� ������� �����: � �������� ����� ������� ������������, ���� ����� �� ������ ��������� ������������� �������� ��������,  "
		"��� ���� ���� ������������ �� ������� ����� ������� �����. �� ���������� �� ��������� �������������� �������, ���� ������� ��������� ���������� ���� � ��������.\r\n\r\n"
		"������������ ��� �������� �� ����� �������� ����� ��������, ��� � ����������� ���������� ��� ��� ���������� ��������� ��������� �� ���������� ������� �����. ���� ����� �������� �������� ����� ���������� �� ��������� �������� ��� �������� � ��������� ��������������. �����, ������������ ��� ����� ���'����";

	this->pictureBox1->Image = Image::FromFile("src/apar.jpg");

	this->pictureBox1->BorderStyle = BorderStyle::None;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "�������� ������������ ������� �������� ��������� (���) ���������:\r\n\r\n"
		"1. ������������ ��������� ���������: ��� ��������� ��������� ������� �� �������� ����� �� �������� ������� �� ������ ��������, ��������� �� ������� �����. �� �������� �������� ���������� ������ �� ����������� �� ������ ������� �������.\r\n\r\n"
		"2. ��������� �������� �����: ��� ���� ���� ������������ �� ��������� ��� �������� ������� ������� �� ��� �������� ��� ������� ��������� ������������ �����. �� �������� ������� ������������ �� ����� �� ���� ���� ��������� ����������.\r\n\r\n"
		"���������� �� ��������, ������������ ��� ����� �� ���� ������� �� ��������� �����������:\r\n\r\n"
		"1. ����� ��������: ������������ ��� ���� �������� ����� ��������, ������� ������� ����������� ���� ���� �� �� �������� ������ �� ������� ���������.\r\n\r\n"
		"2. ��������� ������������: ������������ ������������ ��� ���� ���������� ��������� ������� ����, ���������� ����� �� ���� ��������, ���'���� � ������� ����������.\r\n\r\n"
		"��������� �������� ��������� �������� �� ������� ��� ��� ������� ����������� ������� �� ��������, �������� �� ������ �� ������ ������, ��� �������� ����������� ������ ���� ���� ������������.";
	this->pictureBox1->Image = Image::FromFile("src/plusM.jpg");

	this->pictureBox1->BorderStyle = BorderStyle::None;



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "� ������ ������� �������� ��������� (���) ������� ����������� ���������� ������� �� ���������, ��������� �� ��������� ���� ����������� �� �������. ���� � ������������ ������������ �������� ���������:\r\n\r\n"
		"1. ̳����������� ��������: ����� ������� ��� ���������� ���� ����������� �� ������������ ����������, �� ������ �� ��������������� �� ������������ � ����� ������� ���������.\r\n\r\n"
		"2. ������������ �������� ���������: ������� �������� ��������������� ��� ���������� �������� ��� ���������� ���. ��������� ��������� �������� ����������� ����������� ���������� ��������� ���������, �������� ��������� �� ������� ����������.\r\n\r\n"
		"3. �������� ��������: ������������ ����� �������� ��� ������������ �������� ��� �������� �������� ����� ��������� ������� ����, ��������� �������� � ��������� �� ����������� ���� ������� ������.\r\n\r\n"
		"4. ���������� ���������: �������㳿 ������������ ��������� ���������� ����������� ��'���� �� �������� ��� �� ������������� �������� ��� ����������� �������, �� ������ ������ �������� �� ������������.\r\n\r\n"
		"5. ����������� �������: ��������� ����������� ������� ���, �� ������ ���� ���� � ������� �������� �� ������ �����, ���������� ������� ������������� �������� ��� ����������� ������� ��������.\r\n\r\n"
		"ֳ ���������� ������� �������� ��������� �����������, ������� �� �������� ������������ ���, �� ������ ���������� ���������� �������� �� ���������� ����� �������� � �������-��������� ��������������.";
	this->pictureBox1->Image = Image::FromFile("src/tehn.jpg");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "��������:\r\n\r\n"
		"������ �������� ��������� (���) � �������� �������� ��������, ���� ��������������� � ����� ���������, ���'������ � ������������ ������� ������� ��� ��������� ����������� �����������. ������������ ��� �������� ����������� ��������� ������� �� ����������� ������ ������� ������� ������.\r\n\r\n"
		"�������� ������������ ��� ��������� ������������ ��������� ���������, ��������� �������� ����� �� ��� ��������, ���������� ���������� �������� �� ��������� ����� ��������. �����, ������������ ��� ����� �������������� ��������, ������ �� ��������, ��������� ������� ���� �� ������� � �������������������� ��������� ��������.\r\n\r\n"
		"���������� ������� � ������ ���, ��� �� ������������ ��������, ������������ �������� ���������, �������� ��������, ���������� ��������� �� ����������� �������, �������� ��������� ����������� �� ������� ������������ ���.\r\n\r\n"
		"���������� �������� �� �������, ������������ ��� ������ �������������� ������ �� �������� ����� �� ������ ��� ������� ��������. ������ ���������� �� ��������� � ��� ����� �������� ��������� ��������� �� ��������� ����� ����� ��������, �� ���������� �������� ��������� ����� ���.\r\n\r\n";
	this->pictureBox1->Image = Image::FromFile("src/end.jpg");
}
};
}
