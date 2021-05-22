#pragma once

namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mlekop
	/// </summary>
	public ref class mlekop : public System::Windows::Forms::Form
	{
		int sleep = 0;
	public:
		mlekop(void)
		{
			InitializeComponent();
			pictureBox1->Image = imageList1->Images[0];
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~mlekop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button9;















	protected:








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mlekop::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"1.png");
			this->imageList1->Images->SetKeyName(1, L"2.png");
			this->imageList1->Images->SetKeyName(2, L"3.png");
			this->imageList1->Images->SetKeyName(3, L"4.png");
			this->imageList1->Images->SetKeyName(4, L"5.png");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(64, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mlekop::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(275, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Кормить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mlekop::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(481, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Мыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mlekop::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(692, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 43);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Спать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &mlekop::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(64, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(257, 222);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(498, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 58);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Имя питомца";
			this->label1->Click += gcnew System::EventHandler(this, &mlekop::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &mlekop::timer1_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(508, 131);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(304, 43);
			this->progressBar1->TabIndex = 20;
			this->progressBar1->Value = 100;
			this->progressBar1->Click += gcnew System::EventHandler(this, &mlekop::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::Color::Red;
			this->progressBar2->ForeColor = System::Drawing::Color::Red;
			this->progressBar2->Location = System::Drawing::Point(508, 190);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(304, 43);
			this->progressBar2->TabIndex = 21;
			this->progressBar2->Value = 100;
			this->progressBar2->Click += gcnew System::EventHandler(this, &mlekop::progressBar2_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(508, 250);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(304, 43);
			this->progressBar3->TabIndex = 22;
			this->progressBar3->Value = 100;
			this->progressBar3->Click += gcnew System::EventHandler(this, &mlekop::progressBar3_Click);
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(508, 311);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(304, 43);
			this->progressBar4->TabIndex = 23;
			this->progressBar4->Value = 100;
			this->progressBar4->Click += gcnew System::EventHandler(this, &mlekop::progressBar4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button5->Location = System::Drawing::Point(833, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 43);
			this->button5->TabIndex = 24;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &mlekop::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button6->Location = System::Drawing::Point(833, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 43);
			this->button6->TabIndex = 25;
			this->button6->Text = L"\?";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &mlekop::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button7->Location = System::Drawing::Point(833, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 26;
			this->button7->Text = L"\?";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &mlekop::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(833, 311);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 43);
			this->button8->TabIndex = 27;
			this->button8->Text = L"\?";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &mlekop::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(334, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 30);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Настроение:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(363, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 30);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Сытость:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(367, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 30);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Чистота:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(345, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 30);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Бодрость:";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 4700;
			this->timer2->Tick += gcnew System::EventHandler(this, &mlekop::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 4200;
			this->timer3->Tick += gcnew System::EventHandler(this, &mlekop::timer3_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(67, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 45);
			this->label6->TabIndex = 33;
			this->label6->Click += gcnew System::EventHandler(this, &mlekop::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(64, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 49);
			this->textBox1->TabIndex = 34;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &mlekop::textBox1_TextChanged_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(303, 31);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 51);
			this->button9->TabIndex = 35;
			this->button9->Text = L"Введите имя";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &mlekop::button9_Click);
			// 
			// mlekop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(914, 488);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(932, 535);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(932, 535);
			this->Name = L"mlekop";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"+";
			this->Load += gcnew System::EventHandler(this, &mlekop::mlekop_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = imageList1->Images[4];
	if (progressBar1->Value < 100)
		progressBar1->Value++;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = imageList1->Images[1];
	if (progressBar2->Value < 100)
		progressBar2->Value++;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = imageList1->Images[2];
	if (progressBar3->Value < 100)
		progressBar3->Value++;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = imageList1->Images[3];
	if (progressBar4->Value < 100)
		progressBar4->Value++;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mlekop_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная шкала показывает какой уровень настроения у вашего питомца, чтобы увеличить её, нажмите кнопку <<ИГРАТЬ>>");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная шкала показывает какой уровень сытости у вашего питомца, чтобы увеличить её, нажмите кнопку <<КОРМИТЬ>>");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная шкала показывает, что ваш питомец испачкался и его нужно помыть, чтобы увеличить её, нажмите кнопку <<МЫТЬ>>");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная шкала показывает какой уровень сна у вашего питомца, чтобы увеличить её, нажмите кнопку <<СПАТЬ>>");
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value--;
	progressBar3->Value--;
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar1->Value <= 100 || progressBar4->Value <= 100 || progressBar3->Value <= 100 || progressBar2->Value <= 100)
	{
		this->label6->Text = L"Превосходно";
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 70 || progressBar4->Value <= 70 || progressBar3->Value <= 70 || progressBar2->Value <= 70)
	{
		this->label6->Text = L"Отлично";
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 50 || progressBar4->Value <= 50 || progressBar3->Value <= 50 || progressBar2->Value <= 50)
	{
		this->label6->Text = L"Нормально";
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 30 || progressBar4->Value <= 30 || progressBar3->Value <= 30 || progressBar2->Value <= 30)
	{
		this->label6->Text = L"Плохо";
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 10 || progressBar4->Value <= 10 || progressBar3->Value <= 10 || progressBar2->Value <= 10)
	{
		this->label6->Text = L"Мерзко";
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	progressBar4->Value--;
}
private: System::Void progressBar4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar2->Value--;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = this->textBox1->Text;
	textBox1->Visible = false;
	button9->Visible = false;
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
