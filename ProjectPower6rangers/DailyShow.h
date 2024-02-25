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
		Form^ obj;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DailyShow::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1381, 801);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DailyShow::Button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(650, 850);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			int num;
			Random^ random = gcnew Random;
			num = random->Next(1, 23);
			switch (num)
			{
			case 1:this->pictureBox1->Load("00-major.png");
				break;
			case 2:this->pictureBox1->Load("01-major.png");
				break;
			case 3:this->pictureBox1->Load("02-major.png");
				break;
			case 4:this->pictureBox1->Load("03-major.png");
				break;
			case 5:this->pictureBox1->Load("04-major.png");
				break;
			case 6:this->pictureBox1->Load("05-major.png");
				break;
			case 7:this->pictureBox1->Load("06-major.png");
				break;
			case 8:this->pictureBox1->Load("07-major.png");
				break;
			case 9:this->pictureBox1->Load("08-major.png");
				break;
			case 10:this->pictureBox1->Load("09-major.png");
				break;
			case 11:this->pictureBox1->Load("10-major.png");
				break;
			case 12:this->pictureBox1->Load("11-major.png");
				break;
			case 13:this->pictureBox1->Load("12-major.png");
				break;
			case 14:this->pictureBox1->Load("13-major.png");
				break;
			case 15:this->pictureBox1->Load("14-major.png");
				break;
			case 16:this->pictureBox1->Load("15-major.png");
				break;
			case 17:this->pictureBox1->Load("16-major.png");
				break;
			case 18:this->pictureBox1->Load("17-major.png");
				break;
			case 19:this->pictureBox1->Load("18-major.png");
				break;
			case 20:this->pictureBox1->Load("19-major.png");
				break;
			case 21:this->pictureBox1->Load("20-major.png");
				break;
			case 22:this->pictureBox1->Load("21-major.png");
				break;
			default: break;
			}
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Location = System::Drawing::Point(973, 16);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(650, 720);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			if (num == 1)
				this->pictureBox2->Load("show_major0.png");
			else if (num == 2)
				this->pictureBox2->Load("show_major1.jpg");
			else if (num == 3)
				this->pictureBox2->Load("show_major02.jpg");
			else if (num == 4)
				this->pictureBox2->Load("show_major03.jpg");
			else if (num == 5)
				this->pictureBox2->Load("show_major04.jpg");
			else if (num == 6)
				this->pictureBox2->Load("show_major05.jpg");
			else if (num == 7)
				this->pictureBox2->Load("show_major06.jpg");
			else if (num == 8)
				this->pictureBox2->Load("show_major07.jpg");
			else if (num == 9)
				this->pictureBox2->Load("show_major08.jpg");
			else if (num == 10)
				this->pictureBox2->Load("show_major09.jpg");
			else if (num == 11)
				this->pictureBox2->Load("show_major10.jpg");
			else if (num == 12)
				this->pictureBox2->Load("show_major11.jpg");
			else if (num == 13)
				this->pictureBox2->Load("show_major12.jpg");
			else if (num == 14)
				this->pictureBox2->Load("show_major13.jpg");
			else if (num == 15)
				this->pictureBox2->Load("show_major14.jpg");
			else if (num == 16)
				this->pictureBox2->Load("show_major15.jpg");
			else if (num == 17)
				this->pictureBox2->Load("show_major16.jpg");
			else if (num == 18)
				this->pictureBox2->Load("show_major17.jpg");
			else if (num == 19)
				this->pictureBox2->Load("show_major18.jpg");
			else if (num == 20)
				this->pictureBox2->Load("show_major19.jpg");
			else if (num == 21)
				this->pictureBox2->Load("show_major20.jpg");
			else if (num == 22)
				this->pictureBox2->Load("show_major21.jpg");
			// 
			// DailyShow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1630, 902);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"DailyShow";
			this->Text = L"DailyShow";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:bool DsToMenu = false;
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DsToMenu = true;
		this->Close();
	}
	};
}
