#pragma once

namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для bird
	/// </summary>
	public ref class bird : public System::Windows::Forms::Form
	{
	public:
		bird(void)
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
		~bird()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bird::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"10.png");
			this->imageList1->Images->SetKeyName(1, L"11.png");
			this->imageList1->Images->SetKeyName(2, L"12.png");
			this->imageList1->Images->SetKeyName(3, L"13.png");
			this->imageList1->Images->SetKeyName(4, L"14.png");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(140, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 45);
			this->label6->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(350, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 30);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Бодрость:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(372, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 30);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Чистота:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(368, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 30);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Сытость:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(339, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 30);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Настроение:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(838, 311);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 43);
			this->button8->TabIndex = 47;
			this->button8->Text = L"\?";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(838, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 46;
			this->button7->Text = L"\?";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(838, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 43);
			this->button6->TabIndex = 45;
			this->button6->Text = L"\?";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(838, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 43);
			this->button5->TabIndex = 44;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(513, 311);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(304, 43);
			this->progressBar4->TabIndex = 43;
			this->progressBar4->Value = 100;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(513, 250);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(304, 43);
			this->progressBar3->TabIndex = 42;
			this->progressBar3->Value = 100;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::Color::Red;
			this->progressBar2->ForeColor = System::Drawing::Color::Red;
			this->progressBar2->Location = System::Drawing::Point(513, 190);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(304, 43);
			this->progressBar2->TabIndex = 41;
			this->progressBar2->Value = 100;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(513, 131);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(304, 43);
			this->progressBar1->TabIndex = 40;
			this->progressBar1->Value = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(345, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 58);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Имя питомца";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(697, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 43);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Спать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &bird::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(486, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 43);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Мыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &bird::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(280, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 43);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Кормить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &bird::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(69, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 43);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &bird::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(69, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(257, 222);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// bird
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlueViolet;
			this->ClientSize = System::Drawing::Size(914, 488);
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
			this->Name = L"bird";
			this->Text = L"bird";
			this->Load += gcnew System::EventHandler(this, &bird::bird_Load);
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
private: System::Void bird_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
