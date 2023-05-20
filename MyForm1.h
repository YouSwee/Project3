#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		MyForm1(void)
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
			this->button6->Text = L"Висновки";
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
			this->button5->Text = L"Технологічні новинки в області АШК";
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
			this->button4->Text = L"Переваги та недоліки АШК";
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
			this->button3->Text = L"Використання АШК";
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
			this->button2->Text = L"Принцип дії";
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
			this->button1->Text = L"Вступ";
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
			this->textBox1->Text = L"Опис";
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
			this->Text = L"Проєкт";
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
		this->textBox1->Text = "Апарат штучного кровообігу (АШК) є інноваційним медичним пристроєм, який використовується для забезпечення постійного кровотоку та підтримки функції серця. Він виявляється незамінним в ситуаціях, коли серцева функція недостатня або потрібно забезпечити стабільний кровотік під час складних хірургічних втручань.\r\n\r\n"
			"АШК вперше був розроблений як реакція на потребу забезпечити додаткову підтримку кровообігу для пацієнтів з серцевими проблемами. Він змінив підхід до лікування та операційного втручання, дозволяючи лікарям зберігати життя пацієнтів та зменшувати ризик ускладнень.\r\n\r\n"
			"У цьому дослідженні будуть розглянуті принципи дії АШК, його використання, переваги та недоліки, а також останні технологічні новинки, що сприяють покращенню його функціональності та безпеки. Це дозволить нам більш детально розібратися в ролі АШК у сучасній медицині та його впливі на життя пацієнтів.\r\n\r\n"
			"Розуміння принципів та потенціалу АШК важливо не тільки для медичних фахівців, але й для широкої громадськості. Цей пристрій є прикладом сучасних досягнень в медицині та інженерії, які змінюють спосіб, яким ми лікуємо та підтримуємо функцію організму.\r\n\r\n"
			"У наступних розділах роботи будуть розглянуті принципи дії, використання, переваги та недоліки АШК, а також останні інновації, що впливають на цю галузь медицини. Дослідження АШК сприятиме розширенню наших знань та розумінню про цей важливий медичний пристрій і його потенціал для покращення життя пацієнтів.\r\n\r\n";

		this->pictureBox1->Image = Image::FromFile("src/aper.jpeg");
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox1->Text = "Процес циркуляції крові в АШК включає такі основні кроки:\r\n\r\n"
		"1. Відбір крові: Кров пацієнта забирається з організму за допомогою "
		"спеціального насосу або системи забору крові.\r\n\r\n"
		"2. Оксигенізація крові: Забрана кров проходить через оксигенатор, "
		"де відбувається процес оксигенізації шляхом насичення киснем та видалення вуглекислого газу.\r\n\r\n"
		"3. Циркуляція крові: Оксигенована кров подається до кровоносних судин пацієнта за допомогою насосу, "
		"який забезпечує постійний кровотік.\r\n\r\n"
		"4. Регулювання кровотоку: Швидкість та об'єм крові, що подається в організм, "
		"регулюються за допомогою спеціальних клапанів та датчиків, "
		"які контролюють кровотік та підтримують необхідні параметри.\r\n\r\n"
		"5. Видалення відходів: Кров, яка повертається в АШК після проходження через організм, "
		"пройшла процес фільтрації або очищення, щоб видалити відходи та забруднення.";

	this->pictureBox1->Image = Image::FromFile("src/Shema.png");
	
	
	
	this->pictureBox1->BorderStyle = BorderStyle::None;

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "Використання апарату штучного кровообігу (АШК) має широкий спектр застосувань у медицині. Основні області використання АШК включають:\r\n\r\n"
		"1. Хірургічні операції: АШК використовується під час проведення складних хірургічних втручань, "
		"таких як пересадка серця, коронарне шунтування чи реконструкція аорти. Підключення АШК дозволяє забезпечити стабільний кровоток та знизити навантаження на серце під час операції.\r\n\r\n"
		"2. Тимчасова підтримка життєдіяльності серця: АШК використовується в ситуаціях, коли серце пацієнта тимчасово не може функціонувати належним чином."
		"Це може бути в разі серцевого нападу, серцевої недостатності або після операцій, коли потрібно час для відновлення функції серця.\r\n\r\n"
		"3. Постійна заміна функції серця: У випадках тяжкої серцевої недостатності, коли серце не здатне самостійно забезпечувати кровообіг організму,  "
		"АШК може бути використаний як постійна заміна функції серця. Це відбувається за допомогою імплантованого апарату, який постійно забезпечує циркуляцію крові у пацієнта.\r\n\r\n"
		"Використання АШК дозволяє не тільки зберегти життя пацієнта, але й забезпечити необхідний час для проведення медичного втручання чи відновлення функції серця. Вона також дозволяє зменшити ризик ускладнень та покращити прогнози для пацієнтів з серцевими захворюваннями. Однак, використання АШК також пов'язан";

	this->pictureBox1->Image = Image::FromFile("src/apar.jpg");

	this->pictureBox1->BorderStyle = BorderStyle::None;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "Переваги використання апарату штучного кровообігу (АШК) включають:\r\n\r\n"
		"1. Забезпечення постійного кровотоку: АШК забезпечує стабільний кровотік та доставку кисню та поживних речовин до тканин організму, незалежно від функції серця. Це дозволяє уникнути ушкодження органів та підтримувати їх життєво важливу функцію.\r\n\r\n"
		"2. Тимчасова підтримка серця: АШК може бути використаний як тимчасова міра підтримки серцевої функції під час операцій або випадків тимчасової недостатності серця. Це дозволяє знизити навантаження на серце та дати йому можливість відновитися.\r\n\r\n"
		"Незважаючи на переваги, використання АШК також має певні недоліки та потенційні ускладнення:\r\n\r\n"
		"1. Ризик інфекцій: Використання АШК може збільшити ризик інфекцій, оскільки пристрій знаходиться поза тілом та має відкритий доступ до системи кровообігу.\r\n\r\n"
		"2. Тривалість використання: Довготривале використання АШК може спричиняти утворення згортків крові, ушкодження судин та інші проблеми, пов'язані з штучним кровообігом.\r\n\r\n"
		"Необхідно ретельно оцінювати переваги та недоліки АШК для кожного конкретного випадку та пацієнта, зважаючи на вигоди та можливі ризики, щоб прийняти інформоване рішення щодо його використання.";
	this->pictureBox1->Image = Image::FromFile("src/plusM.jpg");

	this->pictureBox1->BorderStyle = BorderStyle::None;



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "В області апарату штучного кровообігу (АШК) постійно відбуваються технологічні новинки та інновації, спрямовані на поліпшення його ефективності та безпеки. Деякі з найсучасніших технологічних розробок включають:\r\n\r\n"
		"1. Мініатюризація пристроїв: Великі пристрої АШК заміняються більш компактними та портативними пристроями, що спрощує їх транспортування та використання в різних клінічних ситуаціях.\r\n\r\n"
		"2. Використання штучного інтелекту: Штучний інтелект використовується для покращення контролю над пристроями АШК. Алгоритми машинного навчання допомагають автоматично регулювати параметри кровотоку, виявляти відхилення та уникати ускладнень.\r\n\r\n"
		"3. Розвиток матеріалів: Використання нових матеріалів для виготовлення пристроїв АШК дозволяє зменшити ризик утворення згортків крові, покращити сумісність з організмом та забезпечити більш тривалу роботу.\r\n\r\n"
		"4. Бездротове керування: Технології бездротового керування дозволяють забезпечити зв'язок між пристроєм АШК та моніторинговою системою без необхідності проводів, що спрощує процес контролю та налаштування.\r\n\r\n"
		"5. Імплантовані системи: Розроблені імплантовані системи АШК, які можуть бути вжиті в організм пацієнта на довгий термін, дозволяють постійно забезпечувати кровообіг без необхідності зовнішніх пристроїв.\r\n\r\n"
		"Ці технологічні новинки сприяють поліпшенню ефективності, безпеки та комфорту використання АШК, що сприяє покращенню результатів лікування та збереженню життя пацієнтів з серцево-судинними захворюваннями.";
	this->pictureBox1->Image = Image::FromFile("src/tehn.jpg");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "Висновки:\r\n\r\n"
		"Апарат штучного кровообігу (АШК) є важливим медичним пристроєм, який використовується в різних ситуаціях, пов'язаних з недостатністю серцевої функції або складними хірургічними втручаннями. Використання АШК дозволяє забезпечити стабільний кровотік та підтримувати життєво важливу функцію органів.\r\n\r\n"
		"Переваги використання АШК включають забезпечення постійного кровотоку, тимчасову підтримку серця під час операцій, покращення результатів втручань та рятування життя пацієнтів. Однак, використання АШК також супроводжується ризиками, такими як інфекції, утворення згортків крові та потребу у висококваліфікованому медичному персоналі.\r\n\r\n"
		"Технологічні новинки в області АШК, такі як мініатюризація пристроїв, використання штучного інтелекту, розвиток матеріалів, бездротове керування та імплантовані системи, сприяють поліпшенню ефективності та безпеки використання АШК.\r\n\r\n"
		"Враховуючи переваги та недоліки, використання АШК вимагає індивідуального підходу та зваження вигод та ризиків для кожного пацієнта. Постійні дослідження та інновації в цій галузі сприяють поліпшенню технологій та підвищенню якості життя пацієнтів, які потребують підтримки кровообігу через АШК.\r\n\r\n";
	this->pictureBox1->Image = Image::FromFile("src/end.jpg");
}
};
}
