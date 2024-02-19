#pragma once
#include "MenuPage.h"
namespace ProjectPower6rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartPage
	/// </summary>
	public ref class StartPage : public System::Windows::Forms::Form
	{
	public:
		StartPage(void)
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
		~StartPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Cursor = System::Windows::Forms::Cursors::Help;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(960, 540);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StartPage::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MistyRose;
			this->label1->Font = (gcnew System::Drawing::Font(L"Angsana New", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(550, 400);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1071, 47);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ยินดีต้อนรับเข้าสู่โลกแห่งเมืองเวทมนต์ของชาว ghibli ที่จะประทานคำทำนายดวงชะตาของค"
				L"ุณในระยะเวลาอันใกล้นี้";
			// 
			// StartPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 591);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StartPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuPage ^page = gcnew MenuPage;
		page->Show();
	}
	};
}
