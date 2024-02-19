#pragma once
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(592, 664);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			int num;
			Random^ random = gcnew Random;
			num = random->Next(1, 5);
			switch (num)
			{
			case 1:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\00-major.png";
				break;
			case 2:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\01-major.png";
				break;
			case 3:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\02-major.png";
				break;
			case 4:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\03-major.png";
				break;
			case 5:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\04-major.png";
				break;
			case 6:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\05-major.png";
				break;
			case 7:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\06-major.png";
				break;
			case 8:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\07-major.png";
				break;
			case 9:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\08-major.png";
				break;
			case 10:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\09-major.png";
				break;
			case 11:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\10-major.png";
				break; 
			case 12:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\11-major.png";
				break; 
			case 13:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\12-major.png";
				break; 
			case 14:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\13-major.png";
				break; 
			case 15:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\14-major.png";
				break;
			case 16:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\15-major.png";
				break;
			case 17:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\16-major.png";
				break;
			case 18:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\17-major.png";
				break;
			case 19:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\18-major.png";
				break;
			case 20:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\19-major.png";
				break;
			case 21:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\20-major.png";
				break;
			case 22:pictureBox1->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\21-major.png";
				break;
			default: break;
			}
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(672, 16);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(568, 560);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			if (num == 1)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major0.png";
			else if (num == 2)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major1.jpg";
			else if (num == 3) 
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major02.jpg";
			else if (num == 4) 
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major03.jpg";
			else if (num == 5) 
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major04.jpg";
			else if (num == 6)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major05.jpg";
			else if (num == 7)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major06.jpg";
			else if (num == 8)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major07.jpg";
			else if (num == 9)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major08.jpg";
			else if (num == 10)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major09.jpg";
			else if (num == 11)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major10.jpg";
			else if (num == 12)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major11.jpg";
			else if (num == 13)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major12.jpg";
			else if (num == 14)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major13.jpg";
			else if (num == 15)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major14.jpg";
			else if (num == 16)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major15.jpg";
			else if (num == 17)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major16.jpg";
			else if (num == 18)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major17.jpg";
			else if (num == 19)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major18.jpg";
			else if (num == 20)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major19.jpg";
			else if (num == 21)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major20.jpg";
			else if (num == 22)
				pictureBox2->ImageLocation = L"D:\\My_Work\\Project\\Git\\Power6rangers\\ProjectPower6rangers\\Daily\\show_major21.jpg";
			// 
			// DailyShow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1257, 701);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"DailyShow";
			this->Text = L"DailyShow";
			//this->Load += gcnew System::EventHandler(this, &DailyShow::DailyShow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
