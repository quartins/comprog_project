#pragma once

namespace ProjectPower6rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WorkShow
	/// </summary>
	public ref class WorkShow : public System::Windows::Forms::Form
	{
	public:
		WorkShow(void)
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
		~WorkShow()
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
			this->button1->Location = System::Drawing::Point(932, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"back";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// WorkShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1221, 675);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"WorkShow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WorkShow";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &WorkShow::WorkShow_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void WorkShow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
