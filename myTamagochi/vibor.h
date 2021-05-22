#pragma once
#include "mlekop.h"
#include "fish.h"
#include "nasik.h"
#include "bird.h"
#include "Background.h"
namespace myTamagochi
	{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для vibor
	/// </summary>
	public ref class vibor : public System::Windows::Forms::Form
	{
	public:
		vibor(void)
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
		~vibor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(387, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(343, 62);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Насекомое";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &vibor::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(387, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(343, 62);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Котик";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &vibor::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(387, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(343, 62);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Рыба";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &vibor::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(387, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(343, 62);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Птица";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &vibor::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(230, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(663, 72);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Выберите род питомца";
			this->label1->Click += gcnew System::EventHandler(this, &vibor::label1_Click);
			// 
			// vibor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->ClientSize = System::Drawing::Size(1049, 559);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Name = L"vibor";
			this->Text = L"Тамагочик";
			this->Load += gcnew System::EventHandler(this, &vibor::vibor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		mlekop^ a = gcnew mlekop();
		a->Show();
		if (background == 0)
			a->BackColor = Color::White;
		if (background == 1)
			a->BackColor = Color::Yellow;
		if (background == 2)
			a->BackColor = Color::Red;
		if (background == 3)
			a->BackColor = Color::DarkViolet;
		this->Hide();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vibor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bird^ bir = gcnew bird();
		bir->Show();
		if (background == 0)
			bir->BackColor = Color::White;
		if (background == 1)
			bir->BackColor = Color::Yellow;
		if (background == 2)
			bir->BackColor = Color::Red;
		if (background == 3)
			bir->BackColor = Color::DarkViolet;
		this->Hide();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	fish^ fis = gcnew fish();
	fis->Show();
	if (background == 0)
		fis->BackColor = Color::White;
	if (background == 1)
		fis->BackColor = Color::Yellow;
	if (background == 2)
		fis->BackColor = Color::Red;
	if (background == 3)
		fis->BackColor = Color::DarkViolet;
	this->Hide();
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		nasik^ nas = gcnew nasik();
		nas->Show();
		if (background == 0)
			nas->BackColor = Color::White;
		if (background == 1)
			nas->BackColor = Color::Yellow;
		if (background == 2)
			nas->BackColor = Color::Red;
		if (background == 3)
			nas->BackColor = Color::DarkViolet;
		this->Hide();
	}
};
}
