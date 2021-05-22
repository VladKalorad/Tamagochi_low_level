#pragma once
#include"reg.h"
#include"vibor.h"
#include"Language.h"
#include"Background.h"



namespace myTamagochi {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::MenuStrip^ menuStrip1;
	public: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ öâåòToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ áåëûéToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ ÷åğíûéToolStripMenuItem;


	public: System::Windows::Forms::ToolStripMenuItem^ êğàñíûéToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôèîëåòîâûéToolStripMenuItem;
	public:
	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôèîëåòîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansBold", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(389, 457);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(377, 54);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Ğåãèñòğàöèÿ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(138, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 58);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Ïàğîëü:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(164, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 58);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Ëîãèí:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(389, 234);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(377, 75);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(389, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 75);
			this->textBox1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(420, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 58);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Àâòîğèçàöèÿ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansBold", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(496, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 54);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Âõîä";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(424, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(337, 34);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Ñîçäàòü ó÷åòíóş çàïèñü.";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íàñòğîéêèToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1038, 28);
			this->menuStrip1->TabIndex = 26;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÿçûêToolStripMenuItem,
					this->öâåòToolStripMenuItem
			});
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			this->íàñòğîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàñòğîéêèToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ğóññêèéToolStripMenuItem,
					this->àíãëèéñêèéToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğóññêèéToolStripMenuItem_Click);
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			// 
			// öâåòToolStripMenuItem
			// 
			this->öâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->áåëûéToolStripMenuItem,
					this->÷åğíûéToolStripMenuItem, this->êğàñíûéToolStripMenuItem, this->ôèîëåòîâûéToolStripMenuItem
			});
			this->öâåòToolStripMenuItem->Name = L"öâåòToolStripMenuItem";
			this->öâåòToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->öâåòToolStripMenuItem->Text = L"Öâåò ôîíà";
			this->öâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷åğíûéToolStripMenuItem
			// 
			this->÷åğíûéToolStripMenuItem->Name = L"÷åğíûéToolStripMenuItem";
			this->÷åğíûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->÷åğíûéToolStripMenuItem->Text = L"Æåëòûé";
			this->÷åğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// ôèîëåòîâûéToolStripMenuItem
			// 
			this->ôèîëåòîâûéToolStripMenuItem->Name = L"ôèîëåòîâûéToolStripMenuItem";
			this->ôèîëåòîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ôèîëåòîâûéToolStripMenuItem->Text = L"Ôèîëåòîâûé";
			this->ôèîëåòîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôèîëåòîâûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1038, 561);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1056, 608);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1056, 608);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òàìàãî÷èê";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		reg^ r = gcnew reg();
		r->Show();
		if (background == 0)
			r->BackColor = Color::White;
		if (background == 1)
			r->BackColor = Color::Yellow;
		if (background == 2)
			r->BackColor = Color::Red;
		if (background == 3)
			r->BackColor = Color::DarkViolet;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		files file;
		if (textBox1->Text != "" && textBox2->Text != "") {
			msclr::interop::marshal_context context;
			std::string login = context.marshal_as<std::string>(textBox1->Text);
			std::string password = context.marshal_as<std::string>(textBox2->Text);
			if (file.check(login, password) == true) {
				vibor^ a = gcnew vibor();
				a->Show();
				this->Hide();
				if (background == 0)
					a->BackColor = Color::White;
				if (background == 1)
					a->BackColor = Color::Yellow;
				if (background == 2)
					a->BackColor = Color::Red;
				if (background == 3)
					a->BackColor = Color::DarkViolet;
			}
			else {
				MessageBox::Show("Error");
			}
		}
		else {
			MessageBox::Show("Error");
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ÷åğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		background = 1;
		this->BackColor = Color::Yellow;
	}
private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language = 1)
	{
		this->button1->Text = L"Ğåãèñòğàöèÿ";
		this->label3->Text = L"Ïàğîëü:";
		this->label2->Text = L"Ëîãèí:";
		this->label1->Text = L"Àâòîğèçàöèÿ";
		this->label4->Text = L"Ñîçäàòü ó÷åòíóş çàïèñü.";
		this->button2->Text = L"Âõîä";
		this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
		this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
		this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
		this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
		this->öâåòToolStripMenuItem->Text = L"Öâåò ôîíà";
		this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
		this->÷åğíûéToolStripMenuItem->Text = L"Æåëòûé";
		this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
		this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
		this->label1->Text = L"Ğåãèñòğàöèÿ";
		this->button1->Text = L"Ğåãèñòğàöèÿ";
	}
}

private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language = 2)
	{
		this->button1->Text = L"Sign Up";
		this->label3->Text = L"Password:";
		this->label2->Text = L"Login:";
		this->label1->Text = L"Sign In";
		this->label4->Text = L"Create new account";
		this->button2->Text = L"Enter";
		this->íàñòğîéêèToolStripMenuItem->Text = L"Settings";
		this->ÿçûêToolStripMenuItem->Text = L"Languages";
		this->ğóññêèéToolStripMenuItem->Text = L"Russian";
		this->àíãëèéñêèéToolStripMenuItem->Text = L"English";
		this->öâåòToolStripMenuItem->Text = L"Background";
		this->áåëûéToolStripMenuItem->Text = L"White";
		this->÷åğíûéToolStripMenuItem->Text = L"Yellow";
		this->êğàñíûéToolStripMenuItem->Text = L"Red";
		this->âûõîäToolStripMenuItem->Text = L"Exit";
		this->label1->Text = L"Sign Up";
		this->button1->Text = L"Sign Up";
	}
}
private: System::Void íàñòğîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public: System::Void öâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 2;
	this->BackColor = Color::Red;
}
private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 0;
	this->BackColor = Color::White;
}
private: System::Void ôèîëåòîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 3;
	this->BackColor = Color::DarkViolet;
}
};
};