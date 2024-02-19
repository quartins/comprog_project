#pragma once
#include "DailyRand.h"
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>
namespace ProjectPower6rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DailyShow
	/// </summary>
	public ref class DailyShow : public System::Windows::Forms::Form
	{
	public:
		DailyShow(void)
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
		~DailyShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1008, 600);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// DailyShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 701);
			this->Controls->Add(this->button1);
			this->Name = L"DailyShow";
			this->Text = L"DailyShow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Owner->Show();
			this->Hide();
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Owner->Hide();
			this->Show();
		}
	};
}
