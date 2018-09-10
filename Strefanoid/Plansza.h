#pragma once
namespace Strefanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Plansza
	/// </summary>
	public ref class Plansza : public System::Windows::Forms::Form
	{
	public:
		Plansza(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pilkaObraz;
	protected:
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::PictureBox^  platforma;
	private: System::Windows::Forms::Label^  labelPunkty;
	private: System::Windows::Forms::Label^  labelZycia;
	private: System::Windows::Forms::PictureBox^  pictureBox_AgainPlay;
	private: System::Windows::Forms::PictureBox^  pictureBox_Koniec;
	private: System::Windows::Forms::PictureBox^  pictureBox_potworek;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBoxNowa;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Plansza::typeid));
			this->pilkaObraz = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->platforma = (gcnew System::Windows::Forms::PictureBox());
			this->labelPunkty = (gcnew System::Windows::Forms::Label());
			this->labelZycia = (gcnew System::Windows::Forms::Label());
			this->pictureBox_AgainPlay = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Koniec = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_potworek = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxNowa = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilkaObraz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platforma))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_AgainPlay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Koniec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_potworek))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNowa))->BeginInit();
			this->SuspendLayout();
			// 
			// pilkaObraz
			// 
			this->pilkaObraz->BackColor = System::Drawing::Color::Transparent;
			this->pilkaObraz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilkaObraz.Image")));
			this->pilkaObraz->Location = System::Drawing::Point(327, 440);
			this->pilkaObraz->Name = L"pilkaObraz";
			this->pilkaObraz->Size = System::Drawing::Size(25, 25);
			this->pilkaObraz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pilkaObraz->TabIndex = 0;
			this->pilkaObraz->TabStop = false;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 10;
			this->timer->Tick += gcnew System::EventHandler(this, &Plansza::timer_Tick);
			// 
			// platforma
			// 
			this->platforma->BackColor = System::Drawing::Color::Transparent;
			this->platforma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platforma.Image")));
			this->platforma->Location = System::Drawing::Point(274, 461);
			this->platforma->Name = L"platforma";
			this->platforma->Size = System::Drawing::Size(133, 28);
			this->platforma->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->platforma->TabIndex = 1;
			this->platforma->TabStop = false;
			// 
			// labelPunkty
			// 
			this->labelPunkty->AutoSize = true;
			this->labelPunkty->BackColor = System::Drawing::Color::Transparent;
			this->labelPunkty->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPunkty->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPunkty->Location = System::Drawing::Point(519, 18);
			this->labelPunkty->Name = L"labelPunkty";
			this->labelPunkty->Size = System::Drawing::Size(59, 33);
			this->labelPunkty->TabIndex = 2;
			this->labelPunkty->Text = L"200";
			// 
			// labelZycia
			// 
			this->labelZycia->AutoSize = true;
			this->labelZycia->BackColor = System::Drawing::Color::Transparent;
			this->labelZycia->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelZycia->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelZycia->Location = System::Drawing::Point(655, 18);
			this->labelZycia->Name = L"labelZycia";
			this->labelZycia->Size = System::Drawing::Size(27, 33);
			this->labelZycia->TabIndex = 3;
			this->labelZycia->Text = L"2";
			// 
			// pictureBox_AgainPlay
			// 
			this->pictureBox_AgainPlay->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox_AgainPlay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_AgainPlay.Image")));
			this->pictureBox_AgainPlay->Location = System::Drawing::Point(12, 323);
			this->pictureBox_AgainPlay->Name = L"pictureBox_AgainPlay";
			this->pictureBox_AgainPlay->Size = System::Drawing::Size(199, 86);
			this->pictureBox_AgainPlay->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_AgainPlay->TabIndex = 4;
			this->pictureBox_AgainPlay->TabStop = false;
			this->pictureBox_AgainPlay->Visible = false;
			this->pictureBox_AgainPlay->Click += gcnew System::EventHandler(this, &Plansza::pictureBox_AgainPlay_Click);
			// 
			// pictureBox_Koniec
			// 
			this->pictureBox_Koniec->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox_Koniec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Koniec.Image")));
			this->pictureBox_Koniec->Location = System::Drawing::Point(12, 415);
			this->pictureBox_Koniec->Name = L"pictureBox_Koniec";
			this->pictureBox_Koniec->Size = System::Drawing::Size(199, 85);
			this->pictureBox_Koniec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_Koniec->TabIndex = 5;
			this->pictureBox_Koniec->TabStop = false;
			this->pictureBox_Koniec->Visible = false;
			this->pictureBox_Koniec->Click += gcnew System::EventHandler(this, &Plansza::pictureBox_Koniec_Click);
			// 
			// pictureBox_potworek
			// 
			this->pictureBox_potworek->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox_potworek->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_potworek.Image")));
			this->pictureBox_potworek->Location = System::Drawing::Point(441, 289);
			this->pictureBox_potworek->Name = L"pictureBox_potworek";
			this->pictureBox_potworek->Size = System::Drawing::Size(251, 200);
			this->pictureBox_potworek->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_potworek->TabIndex = 6;
			this->pictureBox_potworek->TabStop = false;
			this->pictureBox_potworek->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 154);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"c";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 70);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"t";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1, 112);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"c";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1, 196);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"c";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(616, 112);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"c";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(531, 112);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"c";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(531, 70);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"t";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(531, 154);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 11;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"c";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(359, 196);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 18;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"c";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(531, 196);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 17;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"c";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(192, 112);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(76, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 16;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"t";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(616, 196);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 36);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 15;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"c";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(192, 154);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(76, 36);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 19;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"c";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(192, 196);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(76, 36);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 20;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"t";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(443, 112);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(76, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 21;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"t";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(616, 154);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 22;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"t";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(616, 70);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 36);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 23;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"t";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(359, 112);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(76, 36);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 24;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"c";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(192, 70);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(76, 36);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 25;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"c";
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(359, 154);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(76, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 26;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"c";
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(443, 154);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 36);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 27;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"c";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(443, 196);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 36);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 28;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"c";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(443, 70);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 29;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"c";
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(359, 70);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 30;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"c";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(274, 196);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 36);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 34;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"c";
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(274, 112);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 36);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 33;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"c";
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(274, 70);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(76, 36);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 32;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"t";
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(274, 154);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(76, 36);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 31;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"c";
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(95, 238);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(76, 36);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 38;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"c";
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(95, 154);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(76, 36);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 37;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"c";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(95, 112);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(76, 36);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 36;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"t";
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(95, 196);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(76, 36);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 35;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"c";
			// 
			// pictureBoxNowa
			// 
			this->pictureBoxNowa->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxNowa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxNowa.Image")));
			this->pictureBoxNowa->Location = System::Drawing::Point(29, 323);
			this->pictureBoxNowa->Name = L"pictureBoxNowa";
			this->pictureBoxNowa->Size = System::Drawing::Size(169, 86);
			this->pictureBoxNowa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxNowa->TabIndex = 39;
			this->pictureBoxNowa->TabStop = false;
			this->pictureBoxNowa->Visible = false;
			this->pictureBoxNowa->Click += gcnew System::EventHandler(this, &Plansza::pictureBoxNowa_Click);
			// 
			// Plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->pictureBoxNowa);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox_potworek);
			this->Controls->Add(this->pictureBox_Koniec);
			this->Controls->Add(this->pictureBox_AgainPlay);
			this->Controls->Add(this->labelZycia);
			this->Controls->Add(this->labelPunkty);
			this->Controls->Add(this->platforma);
			this->Controls->Add(this->pilkaObraz);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Plansza";
			this->Text = L"Plansza";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Plansza::move_platforma);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilkaObraz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platforma))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_AgainPlay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Koniec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_potworek))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNowa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int x = 0;
		int y = 0;
		char kierunek;
		int punkty = 0;
		int zycia = 3;
		int licz_zbite_cegly = 0;
#pragma endregion

		private: void zagraj_dzwiek(String^ dzwiek)
		{
			try // funkcja ktora w momencie gdy plik nie bedzie mogl byc otwarty nie wywali programu
			{
				System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
				graj->SoundLocation = dzwiek;
				graj->Load();
				graj->Play();
			}
			catch (...)
			{
				// zadnego komunikatu nie pokazuj
			}
		}

		private: void  jeszcze_raz_buduj_cegly(System::Windows::Forms::Control^ cegla)
		{
			if (cegla->Tag == "c" || cegla->Tag=="t")
			{
				cegla->Visible = true;
			}
			if (cegla->Tag == "ct")
			{
				PictureBox^ cegla_twarda = (PictureBox^)cegla;
				cegla_twarda->Tag = "t";
				cegla_twarda->Image = imageList1->Images[1];
				cegla_twarda->Visible = true;
			}
		}

private: void zbijamy_cegle(System::Windows::Forms::Control^ cegla)
		{
			if (
				(pilkaObraz->Top + pilkaObraz->Height > cegla->Top) &&
				(pilkaObraz->Top < cegla->Top + cegla->Height) &&
				(pilkaObraz->Left + pilkaObraz->Width > cegla->Left) &&
				(pilkaObraz->Left < cegla->Left + cegla->Width) &&
				(cegla->Visible == true)
				)
			{
				y = -y;
				if (cegla->Tag != "t")
				{
					zagraj_dzwiek("../dzwieki/zbicie.wav");
					cegla->Visible = false;
					punkty += 5;
					licz_zbite_cegly++;
					
				}
				else
				{
					
					zagraj_dzwiek("../dzwieki/kruszenie.wav");
					PictureBox^ rozbita_cegla = (PictureBox^)cegla;
					rozbita_cegla->Image = imageList1->Images[2];
					rozbita_cegla->Tag = "ct";
					punkty += 10;
					if (x > 0)
						x++;
					else
						x--;
					if (y > 0)
						y++;
					else
						y--;

				}
				
			}
			labelPunkty->Text = Convert::ToString(punkty);
		}

	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each(Control^ element in this->Controls)
		{
			if (element->Tag == "c" || element->Tag == "t" || element->Tag =="ct")
			{
				zbijamy_cegle(element);
			}
			
		}
		if (licz_zbite_cegly == 32)
		{
			timer->Enabled = false;
			licz_zbite_cegly = 0;
			Plansza::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
			pictureBox_Koniec->Visible = true;
			pictureBoxNowa->Visible = true;
			zagraj_dzwiek("../dzwieki/wygrana.wav");
		}
		
		pilkaObraz->Left += x;
		pilkaObraz->Top += y;
		
		labelPunkty->Text = Convert::ToString(punkty);
		labelZycia->Text = Convert::ToString(zycia);
		// odbijaie pilki o sciany
		//prawa
		if (pilkaObraz->Left >= Plansza::Width - pilkaObraz->Width)
		{
			x = -x;
		}
		
		//platfroma i dol
		if (pilkaObraz->Top +pilkaObraz->Height > platforma->Top && pilkaObraz->Left + (pilkaObraz->Width/2)+5 > platforma->Left  && pilkaObraz->Left  < platforma->Left + platforma->Width+5)
		{
			y = -y;
			zagraj_dzwiek("../dzwieki/paletka.wav");
		}
		else
			if (pilkaObraz->Top + pilkaObraz->Height>= platforma->Top )
			{
				timer->Enabled = false;
				
				pilkaObraz->Visible = false; x = 0; y = 0;
				punkty -= 50;
				zycia--;

				labelPunkty->Text = Convert::ToString(punkty);
				labelZycia->Text = Convert::ToString(zycia);

				if (zycia > 0)
				{
					MessageBox::Show("Zgubiona pilka", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Information);
					pilkaObraz->Top = platforma->Top - pilkaObraz->Height+5;
					pilkaObraz->Left = platforma->Left + platforma->Width/2 - 10;
					pilkaObraz->Visible = true;
					timer->Enabled = true;
					x = 0;
					y = 0;
				}
				else
				{
					zagraj_dzwiek("../dzwieki/smiech.wav");
					pictureBox_AgainPlay->Visible = true;
					pictureBox_Koniec->Visible = true;
					pictureBox_potworek->Visible = true;
				}
			}

		//gora
		if (pilkaObraz->Top < 70)
		{
			y = -y;
		}
		if (pilkaObraz->Left < 5)
		{
			x = -x;
		}

		if (kierunek == 'l')
		{
			if (platforma->Left > 15)
				platforma->Left -= 30;
			else
				if (platforma->Left - 15 < 15)
					platforma->Left = 0;
			if (x == 0 && y == 0)
			{
				pilkaObraz->Left = platforma->Left + platforma->Width / 2 - 10;
			}
			kierunek = 'x';
		}
		if (kierunek == 'r')
		{
			if (platforma->Left < Plansza::Width - 150)
				platforma->Left += 30;
			else
				if (platforma->Left - (Plansza::Width - 150) < Plansza::Width - 1)
					platforma->Left = Plansza::Width - 150;
			if (x == 0 && y == 0)
			{
				pilkaObraz->Left = platforma->Left + platforma->Width / 2 - 10;
			}
			kierunek = 'x';
		}

		/*
		switch (kierunek)
		{
		case 'l':
			if (platforma->Left > 15)
				platforma->Left -= 15;
			else
				if (platforma->Left - 15 < 15)
					platforma->Left = 0;
			kierunek = 'x';
			break;
		case 'r':
			if (platforma->Left < Plansza::Width - 150)
				platforma->Left += 15;
			else
				if (platforma->Left - (Plansza::Width - 150)<Plansza::Width - 150)
					platforma->Left = Plansza::Width - 150;
			kierunek = 'x';
			break;
		default:
			break;
		} */
	}
	private: System::Void move_platforma(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left)
		{
			kierunek = 'l';
		}
		if (e->KeyCode == Keys::Right)
		{
			kierunek = 'r';
		}
		if (e->KeyCode == Keys::Space)
		{
			if (x == 0 && y == 0)
			{
				x = -10;
				y = -10;
			}
		}
	}
private: System::Void pictureBox_AgainPlay_Click(System::Object^  sender, System::EventArgs^  e) {
	for each(Control^ element in this->Controls)
	{
		if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct")
		{
			jeszcze_raz_buduj_cegly(element);
		}

	}
	punkty =0;
	zycia=3;

	labelPunkty->Text = Convert::ToString(punkty);
	labelZycia->Text = Convert::ToString(zycia);

	pictureBox_AgainPlay->Visible = false;
	pictureBox_Koniec->Visible = false;
	pictureBox_potworek->Visible = false;
	pictureBoxNowa->Visible = false;

	timer->Enabled = true;
	pilkaObraz->Visible = true;
	this->platforma->Location = System::Drawing::Point(274, 461);
	this->pilkaObraz->Location = System::Drawing::Point(327, 440);

	x = 0; y = 0;

}
private: System::Void pictureBox_Koniec_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pictureBoxNowa_Click(System::Object^  sender, System::EventArgs^  e) {
	Plansza::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");
	for each(Control^ element in this->Controls)
	{
		if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct")
		{
			jeszcze_raz_buduj_cegly(element);
		}

	}
	punkty = 0;
	zycia = 3;

	labelPunkty->Text = Convert::ToString(punkty);
	labelZycia->Text = Convert::ToString(zycia);

	pictureBox_AgainPlay->Visible = false;
	pictureBox_Koniec->Visible = false;
	pictureBox_potworek->Visible = false;
	pictureBoxNowa->Visible = false;

	timer->Enabled = true;
	pilkaObraz->Visible = true;
	this->platforma->Location = System::Drawing::Point(274, 461);
	this->pilkaObraz->Location = System::Drawing::Point(327, 440);

	x = 0; y = 0;

}
};
}
