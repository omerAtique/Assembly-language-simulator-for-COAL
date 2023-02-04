#pragma once
#include <cstdlib>
#include<string>
#include <msclr/marshal_cppstd.h>
using namespace std;


extern string tbu0;
extern string ramData[32];
extern int pc;

namespace coalProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label39;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::RosyBrown;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(411, 221);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 141;
			this->pictureBox1->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Control;
			this->label21->Location = System::Drawing::Point(914, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 17);
			this->label21->TabIndex = 140;
			this->label21->Text = L"0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(565, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 34);
			this->button1->TabIndex = 109;
			this->button1->Text = L"Single Step";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::Control;
			this->label23->Location = System::Drawing::Point(1109, 505);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 17);
			this->label23->TabIndex = 139;
			this->label23->Text = L"31";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::Control;
			this->label24->Location = System::Drawing::Point(1109, 479);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(32, 17);
			this->label24->TabIndex = 138;
			this->label24->Text = L"30";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::Control;
			this->label25->Location = System::Drawing::Point(1109, 167);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 17);
			this->label25->TabIndex = 137;
			this->label25->Text = L"18";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::Control;
			this->label26->Location = System::Drawing::Point(1109, 190);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(27, 17);
			this->label26->TabIndex = 136;
			this->label26->Text = L"19";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::Control;
			this->label27->Location = System::Drawing::Point(1109, 219);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 17);
			this->label27->TabIndex = 135;
			this->label27->Text = L"20";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::Control;
			this->label28->Location = System::Drawing::Point(1109, 242);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(27, 17);
			this->label28->TabIndex = 134;
			this->label28->Text = L"21";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::Control;
			this->label29->Location = System::Drawing::Point(1109, 271);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(32, 17);
			this->label29->TabIndex = 133;
			this->label29->Text = L"22";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::Control;
			this->label30->Location = System::Drawing::Point(1109, 297);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(32, 17);
			this->label30->TabIndex = 132;
			this->label30->Text = L"23";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::Control;
			this->label31->Location = System::Drawing::Point(1109, 320);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(32, 17);
			this->label31->TabIndex = 131;
			this->label31->Text = L"24";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::Control;
			this->label32->Location = System::Drawing::Point(1109, 349);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(32, 17);
			this->label32->TabIndex = 130;
			this->label32->Text = L"25";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::Control;
			this->label33->Location = System::Drawing::Point(1109, 377);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(32, 17);
			this->label33->TabIndex = 129;
			this->label33->Text = L"26";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::Control;
			this->label34->Location = System::Drawing::Point(1109, 401);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(30, 17);
			this->label34->TabIndex = 128;
			this->label34->Text = L"27";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::Control;
			this->label35->Location = System::Drawing::Point(1109, 427);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(32, 17);
			this->label35->TabIndex = 127;
			this->label35->Text = L"28";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::Control;
			this->label36->Location = System::Drawing::Point(1109, 453);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(32, 17);
			this->label36->TabIndex = 126;
			this->label36->Text = L"29";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::Control;
			this->label37->Location = System::Drawing::Point(1109, 138);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(25, 17);
			this->label37->TabIndex = 125;
			this->label37->Text = L"17";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::Control;
			this->label20->Location = System::Drawing::Point(1109, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 17);
			this->label20->TabIndex = 124;
			this->label20->Text = L"16";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::Control;
			this->label19->Location = System::Drawing::Point(914, 502);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(27, 17);
			this->label19->TabIndex = 123;
			this->label19->Text = L"15";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::Control;
			this->label18->Location = System::Drawing::Point(914, 476);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 17);
			this->label18->TabIndex = 122;
			this->label18->Text = L"14";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::Control;
			this->label17->Location = System::Drawing::Point(914, 164);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 17);
			this->label17->TabIndex = 121;
			this->label17->Text = L"2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(914, 187);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 17);
			this->label16->TabIndex = 120;
			this->label16->Text = L"3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::Control;
			this->label15->Location = System::Drawing::Point(914, 216);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 17);
			this->label15->TabIndex = 119;
			this->label15->Text = L"4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(914, 239);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 17);
			this->label14->TabIndex = 118;
			this->label14->Text = L"5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(914, 268);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 17);
			this->label13->TabIndex = 117;
			this->label13->Text = L"6";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(914, 294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 17);
			this->label12->TabIndex = 116;
			this->label12->Text = L"7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(914, 317);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 17);
			this->label11->TabIndex = 115;
			this->label11->Text = L"8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(914, 346);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 17);
			this->label10->TabIndex = 114;
			this->label10->Text = L"9";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(914, 374);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 17);
			this->label9->TabIndex = 113;
			this->label9->Text = L"10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(914, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 17);
			this->label8->TabIndex = 112;
			this->label8->Text = L"11";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(914, 424);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 17);
			this->label7->TabIndex = 111;
			this->label7->Text = L"12";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(914, 450);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 17);
			this->label6->TabIndex = 110;
			this->label6->Text = L"13";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Origin Tech Demo", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(914, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 17);
			this->label5->TabIndex = 108;
			this->label5->Text = L"1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSalmon;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->textBox33);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox35);
			this->panel1->Controls->Add(this->textBox36);
			this->panel1->Location = System::Drawing::Point(63, 289);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 240);
			this->panel1->TabIndex = 107;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(21, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 22);
			this->button5->TabIndex = 146;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(21, 135);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 22);
			this->button4->TabIndex = 145;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(21, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 22);
			this->button3->TabIndex = 144;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::Control;
			this->label38->Location = System::Drawing::Point(74, 94);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(37, 34);
			this->label38->TabIndex = 41;
			this->label38->Text = L"IR";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(123, 101);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(139, 20);
			this->textBox33->TabIndex = 40;
			this->textBox33->Text = L"0";
			this->textBox33->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox33_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(69, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 34);
			this->label4->TabIndex = 39;
			this->label4->Text = L"PC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(68, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 34);
			this->label3->TabIndex = 38;
			this->label3->Text = L"AC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(99, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 46);
			this->label2->TabIndex = 36;
			this->label2->Text = L"CPU";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(123, 167);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(139, 20);
			this->textBox35->TabIndex = 37;
			this->textBox35->Text = L"0";
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox35_TextChanged);
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(123, 134);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(139, 20);
			this->textBox36->TabIndex = 36;
			this->textBox36->Text = L"0";
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox36_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(1074, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 46);
			this->label1->TabIndex = 106;
			this->label1->Text = L"RAM";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(1149, 503);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(139, 20);
			this->textBox17->TabIndex = 105;
			this->textBox17->Text = L"00000000";
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(1149, 477);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(139, 20);
			this->textBox18->TabIndex = 104;
			this->textBox18->Text = L"00000000";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(1149, 451);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(139, 20);
			this->textBox19->TabIndex = 103;
			this->textBox19->Text = L"00000000";
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(1149, 425);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(139, 20);
			this->textBox20->TabIndex = 102;
			this->textBox20->Text = L"00000000";
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox20_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(1149, 399);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(139, 20);
			this->textBox21->TabIndex = 101;
			this->textBox21->Text = L"00000000";
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox21_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(1149, 373);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(139, 20);
			this->textBox22->TabIndex = 100;
			this->textBox22->Text = L"00000000";
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(1149, 347);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(139, 20);
			this->textBox23->TabIndex = 99;
			this->textBox23->Text = L"00000000";
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox23_TextChanged);
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(1149, 321);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(139, 20);
			this->textBox24->TabIndex = 98;
			this->textBox24->Text = L"00000000";
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox24_TextChanged);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(1149, 295);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(139, 20);
			this->textBox25->TabIndex = 97;
			this->textBox25->Text = L"00000000";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox25_TextChanged);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(1149, 269);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(139, 20);
			this->textBox26->TabIndex = 96;
			this->textBox26->Text = L"00000000";
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox26_TextChanged);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(1149, 243);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(139, 20);
			this->textBox27->TabIndex = 95;
			this->textBox27->Text = L"00000000";
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox27_TextChanged);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(1149, 217);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(139, 20);
			this->textBox28->TabIndex = 94;
			this->textBox28->Text = L"00000000";
			this->textBox28->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox28_TextChanged);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(1149, 191);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(139, 20);
			this->textBox29->TabIndex = 93;
			this->textBox29->Text = L"00000000";
			this->textBox29->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox29_TextChanged);
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(1149, 165);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(139, 20);
			this->textBox30->TabIndex = 92;
			this->textBox30->Text = L"00000000";
			this->textBox30->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox30_TextChanged);
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(1149, 139);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(139, 20);
			this->textBox31->TabIndex = 91;
			this->textBox31->Text = L"00000000";
			this->textBox31->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox31_TextChanged);
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(1149, 113);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(139, 20);
			this->textBox32->TabIndex = 90;
			this->textBox32->Text = L"00000000";
			this->textBox32->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox32_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(945, 503);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(139, 20);
			this->textBox9->TabIndex = 89;
			this->textBox9->Text = L"00000000";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(945, 477);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(139, 20);
			this->textBox10->TabIndex = 88;
			this->textBox10->Text = L"00000000";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(945, 451);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(139, 20);
			this->textBox11->TabIndex = 87;
			this->textBox11->Text = L"00000000";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(945, 425);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(139, 20);
			this->textBox12->TabIndex = 86;
			this->textBox12->Text = L"00000000";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(945, 399);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(139, 20);
			this->textBox13->TabIndex = 85;
			this->textBox13->Text = L"00000000";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(945, 373);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 20);
			this->textBox14->TabIndex = 84;
			this->textBox14->Text = L"00000000";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(945, 347);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(139, 20);
			this->textBox15->TabIndex = 83;
			this->textBox15->Text = L"00000000";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(945, 321);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(139, 20);
			this->textBox16->TabIndex = 82;
			this->textBox16->Text = L"00000000";
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(945, 295);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 20);
			this->textBox5->TabIndex = 81;
			this->textBox5->Text = L"00000000";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(945, 269);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 20);
			this->textBox6->TabIndex = 80;
			this->textBox6->Text = L"00000000";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(945, 243);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(139, 20);
			this->textBox7->TabIndex = 79;
			this->textBox7->Text = L"00000000";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(945, 217);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(139, 20);
			this->textBox8->TabIndex = 78;
			this->textBox8->Text = L"00000000";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(945, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 20);
			this->textBox3->TabIndex = 77;
			this->textBox3->Text = L"00000000";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(945, 165);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 20);
			this->textBox4->TabIndex = 76;
			this->textBox4->Text = L"00000000";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(945, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 20);
			this->textBox2->TabIndex = 75;
			this->textBox2->Text = L"00000000";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(945, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 20);
			this->textBox1->TabIndex = 74;
			this->textBox1->Text = L"00000000";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(565, 449);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 34);
			this->button2->TabIndex = 142;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 12));
			this->label22->ForeColor = System::Drawing::SystemColors::Control;
			this->label22->Location = System::Drawing::Point(419, 74);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(367, 115);
			this->label22->TabIndex = 143;
			this->label22->Text = L"made by:\r\nKhizar Ali Shah-2020196\r\nMuhammad Omer Bin Atique-2020335\r\nHarris Abdul"
				L"lah-2020159\r\nSyed Muhammad Ashhar Shah-2020478\r\n";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"LEMON MILK Light", 28));
			this->label39->ForeColor = System::Drawing::SystemColors::Control;
			this->label39->Location = System::Drawing::Point(414, 20);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(603, 54);
			this->label39->TabIndex = 144;
			this->label39->Text = L"BASIC COMPUTER SIMULATOR";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(1362, 580);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			
	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	System::String^ pcVal = textBox35->Text;
	string pcV = msclr::interop::marshal_as<string>(pcVal);
	pc = stoi(pcV);

	System::String^ acVal = textBox36->Text;
	//System::String^ old = textBox3->Text;
	string acV = msclr::interop::marshal_as<string>(acVal);
	int ac = stoi(acV);

	if (pc == 0)
	{
		System::String^ tb0 = textBox1->Text;
		//System::String^ old = textBox3->Text;
		ramData[0] = msclr::interop::marshal_as<string>(tb0);

		//1
		System::String^ tb1 = textBox2->Text;
		//System::String^ old = textBox3->Text;
		ramData[1] = msclr::interop::marshal_as<string>(tb1);

		//2
		System::String^ tb2 = textBox4->Text;
		//System::String^ old = textBox3->Text;
		ramData[2] = msclr::interop::marshal_as<string>(tb2);

		//3
		System::String^ tb3 = textBox3->Text;
		//System::String^ old = textBox3->Text;
		ramData[3] = msclr::interop::marshal_as<string>(tb3);

		//4
		System::String^ tb4 = textBox8->Text;
		//System::String^ old = textBox3->Text;
		ramData[4] = msclr::interop::marshal_as<string>(tb4);

		//5
		System::String^ tb5 = textBox7->Text;
		//System::String^ old = textBox3->Text;
		ramData[5] = msclr::interop::marshal_as<string>(tb5);

		//6
		System::String^ tb6 = textBox6->Text;
		//System::String^ old = textBox3->Text;
		ramData[6] = msclr::interop::marshal_as<string>(tb6);

		//7
		System::String^ tb7 = textBox5->Text;
		//System::String^ old = textBox3->Text;
		ramData[7] = msclr::interop::marshal_as<string>(tb7);

		//8
		System::String^ tb8 = textBox16->Text;
		//System::String^ old = textBox3->Text;
		ramData[8] = msclr::interop::marshal_as<string>(tb8);

		//9
		System::String^ tb9 = textBox15->Text;
		//System::String^ old = textBox3->Text;
		ramData[9] = msclr::interop::marshal_as<string>(tb9);

		//10
		System::String^ tb10 = textBox14->Text;
		//System::String^ old = textBox3->Text;
		ramData[10] = msclr::interop::marshal_as<string>(tb10);

		//11
		System::String^ tb11 = textBox13->Text;
		//System::String^ old = textBox3->Text;
		ramData[11] = msclr::interop::marshal_as<string>(tb11);

		//12
		System::String^ tb12 = textBox12->Text;
		//System::String^ old = textBox3->Text;
		ramData[12] = msclr::interop::marshal_as<string>(tb12);

		//13
		System::String^ tb13 = textBox11->Text;
		//System::String^ old = textBox3->Text;
		ramData[13] = msclr::interop::marshal_as<string>(tb13);

		//14
		System::String^ tb14 = textBox10->Text;
		//System::String^ old = textBox3->Text;
		ramData[14] = msclr::interop::marshal_as<string>(tb14);

		//15
		System::String^ tb15 = textBox9->Text;
		//System::String^ old = textBox3->Text;
		ramData[15] = msclr::interop::marshal_as<string>(tb15);

		//16
		System::String^ tb16 = textBox32->Text;
		//System::String^ old = textBox3->Text;
		ramData[16] = msclr::interop::marshal_as<string>(tb16);


		//17
		System::String^ tb17 = textBox31->Text;
		//System::String^ old = textBox3->Text;
		ramData[17] = msclr::interop::marshal_as<string>(tb17);

		//18
		System::String^ tb18 = textBox30->Text;
		//System::String^ old = textBox3->Text;
		ramData[18] = msclr::interop::marshal_as<string>(tb18);

		//19
		System::String^ tb19 = textBox29->Text;
		//System::String^ old = textBox3->Text;
		ramData[19] = msclr::interop::marshal_as<string>(tb19);

		//20
		System::String^ tb20 = textBox28->Text;
		//System::String^ old = textBox3->Text;
		ramData[20] = msclr::interop::marshal_as<string>(tb20);

		//21
		System::String^ tb21 = textBox27->Text;
		//System::String^ old = textBox3->Text;
		ramData[21] = msclr::interop::marshal_as<string>(tb21);

		//22
		System::String^ tb22 = textBox26->Text;
		//System::String^ old = textBox3->Text;
		ramData[22] = msclr::interop::marshal_as<string>(tb22);

		//23
		System::String^ tb23 = textBox25->Text;
		//System::String^ old = textBox3->Text;
		ramData[23] = msclr::interop::marshal_as<string>(tb23);

		//24
		System::String^ tb24 = textBox24->Text;
		//System::String^ old = textBox3->Text;
		ramData[24] = msclr::interop::marshal_as<string>(tb24);

		//25
		System::String^ tb25 = textBox23->Text;
		//System::String^ old = textBox3->Text;
		ramData[25] = msclr::interop::marshal_as<string>(tb25);

		//26
		System::String^ tb26 = textBox22->Text;
		//System::String^ old = textBox3->Text;
		ramData[26] = msclr::interop::marshal_as<string>(tb26);

		//27
		System::String^ tb27 = textBox21->Text;
		//System::String^ old = textBox3->Text;
		ramData[27] = msclr::interop::marshal_as<string>(tb27);

		//28
		System::String^ tb28 = textBox20->Text;
		//System::String^ old = textBox3->Text;
		ramData[28] = msclr::interop::marshal_as<string>(tb28);

		//29
		System::String^ tb29 = textBox19->Text;
		//System::String^ old = textBox3->Text;
		ramData[29] = msclr::interop::marshal_as<string>(tb29);

		//30
		System::String^ tb30 = textBox18->Text;
		//System::String^ old = textBox3->Text;
		ramData[30] = msclr::interop::marshal_as<string>(tb30);

		//31
		System::String^ tb31 = textBox17->Text;
		//System::String^ old = textBox3->Text;
		ramData[31] = msclr::interop::marshal_as<string>(tb31);
	}

	//System::String^ newS = msclr::interop::marshal_as<System::String^>(tbu0);
	//textBox35->Text = newS;
	//string newA = to_string(ac);

	
	System::String^ newins = msclr::interop::marshal_as<System::String^>(ramData[pc]);
	textBox33->Text = newins;



	string opcode = ramData[pc].substr(0, 3);

	string address;

	if (opcode == "HLT")
	{
		pc = -1;
		ac = 0;
		//string newP = to_string(pc);
		//System::String^ newPCV = msclr::interop::marshal_as<System::String^>(newP);
		//textBox35->Text = newPCV;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;

		return;
	}
	else
	{
		address = ramData[pc].substr(4, 2);
	}
	
	int intAddress = stoi(address);
	int oldPc = pc;
	pc++;


	string newP = to_string(pc);
	System::String^ newPCV = msclr::interop::marshal_as<System::String^>(newP);
	textBox35->Text = newPCV;


	if (opcode == "MUL")
	{	
		int operand = stoi(ramData[intAddress]);
		ac = ac * operand;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;
	}
	else if (opcode == "ADD")
	{
		int operand = stoi(ramData[intAddress]);
		ac = ac + operand;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;
	}
	else if (opcode == "LDA")
	{
		int operand = stoi(ramData[intAddress]);
		ac = operand;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;
	}
	else if (opcode == "STA")
	{
		int operand = stoi(ramData[intAddress]);
		ramData[intAddress] = to_string(ac);
		
		System::String^ tb0 = msclr::interop::marshal_as<System::String^>(ramData[0]);
		textBox1->Text = tb0;

		//1
		//System::String^ tb1 = textBox2->Text;
		//System::String^ old = textBox3->Text;
		//ramData[1] = msclr::interop::marshal_as<string>(tb1);
		System::String^ tb1 = msclr::interop::marshal_as<System::String^>(ramData[1]);
		textBox2->Text = tb1;

		//2
		//System::String^ tb2 = textBox4->Text;
		//System::String^ old = textBox3->Text;
		//ramData[2] = msclr::interop::marshal_as<string>(tb2);
		System::String^ tb2 = msclr::interop::marshal_as<System::String^>(ramData[2]);
		textBox4->Text = tb2;

		//3
		//System::String^ tb3 = textBox3->Text;
		//System::String^ old = textBox3->Text;
		//ramData[3] = msclr::interop::marshal_as<string>(tb3);
		System::String^ tb3 = msclr::interop::marshal_as<System::String^>(ramData[3]);
		textBox3->Text = tb3;

		//4
		//System::String^ tb4 = textBox8->Text;
		//System::String^ old = textBox3->Text;
		//ramData[4] = msclr::interop::marshal_as<string>(tb4);
		System::String^ tb4 = msclr::interop::marshal_as<System::String^>(ramData[4]);
		textBox8->Text = tb4;

		//5
		//System::String^ tb5 = textBox7->Text;
		//System::String^ old = textBox3->Text;
		//ramData[5] = msclr::interop::marshal_as<string>(tb5);
		System::String^ tb5 = msclr::interop::marshal_as<System::String^>(ramData[5]);
		textBox7->Text = tb5;

		//6
		//System::String^ tb6 = textBox6->Text;
		//System::String^ old = textBox3->Text;
		//ramData[6] = msclr::interop::marshal_as<string>(tb6);
		System::String^ tb6 = msclr::interop::marshal_as<System::String^>(ramData[6]);
		textBox6->Text = tb6;

		//7
		//System::String^ tb7 = textBox5->Text;
		//System::String^ old = textBox3->Text;
		//ramData[7] = msclr::interop::marshal_as<string>(tb7);
		System::String^ tb7 = msclr::interop::marshal_as<System::String^>(ramData[7]);
		textBox5->Text = tb7;

		//8
		//System::String^ tb8 = textBox16->Text;
		//System::String^ old = textBox3->Text;
		//ramData[8] = msclr::interop::marshal_as<string>(tb8);
		System::String^ tb8 = msclr::interop::marshal_as<System::String^>(ramData[8]);
		textBox16->Text = tb8;

		//9
		//System::String^ tb9 = textBox15->Text;
		//System::String^ old = textBox3->Text;
		//ramData[9] = msclr::interop::marshal_as<string>(tb9);
		System::String^ tb9 = msclr::interop::marshal_as<System::String^>(ramData[9]);
		textBox15->Text = tb9;

		//10
		//System::String^ tb10 = textBox14->Text;
		//System::String^ old = textBox3->Text;
		//ramData[10] = msclr::interop::marshal_as<string>(tb10);
		System::String^ tb10 = msclr::interop::marshal_as<System::String^>(ramData[10]);
		textBox14->Text = tb10;

		//11
		//System::String^ tb11 = textBox13->Text;
		//System::String^ old = textBox3->Text;
		//ramData[11] = msclr::interop::marshal_as<string>(tb11);
		System::String^ tb11 = msclr::interop::marshal_as<System::String^>(ramData[11]);
		textBox13->Text = tb11;

		//12
		//System::String^ tb12 = textBox12->Text;
		//System::String^ old = textBox3->Text;
		//ramData[12] = msclr::interop::marshal_as<string>(tb12);
		System::String^ tb12 = msclr::interop::marshal_as<System::String^>(ramData[12]);
		textBox12->Text = tb12;

		//13
		//System::String^ tb13 = textBox11->Text;
		//System::String^ old = textBox3->Text;
		//ramData[13] = msclr::interop::marshal_as<string>(tb13);
		System::String^ tb13 = msclr::interop::marshal_as<System::String^>(ramData[13]);
		textBox11->Text = tb13;

		//14
		//System::String^ tb14 = textBox10->Text;
		//System::String^ old = textBox3->Text;
		//ramData[14] = msclr::interop::marshal_as<string>(tb14);
		System::String^ tb14 = msclr::interop::marshal_as<System::String^>(ramData[14]);
		textBox10->Text = tb14;

		//15
		//System::String^ tb15 = textBox9->Text;
		//System::String^ old = textBox3->Text;
		//ramData[15] = msclr::interop::marshal_as<string>(tb15);
		System::String^ tb15 = msclr::interop::marshal_as<System::String^>(ramData[15]);
		textBox9->Text = tb15;

		//16
		//System::String^ tb16 = textBox32->Text;
		//System::String^ old = textBox3->Text;
		//ramData[16] = msclr::interop::marshal_as<string>(tb16);
		System::String^ tb16 = msclr::interop::marshal_as<System::String^>(ramData[16]);
		textBox32->Text = tb16;


		//17
		//System::String^ tb17 = textBox31->Text;
		//System::String^ old = textBox3->Text;
		//ramData[17] = msclr::interop::marshal_as<string>(tb17);
		System::String^ tb17 = msclr::interop::marshal_as<System::String^>(ramData[17]);
		textBox31->Text = tb17;

		//18
		//System::String^ tb18 = textBox30->Text;
		//System::String^ old = textBox3->Text;
		//ramData[18] = msclr::interop::marshal_as<string>(tb18);
		System::String^ tb18 = msclr::interop::marshal_as<System::String^>(ramData[18]);
		textBox30->Text = tb18;

		//19
		//System::String^ tb19 = textBox29->Text;
		//System::String^ old = textBox3->Text;
		//ramData[19] = msclr::interop::marshal_as<string>(tb19);
		System::String^ tb19 = msclr::interop::marshal_as<System::String^>(ramData[19]);
		textBox29->Text = tb19;
		//20
		//System::String^ tb20 = textBox28->Text;
		//System::String^ old = textBox3->Text;
		//ramData[20] = msclr::interop::marshal_as<string>(tb20);
		System::String^ tb20 = msclr::interop::marshal_as<System::String^>(ramData[20]);
		textBox28->Text = tb20;
		//21
		//System::String^ tb21 = textBox27->Text;
		//System::String^ old = textBox3->Text;
		//ramData[21] = msclr::interop::marshal_as<string>(tb21);
		System::String^ tb21 = msclr::interop::marshal_as<System::String^>(ramData[21]);
		textBox27->Text = tb21;
		//22
		//System::String^ tb22 = textBox26->Text;
		//System::String^ old = textBox3->Text;
		//ramData[22] = msclr::interop::marshal_as<string>(tb22);
		System::String^ tb22 = msclr::interop::marshal_as<System::String^>(ramData[22]);
		textBox26->Text = tb22;
		//23
		//System::String^ tb23 = textBox25->Text;
		//System::String^ old = textBox3->Text;
		//ramData[23] = msclr::interop::marshal_as<string>(tb23);
		System::String^ tb23 = msclr::interop::marshal_as<System::String^>(ramData[23]);
		textBox25->Text = tb23;
		//24
		//System::String^ tb24 = textBox24->Text;
		//System::String^ old = textBox3->Text;
		//ramData[24] = msclr::interop::marshal_as<string>(tb24);
		System::String^ tb24 = msclr::interop::marshal_as<System::String^>(ramData[24]);
		textBox24->Text = tb24;

		//25
		//System::String^ tb25 = textBox23->Text;
		//System::String^ old = textBox3->Text;
		//ramData[25] = msclr::interop::marshal_as<string>(tb25);
		System::String^ tb25 = msclr::interop::marshal_as<System::String^>(ramData[23]);
		textBox23->Text = tb25;
		//26
		//System::String^ tb26 = textBox22->Text;
		//System::String^ old = textBox3->Text;
		//ramData[26] = msclr::interop::marshal_as<string>(tb26);
		System::String^ tb26 = msclr::interop::marshal_as<System::String^>(ramData[26]);
		textBox22->Text = tb26;

		//27
		//System::String^ tb27 = textBox21->Text;
		//System::String^ old = textBox3->Text;
		//ramData[27] = msclr::interop::marshal_as<string>(tb27);
		System::String^ tb27 = msclr::interop::marshal_as<System::String^>(ramData[27]);
		textBox21->Text = tb27;
		//28
		//System::String^ tb28 = textBox20->Text;
		//System::String^ old = textBox3->Text;
		//ramData[28] = msclr::interop::marshal_as<string>(tb28);
		System::String^ tb28 = msclr::interop::marshal_as<System::String^>(ramData[28]);
		textBox20->Text = tb28;
		//29
		//System::String^ tb29 = textBox19->Text;
		//System::String^ old = textBox3->Text;
		//ramData[29] = msclr::interop::marshal_as<string>(tb29);
		System::String^ tb29 = msclr::interop::marshal_as<System::String^>(ramData[29]);
		textBox19->Text = tb29;
		//30
		//System::String^ tb30 = textBox18->Text;
		//System::String^ old = textBox3->Text;
		//ramData[30] = msclr::interop::marshal_as<string>(tb30);
		System::String^ tb30 = msclr::interop::marshal_as<System::String^>(ramData[30]);
		textBox18->Text = tb30;
		//31
		//System::String^ tb31 = textBox17->Text;
		//System::String^ old = textBox3->Text;
		//ramData[31] = msclr::interop::marshal_as<string>(tb31);
		System::String^ tb31 = msclr::interop::marshal_as<System::String^>(ramData[31]);
		textBox17->Text = tb31;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;
	}
	else if (opcode == "BUN")
	{
		//int operand = stoi(ramData[intAddress]);
		pc = intAddress;
		string newPx = to_string(pc);
		System::String^ newPCVx = msclr::interop::marshal_as<System::String^>(newPx);
		textBox35->Text = newPCVx;
	}
	else if (opcode == "BSA")
	{	
		string oldPcstr = to_string(oldPc);
		if (oldPcstr.length() == 1)
		{
			ramData[intAddress] = "BUN 0" + to_string(oldPc + 1);
		}
		else
		{
			ramData[intAddress] = "BUN " + to_string(oldPc + 1);
		}
		
		pc = intAddress + 1;
		string newPx = to_string(pc);
		System::String^ newPCVx = msclr::interop::marshal_as<System::String^>(newPx);
		textBox35->Text = newPCVx;

		//operand = stoi(ramData[intAddress]);
		//System::String^ tb0 = textBox1->Text;
		//System::String^ old = textBox3->Text;
		//ramData[0] = msclr::interop::marshal_as<string>(tb0);
		System::String^ tb0 = msclr::interop::marshal_as<System::String^>(ramData[0]);
		textBox1->Text = tb0;

		//1
		//System::String^ tb1 = textBox2->Text;
		//System::String^ old = textBox3->Text;
		//ramData[1] = msclr::interop::marshal_as<string>(tb1);
		System::String^ tb1 = msclr::interop::marshal_as<System::String^>(ramData[1]);
		textBox2->Text = tb1;

		//2
		//System::String^ tb2 = textBox4->Text;
		//System::String^ old = textBox3->Text;
		//ramData[2] = msclr::interop::marshal_as<string>(tb2);
		System::String^ tb2 = msclr::interop::marshal_as<System::String^>(ramData[2]);
		textBox4->Text = tb2;

		//3
		//System::String^ tb3 = textBox3->Text;
		//System::String^ old = textBox3->Text;
		//ramData[3] = msclr::interop::marshal_as<string>(tb3);
		System::String^ tb3 = msclr::interop::marshal_as<System::String^>(ramData[3]);
		textBox3->Text = tb3;

		//4
		//System::String^ tb4 = textBox8->Text;
		//System::String^ old = textBox3->Text;
		//ramData[4] = msclr::interop::marshal_as<string>(tb4);
		System::String^ tb4 = msclr::interop::marshal_as<System::String^>(ramData[4]);
		textBox8->Text = tb4;

		//5
		//System::String^ tb5 = textBox7->Text;
		//System::String^ old = textBox3->Text;
		//ramData[5] = msclr::interop::marshal_as<string>(tb5);
		System::String^ tb5 = msclr::interop::marshal_as<System::String^>(ramData[5]);
		textBox7->Text = tb5;

		//6
		//System::String^ tb6 = textBox6->Text;
		//System::String^ old = textBox3->Text;
		//ramData[6] = msclr::interop::marshal_as<string>(tb6);
		System::String^ tb6 = msclr::interop::marshal_as<System::String^>(ramData[6]);
		textBox6->Text = tb6;

		//7
		//System::String^ tb7 = textBox5->Text;
		//System::String^ old = textBox3->Text;
		//ramData[7] = msclr::interop::marshal_as<string>(tb7);
		System::String^ tb7 = msclr::interop::marshal_as<System::String^>(ramData[7]);
		textBox5->Text = tb7;

		//8
		//System::String^ tb8 = textBox16->Text;
		//System::String^ old = textBox3->Text;
		//ramData[8] = msclr::interop::marshal_as<string>(tb8);
		System::String^ tb8 = msclr::interop::marshal_as<System::String^>(ramData[8]);
		textBox16->Text = tb8;

		//9
		//System::String^ tb9 = textBox15->Text;
		//System::String^ old = textBox3->Text;
		//ramData[9] = msclr::interop::marshal_as<string>(tb9);
		System::String^ tb9 = msclr::interop::marshal_as<System::String^>(ramData[9]);
		textBox15->Text = tb9;

		//10
		//System::String^ tb10 = textBox14->Text;
		//System::String^ old = textBox3->Text;
		//ramData[10] = msclr::interop::marshal_as<string>(tb10);
		System::String^ tb10 = msclr::interop::marshal_as<System::String^>(ramData[10]);
		textBox14->Text = tb10;

		//11
		//System::String^ tb11 = textBox13->Text;
		//System::String^ old = textBox3->Text;
		//ramData[11] = msclr::interop::marshal_as<string>(tb11);
		System::String^ tb11 = msclr::interop::marshal_as<System::String^>(ramData[11]);
		textBox13->Text = tb11;

		//12
		//System::String^ tb12 = textBox12->Text;
		//System::String^ old = textBox3->Text;
		//ramData[12] = msclr::interop::marshal_as<string>(tb12);
		System::String^ tb12 = msclr::interop::marshal_as<System::String^>(ramData[12]);
		textBox12->Text = tb12;

		//13
		//System::String^ tb13 = textBox11->Text;
		//System::String^ old = textBox3->Text;
		//ramData[13] = msclr::interop::marshal_as<string>(tb13);
		System::String^ tb13 = msclr::interop::marshal_as<System::String^>(ramData[13]);
		textBox11->Text = tb13;

		//14
		//System::String^ tb14 = textBox10->Text;
		//System::String^ old = textBox3->Text;
		//ramData[14] = msclr::interop::marshal_as<string>(tb14);
		System::String^ tb14 = msclr::interop::marshal_as<System::String^>(ramData[14]);
		textBox10->Text = tb14;

		//15
		//System::String^ tb15 = textBox9->Text;
		//System::String^ old = textBox3->Text;
		//ramData[15] = msclr::interop::marshal_as<string>(tb15);
		System::String^ tb15 = msclr::interop::marshal_as<System::String^>(ramData[15]);
		textBox9->Text = tb15;

		//16
		//System::String^ tb16 = textBox32->Text;
		//System::String^ old = textBox3->Text;
		//ramData[16] = msclr::interop::marshal_as<string>(tb16);
		System::String^ tb16 = msclr::interop::marshal_as<System::String^>(ramData[16]);
		textBox32->Text = tb16;


		//17
		//System::String^ tb17 = textBox31->Text;
		//System::String^ old = textBox3->Text;
		//ramData[17] = msclr::interop::marshal_as<string>(tb17);
		System::String^ tb17 = msclr::interop::marshal_as<System::String^>(ramData[17]);
		textBox31->Text = tb17;

		//18
		//System::String^ tb18 = textBox30->Text;
		//System::String^ old = textBox3->Text;
		//ramData[18] = msclr::interop::marshal_as<string>(tb18);
		System::String^ tb18 = msclr::interop::marshal_as<System::String^>(ramData[18]);
		textBox30->Text = tb18;

		//19
		//System::String^ tb19 = textBox29->Text;
		//System::String^ old = textBox3->Text;
		//ramData[19] = msclr::interop::marshal_as<string>(tb19);
		System::String^ tb19 = msclr::interop::marshal_as<System::String^>(ramData[19]);
		textBox29->Text = tb19;
		//20
		//System::String^ tb20 = textBox28->Text;
		//System::String^ old = textBox3->Text;
		//ramData[20] = msclr::interop::marshal_as<string>(tb20);
		System::String^ tb20 = msclr::interop::marshal_as<System::String^>(ramData[20]);
		textBox28->Text = tb20;
		//21
		//System::String^ tb21 = textBox27->Text;
		//System::String^ old = textBox3->Text;
		//ramData[21] = msclr::interop::marshal_as<string>(tb21);
		System::String^ tb21 = msclr::interop::marshal_as<System::String^>(ramData[21]);
		textBox27->Text = tb21;
		//22
		//System::String^ tb22 = textBox26->Text;
		//System::String^ old = textBox3->Text;
		//ramData[22] = msclr::interop::marshal_as<string>(tb22);
		System::String^ tb22 = msclr::interop::marshal_as<System::String^>(ramData[22]);
		textBox26->Text = tb22;
		//23
		//System::String^ tb23 = textBox25->Text;
		//System::String^ old = textBox3->Text;
		//ramData[23] = msclr::interop::marshal_as<string>(tb23);
		System::String^ tb23 = msclr::interop::marshal_as<System::String^>(ramData[23]);
		textBox25->Text = tb23;
		//24
		//System::String^ tb24 = textBox24->Text;
		//System::String^ old = textBox3->Text;
		//ramData[24] = msclr::interop::marshal_as<string>(tb24);
		System::String^ tb24 = msclr::interop::marshal_as<System::String^>(ramData[24]);
		textBox24->Text = tb24;

		//25
		//System::String^ tb25 = textBox23->Text;
		//System::String^ old = textBox3->Text;
		//ramData[25] = msclr::interop::marshal_as<string>(tb25);
		System::String^ tb25 = msclr::interop::marshal_as<System::String^>(ramData[23]);
		textBox23->Text = tb25;
		//26
		//System::String^ tb26 = textBox22->Text;
		//System::String^ old = textBox3->Text;
		//ramData[26] = msclr::interop::marshal_as<string>(tb26);
		System::String^ tb26 = msclr::interop::marshal_as<System::String^>(ramData[26]);
		textBox22->Text = tb26;

		//27
		//System::String^ tb27 = textBox21->Text;
		//System::String^ old = textBox3->Text;
		//ramData[27] = msclr::interop::marshal_as<string>(tb27);
		System::String^ tb27 = msclr::interop::marshal_as<System::String^>(ramData[27]);
		textBox21->Text = tb27;
		//28
		//System::String^ tb28 = textBox20->Text;
		//System::String^ old = textBox3->Text;
		//ramData[28] = msclr::interop::marshal_as<string>(tb28);
		System::String^ tb28 = msclr::interop::marshal_as<System::String^>(ramData[28]);
		textBox20->Text = tb28;
		//29
		//System::String^ tb29 = textBox19->Text;
		//System::String^ old = textBox3->Text;
		//ramData[29] = msclr::interop::marshal_as<string>(tb29);
		System::String^ tb29 = msclr::interop::marshal_as<System::String^>(ramData[29]);
		textBox19->Text = tb29;
		//30
		//System::String^ tb30 = textBox18->Text;
		//System::String^ old = textBox3->Text;
		//ramData[30] = msclr::interop::marshal_as<string>(tb30);
		System::String^ tb30 = msclr::interop::marshal_as<System::String^>(ramData[30]);
		textBox18->Text = tb30;
		//31
		//System::String^ tb31 = textBox17->Text;
		//System::String^ old = textBox3->Text;
		//ramData[31] = msclr::interop::marshal_as<string>(tb31);
		System::String^ tb31 = msclr::interop::marshal_as<System::String^>(ramData[31]);
		textBox17->Text = tb31;

		string newA = to_string(ac);
		System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
		textBox36->Text = newACV;
		



		
	}
	else if (opcode == "ISZ") {
	int dr = stoi(ramData[intAddress]);
	dr++;
	if (dr == 0)
	{
		pc++;
		string newP = to_string(pc);
		System::String^ newPCV = msclr::interop::marshal_as<System::String^>(newP);
		textBox35->Text = newPCV;
	}
	ramData[intAddress] = to_string(dr);

	//operand = stoi(ramData[intAddress]);
		//System::String^ tb0 = textBox1->Text;
		//System::String^ old = textBox3->Text;
		//ramData[0] = msclr::interop::marshal_as<string>(tb0);
	System::String^ tb0 = msclr::interop::marshal_as<System::String^>(ramData[0]);
	textBox1->Text = tb0;

	//1
	//System::String^ tb1 = textBox2->Text;
	//System::String^ old = textBox3->Text;
	//ramData[1] = msclr::interop::marshal_as<string>(tb1);
	System::String^ tb1 = msclr::interop::marshal_as<System::String^>(ramData[1]);
	textBox2->Text = tb1;

	//2
	//System::String^ tb2 = textBox4->Text;
	//System::String^ old = textBox3->Text;
	//ramData[2] = msclr::interop::marshal_as<string>(tb2);
	System::String^ tb2 = msclr::interop::marshal_as<System::String^>(ramData[2]);
	textBox4->Text = tb2;

	//3
	//System::String^ tb3 = textBox3->Text;
	//System::String^ old = textBox3->Text;
	//ramData[3] = msclr::interop::marshal_as<string>(tb3);
	System::String^ tb3 = msclr::interop::marshal_as<System::String^>(ramData[3]);
	textBox3->Text = tb3;

	//4
	//System::String^ tb4 = textBox8->Text;
	//System::String^ old = textBox3->Text;
	//ramData[4] = msclr::interop::marshal_as<string>(tb4);
	System::String^ tb4 = msclr::interop::marshal_as<System::String^>(ramData[4]);
	textBox8->Text = tb4;

	//5
	//System::String^ tb5 = textBox7->Text;
	//System::String^ old = textBox3->Text;
	//ramData[5] = msclr::interop::marshal_as<string>(tb5);
	System::String^ tb5 = msclr::interop::marshal_as<System::String^>(ramData[5]);
	textBox7->Text = tb5;

	//6
	//System::String^ tb6 = textBox6->Text;
	//System::String^ old = textBox3->Text;
	//ramData[6] = msclr::interop::marshal_as<string>(tb6);
	System::String^ tb6 = msclr::interop::marshal_as<System::String^>(ramData[6]);
	textBox6->Text = tb6;

	//7
	//System::String^ tb7 = textBox5->Text;
	//System::String^ old = textBox3->Text;
	//ramData[7] = msclr::interop::marshal_as<string>(tb7);
	System::String^ tb7 = msclr::interop::marshal_as<System::String^>(ramData[7]);
	textBox5->Text = tb7;

	//8
	//System::String^ tb8 = textBox16->Text;
	//System::String^ old = textBox3->Text;
	//ramData[8] = msclr::interop::marshal_as<string>(tb8);
	System::String^ tb8 = msclr::interop::marshal_as<System::String^>(ramData[8]);
	textBox16->Text = tb8;

	//9
	//System::String^ tb9 = textBox15->Text;
	//System::String^ old = textBox3->Text;
	//ramData[9] = msclr::interop::marshal_as<string>(tb9);
	System::String^ tb9 = msclr::interop::marshal_as<System::String^>(ramData[9]);
	textBox15->Text = tb9;

	//10
	//System::String^ tb10 = textBox14->Text;
	//System::String^ old = textBox3->Text;
	//ramData[10] = msclr::interop::marshal_as<string>(tb10);
	System::String^ tb10 = msclr::interop::marshal_as<System::String^>(ramData[10]);
	textBox14->Text = tb10;

	//11
	//System::String^ tb11 = textBox13->Text;
	//System::String^ old = textBox3->Text;
	//ramData[11] = msclr::interop::marshal_as<string>(tb11);
	System::String^ tb11 = msclr::interop::marshal_as<System::String^>(ramData[11]);
	textBox13->Text = tb11;

	//12
	//System::String^ tb12 = textBox12->Text;
	//System::String^ old = textBox3->Text;
	//ramData[12] = msclr::interop::marshal_as<string>(tb12);
	System::String^ tb12 = msclr::interop::marshal_as<System::String^>(ramData[12]);
	textBox12->Text = tb12;

	//13
	//System::String^ tb13 = textBox11->Text;
	//System::String^ old = textBox3->Text;
	//ramData[13] = msclr::interop::marshal_as<string>(tb13);
	System::String^ tb13 = msclr::interop::marshal_as<System::String^>(ramData[13]);
	textBox11->Text = tb13;

	//14
	//System::String^ tb14 = textBox10->Text;
	//System::String^ old = textBox3->Text;
	//ramData[14] = msclr::interop::marshal_as<string>(tb14);
	System::String^ tb14 = msclr::interop::marshal_as<System::String^>(ramData[14]);
	textBox10->Text = tb14;

	//15
	//System::String^ tb15 = textBox9->Text;
	//System::String^ old = textBox3->Text;
	//ramData[15] = msclr::interop::marshal_as<string>(tb15);
	System::String^ tb15 = msclr::interop::marshal_as<System::String^>(ramData[15]);
	textBox9->Text = tb15;

	//16
	//System::String^ tb16 = textBox32->Text;
	//System::String^ old = textBox3->Text;
	//ramData[16] = msclr::interop::marshal_as<string>(tb16);
	System::String^ tb16 = msclr::interop::marshal_as<System::String^>(ramData[16]);
	textBox32->Text = tb16;


	//17
	//System::String^ tb17 = textBox31->Text;
	//System::String^ old = textBox3->Text;
	//ramData[17] = msclr::interop::marshal_as<string>(tb17);
	System::String^ tb17 = msclr::interop::marshal_as<System::String^>(ramData[17]);
	textBox31->Text = tb17;

	//18
	//System::String^ tb18 = textBox30->Text;
	//System::String^ old = textBox3->Text;
	//ramData[18] = msclr::interop::marshal_as<string>(tb18);
	System::String^ tb18 = msclr::interop::marshal_as<System::String^>(ramData[18]);
	textBox30->Text = tb18;

	//19
	//System::String^ tb19 = textBox29->Text;
	//System::String^ old = textBox3->Text;
	//ramData[19] = msclr::interop::marshal_as<string>(tb19);
	System::String^ tb19 = msclr::interop::marshal_as<System::String^>(ramData[19]);
	textBox29->Text = tb19;
	//20
	//System::String^ tb20 = textBox28->Text;
	//System::String^ old = textBox3->Text;
	//ramData[20] = msclr::interop::marshal_as<string>(tb20);
	System::String^ tb20 = msclr::interop::marshal_as<System::String^>(ramData[20]);
	textBox28->Text = tb20;
	//21
	//System::String^ tb21 = textBox27->Text;
	//System::String^ old = textBox3->Text;
	//ramData[21] = msclr::interop::marshal_as<string>(tb21);
	System::String^ tb21 = msclr::interop::marshal_as<System::String^>(ramData[21]);
	textBox27->Text = tb21;
	//22
	//System::String^ tb22 = textBox26->Text;
	//System::String^ old = textBox3->Text;
	//ramData[22] = msclr::interop::marshal_as<string>(tb22);
	System::String^ tb22 = msclr::interop::marshal_as<System::String^>(ramData[22]);
	textBox26->Text = tb22;
	//23
	//System::String^ tb23 = textBox25->Text;
	//System::String^ old = textBox3->Text;
	//ramData[23] = msclr::interop::marshal_as<string>(tb23);
	System::String^ tb23 = msclr::interop::marshal_as<System::String^>(ramData[23]);
	textBox25->Text = tb23;
	//24
	//System::String^ tb24 = textBox24->Text;
	//System::String^ old = textBox3->Text;
	//ramData[24] = msclr::interop::marshal_as<string>(tb24);
	System::String^ tb24 = msclr::interop::marshal_as<System::String^>(ramData[24]);
	textBox24->Text = tb24;

	//25
	//System::String^ tb25 = textBox23->Text;
	//System::String^ old = textBox3->Text;
	//ramData[25] = msclr::interop::marshal_as<string>(tb25);
	System::String^ tb25 = msclr::interop::marshal_as<System::String^>(ramData[23]);
	textBox23->Text = tb25;
	//26
	//System::String^ tb26 = textBox22->Text;
	//System::String^ old = textBox3->Text;
	//ramData[26] = msclr::interop::marshal_as<string>(tb26);
	System::String^ tb26 = msclr::interop::marshal_as<System::String^>(ramData[26]);
	textBox22->Text = tb26;

	//27
	//System::String^ tb27 = textBox21->Text;
	//System::String^ old = textBox3->Text;
	//ramData[27] = msclr::interop::marshal_as<string>(tb27);
	System::String^ tb27 = msclr::interop::marshal_as<System::String^>(ramData[27]);
	textBox21->Text = tb27;
	//28
	//System::String^ tb28 = textBox20->Text;
	//System::String^ old = textBox3->Text;
	//ramData[28] = msclr::interop::marshal_as<string>(tb28);
	System::String^ tb28 = msclr::interop::marshal_as<System::String^>(ramData[28]);
	textBox20->Text = tb28;
	//29
	//System::String^ tb29 = textBox19->Text;
	//System::String^ old = textBox3->Text;
	//ramData[29] = msclr::interop::marshal_as<string>(tb29);
	System::String^ tb29 = msclr::interop::marshal_as<System::String^>(ramData[29]);
	textBox19->Text = tb29;
	//30
	//System::String^ tb30 = textBox18->Text;
	//System::String^ old = textBox3->Text;
	//ramData[30] = msclr::interop::marshal_as<string>(tb30);
	System::String^ tb30 = msclr::interop::marshal_as<System::String^>(ramData[30]);
	textBox18->Text = tb30;
	//31
	//System::String^ tb31 = textBox17->Text;
	//System::String^ old = textBox3->Text;
	//ramData[31] = msclr::interop::marshal_as<string>(tb31);
	System::String^ tb31 = msclr::interop::marshal_as<System::String^>(ramData[31]);
	textBox17->Text = tb31;

	string newA = to_string(ac);
	System::String^ newACV = msclr::interop::marshal_as<System::String^>(newA);
	textBox36->Text = newACV;


}
}
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	//PC
} 
private: System::Void textBox36_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {

//10
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//9
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//8
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//7
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//6
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//5
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//4
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//3
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}//2
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
//12
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//14
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//13
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//15
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//11
}
private: System::Void textBox32_TextChanged(System::Object^ sender, System::EventArgs^ e) {//16
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//23

}
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//22
}
private: System::Void textBox27_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//21

}
private: System::Void textBox28_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//20
}
private: System::Void textBox29_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//19
}
private: System::Void textBox30_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//18
}
private: System::Void textBox31_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//17
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//24
}
private: System::Void textBox23_TextChanged(System::Object^ sender, System::EventArgs^ e) {//25
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//30
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//29
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//28
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//27
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {

//26
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//31
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ default = "00000000";

	textBox1->Text = default;
	textBox2->Text = default;
	textBox3->Text = default;
	textBox4->Text = default;
	textBox5->Text = default;
	textBox6->Text = default;
	textBox7->Text = default;
	textBox8->Text = default;
	textBox9->Text = default;
	textBox10->Text = default;
	textBox11->Text = default;
	textBox12->Text = default;
	textBox13->Text = default;
	textBox14->Text = default;
	textBox15->Text = default;
	textBox16->Text = default;
	textBox17->Text = default;
	textBox18->Text = default;
	textBox19->Text = default;
	textBox20->Text = default;
	textBox21->Text = default;
	textBox22->Text = default;
	textBox23->Text = default;
	textBox24->Text = default;
	textBox25->Text = default;
	textBox26->Text = default;
	textBox27->Text = default;
	textBox28->Text = default;
	textBox29->Text = default;
	textBox30->Text = default;
	textBox31->Text = default;
	textBox32->Text = default;
	textBox35->Text = "0";
	textBox36->Text = "0";
	textBox33->Text = "0";

}
private: System::Void textBox33_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox33->Text = "0";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox36->Text = "0";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox35->Text = "0";
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
