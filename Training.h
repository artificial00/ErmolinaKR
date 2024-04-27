#pragma once
#include <cstdlib>
#include <ctime>
namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Training : public System::Windows::Forms::Form
	{
	public:
		Training(void)
		{
			InitializeComponent();

		}

	protected:

		~Training()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labVibor1;

	private: System::Windows::Forms::Button^ butABC;
	private: System::Windows::Forms::Button^ butAC;
	private: System::Windows::Forms::Button^ butAB;
	private: System::Windows::Forms::Label^ labVibor2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labABC1;
	private: System::Windows::Forms::Label^ labABC2;
	private: System::Windows::Forms::Label^ labABC3;
	private: System::Windows::Forms::Label^ labABC4;
	private: System::Windows::Forms::Label^ labABC5;
	private: System::Windows::Forms::Label^ labAC1;
	private: System::Windows::Forms::Label^ labAC2;
	private: System::Windows::Forms::Label^ labAC3;
	private: System::Windows::Forms::Label^ labAC4;
	private: System::Windows::Forms::Label^ labAC5;
	private: System::Windows::Forms::Label^ labAB1;
	private: System::Windows::Forms::Label^ labAB2;
	private: System::Windows::Forms::Label^ labAB3;
	private: System::Windows::Forms::Label^ labAB4;
	private: System::Windows::Forms::Label^ labAB5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ boxX1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ BoxX2;
	private: System::Windows::Forms::Label^ labErr;
	private: System::Windows::Forms::Button^ butReady;
	private: System::Windows::Forms::Label^ labRight;
	private: System::Windows::Forms::Label^ labWrong;
	private: System::Windows::Forms::Button^ butSolution;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labAnsABC1;
	private: System::Windows::Forms::Label^ labAnsABC2;
	private: System::Windows::Forms::Label^ labAnsABC3;
	private: System::Windows::Forms::Label^ labAnsABC4;
	private: System::Windows::Forms::Label^ labAnsABC5;
	private: System::Windows::Forms::Label^ labAnsAC1;

	private: System::Windows::Forms::Label^ labAnsAC2;

	private: System::Windows::Forms::Label^ labAnsAC3;
	private: System::Windows::Forms::Label^ labAnsAC4;
	private: System::Windows::Forms::Label^ labAnsAC5;
	private: System::Windows::Forms::Label^ labAnsAB1;
	private: System::Windows::Forms::Label^ labAnsAB2;
	private: System::Windows::Forms::Label^ labAnsAB3;
	private: System::Windows::Forms::Label^ labAnsAB4;
	private: System::Windows::Forms::Label^ labAnsAB5;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Training::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labVibor1 = (gcnew System::Windows::Forms::Label());
			this->butABC = (gcnew System::Windows::Forms::Button());
			this->butAC = (gcnew System::Windows::Forms::Button());
			this->butAB = (gcnew System::Windows::Forms::Button());
			this->labVibor2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labABC1 = (gcnew System::Windows::Forms::Label());
			this->labABC2 = (gcnew System::Windows::Forms::Label());
			this->labABC3 = (gcnew System::Windows::Forms::Label());
			this->labABC4 = (gcnew System::Windows::Forms::Label());
			this->labABC5 = (gcnew System::Windows::Forms::Label());
			this->labAC1 = (gcnew System::Windows::Forms::Label());
			this->labAC2 = (gcnew System::Windows::Forms::Label());
			this->labAC3 = (gcnew System::Windows::Forms::Label());
			this->labAC4 = (gcnew System::Windows::Forms::Label());
			this->labAC5 = (gcnew System::Windows::Forms::Label());
			this->labAB1 = (gcnew System::Windows::Forms::Label());
			this->labAB2 = (gcnew System::Windows::Forms::Label());
			this->labAB3 = (gcnew System::Windows::Forms::Label());
			this->labAB4 = (gcnew System::Windows::Forms::Label());
			this->labAB5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->boxX1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BoxX2 = (gcnew System::Windows::Forms::TextBox());
			this->labErr = (gcnew System::Windows::Forms::Label());
			this->butReady = (gcnew System::Windows::Forms::Button());
			this->labRight = (gcnew System::Windows::Forms::Label());
			this->labWrong = (gcnew System::Windows::Forms::Label());
			this->butSolution = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labAnsABC1 = (gcnew System::Windows::Forms::Label());
			this->labAnsABC2 = (gcnew System::Windows::Forms::Label());
			this->labAnsABC3 = (gcnew System::Windows::Forms::Label());
			this->labAnsABC4 = (gcnew System::Windows::Forms::Label());
			this->labAnsABC5 = (gcnew System::Windows::Forms::Label());
			this->labAnsAC1 = (gcnew System::Windows::Forms::Label());
			this->labAnsAC2 = (gcnew System::Windows::Forms::Label());
			this->labAnsAC3 = (gcnew System::Windows::Forms::Label());
			this->labAnsAC4 = (gcnew System::Windows::Forms::Label());
			this->labAnsAC5 = (gcnew System::Windows::Forms::Label());
			this->labAnsAB1 = (gcnew System::Windows::Forms::Label());
			this->labAnsAB2 = (gcnew System::Windows::Forms::Label());
			this->labAnsAB3 = (gcnew System::Windows::Forms::Label());
			this->labAnsAB4 = (gcnew System::Windows::Forms::Label());
			this->labAnsAB5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1434, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тренажёр для решения квадратных уравнений";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labVibor1
			// 
			this->labVibor1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labVibor1->BackColor = System::Drawing::Color::Transparent;
			this->labVibor1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labVibor1->Location = System::Drawing::Point(12, 93);
			this->labVibor1->Name = L"labVibor1";
			this->labVibor1->Size = System::Drawing::Size(332, 42);
			this->labVibor1->TabIndex = 1;
			this->labVibor1->Text = L"Выберите вид уравнения: ";
			// 
			// butABC
			// 
			this->butABC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butABC->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butABC->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butABC->Location = System::Drawing::Point(400, 83);
			this->butABC->Name = L"butABC";
			this->butABC->Size = System::Drawing::Size(301, 56);
			this->butABC->TabIndex = 2;
			this->butABC->Text = L"a, b, c - не равны нулю";
			this->butABC->UseVisualStyleBackColor = false;
			this->butABC->Click += gcnew System::EventHandler(this, &Training::button1_Click);
			// 
			// butAC
			// 
			this->butAC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butAC->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butAC->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butAC->Location = System::Drawing::Point(730, 83);
			this->butAC->Name = L"butAC";
			this->butAC->Size = System::Drawing::Size(301, 56);
			this->butAC->TabIndex = 3;
			this->butAC->Text = L"b равно нулю";
			this->butAC->UseVisualStyleBackColor = false;
			this->butAC->Click += gcnew System::EventHandler(this, &Training::butAC_Click);
			// 
			// butAB
			// 
			this->butAB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butAB->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butAB->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butAB->Location = System::Drawing::Point(1064, 83);
			this->butAB->Name = L"butAB";
			this->butAB->Size = System::Drawing::Size(301, 56);
			this->butAB->TabIndex = 4;
			this->butAB->Text = L"c равно нулю";
			this->butAB->UseVisualStyleBackColor = false;
			this->butAB->Click += gcnew System::EventHandler(this, &Training::butAB_Click);
			// 
			// labVibor2
			// 
			this->labVibor2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labVibor2->BackColor = System::Drawing::Color::Transparent;
			this->labVibor2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labVibor2->Location = System::Drawing::Point(76, 91);
			this->labVibor2->Name = L"labVibor2";
			this->labVibor2->Size = System::Drawing::Size(177, 48);
			this->labVibor2->TabIndex = 5;
			this->labVibor2->Text = L"Вы выбрали:";
			this->labVibor2->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 51);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ваше уравнение:";
			// 
			// labABC1
			// 
			this->labABC1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labABC1->BackColor = System::Drawing::Color::Lavender;
			this->labABC1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labABC1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labABC1.Image")));
			this->labABC1->Location = System::Drawing::Point(394, 212);
			this->labABC1->Name = L"labABC1";
			this->labABC1->Size = System::Drawing::Size(307, 57);
			this->labABC1->TabIndex = 7;
			this->labABC1->Visible = false;
			// 
			// labABC2
			// 
			this->labABC2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labABC2->BackColor = System::Drawing::Color::Lavender;
			this->labABC2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labABC2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labABC2.Image")));
			this->labABC2->Location = System::Drawing::Point(394, 218);
			this->labABC2->Name = L"labABC2";
			this->labABC2->Size = System::Drawing::Size(307, 57);
			this->labABC2->TabIndex = 8;
			this->labABC2->Visible = false;
			// 
			// labABC3
			// 
			this->labABC3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labABC3->BackColor = System::Drawing::Color::Lavender;
			this->labABC3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labABC3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labABC3.Image")));
			this->labABC3->Location = System::Drawing::Point(394, 218);
			this->labABC3->Name = L"labABC3";
			this->labABC3->Size = System::Drawing::Size(307, 57);
			this->labABC3->TabIndex = 9;
			this->labABC3->Visible = false;
			// 
			// labABC4
			// 
			this->labABC4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labABC4->BackColor = System::Drawing::Color::Lavender;
			this->labABC4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labABC4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labABC4.Image")));
			this->labABC4->Location = System::Drawing::Point(394, 218);
			this->labABC4->Name = L"labABC4";
			this->labABC4->Size = System::Drawing::Size(307, 57);
			this->labABC4->TabIndex = 10;
			this->labABC4->Visible = false;
			// 
			// labABC5
			// 
			this->labABC5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labABC5->BackColor = System::Drawing::Color::Lavender;
			this->labABC5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labABC5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labABC5.Image")));
			this->labABC5->Location = System::Drawing::Point(394, 218);
			this->labABC5->Name = L"labABC5";
			this->labABC5->Size = System::Drawing::Size(307, 57);
			this->labABC5->TabIndex = 11;
			this->labABC5->Visible = false;
			// 
			// labAC1
			// 
			this->labAC1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAC1->BackColor = System::Drawing::Color::Lavender;
			this->labAC1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAC1.Image")));
			this->labAC1->Location = System::Drawing::Point(733, 218);
			this->labAC1->Name = L"labAC1";
			this->labAC1->Size = System::Drawing::Size(307, 57);
			this->labAC1->TabIndex = 12;
			this->labAC1->Visible = false;
			// 
			// labAC2
			// 
			this->labAC2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAC2->BackColor = System::Drawing::Color::Lavender;
			this->labAC2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAC2.Image")));
			this->labAC2->Location = System::Drawing::Point(724, 212);
			this->labAC2->Name = L"labAC2";
			this->labAC2->Size = System::Drawing::Size(307, 57);
			this->labAC2->TabIndex = 13;
			this->labAC2->Visible = false;
			// 
			// labAC3
			// 
			this->labAC3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAC3->BackColor = System::Drawing::Color::Lavender;
			this->labAC3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAC3.Image")));
			this->labAC3->Location = System::Drawing::Point(724, 218);
			this->labAC3->Name = L"labAC3";
			this->labAC3->Size = System::Drawing::Size(307, 57);
			this->labAC3->TabIndex = 14;
			this->labAC3->Visible = false;
			// 
			// labAC4
			// 
			this->labAC4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAC4->BackColor = System::Drawing::Color::Lavender;
			this->labAC4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAC4.Image")));
			this->labAC4->Location = System::Drawing::Point(724, 212);
			this->labAC4->Name = L"labAC4";
			this->labAC4->Size = System::Drawing::Size(307, 57);
			this->labAC4->TabIndex = 15;
			this->labAC4->Visible = false;
			// 
			// labAC5
			// 
			this->labAC5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAC5->BackColor = System::Drawing::Color::Lavender;
			this->labAC5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAC5.Image")));
			this->labAC5->Location = System::Drawing::Point(724, 212);
			this->labAC5->Name = L"labAC5";
			this->labAC5->Size = System::Drawing::Size(307, 57);
			this->labAC5->TabIndex = 16;
			this->labAC5->Visible = false;
			// 
			// labAB1
			// 
			this->labAB1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAB1->BackColor = System::Drawing::Color::Lavender;
			this->labAB1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAB1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAB1.Image")));
			this->labAB1->Location = System::Drawing::Point(1058, 218);
			this->labAB1->Name = L"labAB1";
			this->labAB1->Size = System::Drawing::Size(307, 57);
			this->labAB1->TabIndex = 17;
			this->labAB1->Visible = false;
			// 
			// labAB2
			// 
			this->labAB2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAB2->BackColor = System::Drawing::Color::Lavender;
			this->labAB2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAB2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAB2.Image")));
			this->labAB2->Location = System::Drawing::Point(1058, 218);
			this->labAB2->Name = L"labAB2";
			this->labAB2->Size = System::Drawing::Size(307, 57);
			this->labAB2->TabIndex = 18;
			this->labAB2->Visible = false;
			// 
			// labAB3
			// 
			this->labAB3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAB3->BackColor = System::Drawing::Color::Lavender;
			this->labAB3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAB3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAB3.Image")));
			this->labAB3->Location = System::Drawing::Point(1058, 218);
			this->labAB3->Name = L"labAB3";
			this->labAB3->Size = System::Drawing::Size(307, 57);
			this->labAB3->TabIndex = 19;
			this->labAB3->Visible = false;
			// 
			// labAB4
			// 
			this->labAB4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAB4->BackColor = System::Drawing::Color::Lavender;
			this->labAB4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAB4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAB4.Image")));
			this->labAB4->Location = System::Drawing::Point(1058, 218);
			this->labAB4->Name = L"labAB4";
			this->labAB4->Size = System::Drawing::Size(307, 57);
			this->labAB4->TabIndex = 20;
			this->labAB4->Visible = false;
			// 
			// labAB5
			// 
			this->labAB5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAB5->BackColor = System::Drawing::Color::Lavender;
			this->labAB5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAB5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labAB5.Image")));
			this->labAB5->Location = System::Drawing::Point(1058, 218);
			this->labAB5->Name = L"labAB5";
			this->labAB5->Size = System::Drawing::Size(307, 57);
			this->labAB5->TabIndex = 21;
			this->labAB5->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(241, 51);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Ваши ответы:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1353, 76);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Формат записи: если нужно записать дробь, пишите в виде десятичной дроби через то"
				L"чку (например 0.5)\r\nесли корень один, то запишите его в каждую ячейку.";
			// 
			// boxX1
			// 
			this->boxX1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->boxX1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->boxX1->Location = System::Drawing::Point(592, 494);
			this->boxX1->Name = L"boxX1";
			this->boxX1->Size = System::Drawing::Size(123, 34);
			this->boxX1->TabIndex = 24;
			this->boxX1->TextChanged += gcnew System::EventHandler(this, &Training::boxX1_TextChanged);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(332, 490);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 51);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Первый корень:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(760, 490);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(254, 51);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Второй корень:";
			// 
			// BoxX2
			// 
			this->BoxX2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BoxX2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxX2->Location = System::Drawing::Point(1020, 494);
			this->BoxX2->Name = L"BoxX2";
			this->BoxX2->Size = System::Drawing::Size(123, 34);
			this->BoxX2->TabIndex = 26;
			// 
			// labErr
			// 
			this->labErr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labErr->BackColor = System::Drawing::Color::Transparent;
			this->labErr->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labErr->ForeColor = System::Drawing::Color::Maroon;
			this->labErr->Location = System::Drawing::Point(463, 550);
			this->labErr->Name = L"labErr";
			this->labErr->Size = System::Drawing::Size(577, 51);
			this->labErr->TabIndex = 28;
			this->labErr->Text = L"Ваш ввод некорректен! Повторите попытку.";
			this->labErr->Visible = false;
			// 
			// butReady
			// 
			this->butReady->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butReady->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butReady->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butReady->Location = System::Drawing::Point(1200, 480);
			this->butReady->Name = L"butReady";
			this->butReady->Size = System::Drawing::Size(148, 61);
			this->butReady->TabIndex = 29;
			this->butReady->Text = L"Готово";
			this->butReady->UseVisualStyleBackColor = false;
			this->butReady->Click += gcnew System::EventHandler(this, &Training::butReady_Click);
			// 
			// labRight
			// 
			this->labRight->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labRight->BackColor = System::Drawing::Color::Transparent;
			this->labRight->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labRight->ForeColor = System::Drawing::Color::ForestGreen;
			this->labRight->Location = System::Drawing::Point(510, 550);
			this->labRight->Name = L"labRight";
			this->labRight->Size = System::Drawing::Size(437, 51);
			this->labRight->TabIndex = 30;
			this->labRight->Text = L"Ответ правильный! Вы молодец!";
			this->labRight->Visible = false;
			// 
			// labWrong
			// 
			this->labWrong->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labWrong->BackColor = System::Drawing::Color::Transparent;
			this->labWrong->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labWrong->ForeColor = System::Drawing::Color::Maroon;
			this->labWrong->Location = System::Drawing::Point(332, 550);
			this->labWrong->Name = L"labWrong";
			this->labWrong->Size = System::Drawing::Size(836, 51);
			this->labWrong->TabIndex = 31;
			this->labWrong->Text = L"Ответ неверный. Повторите попытку или посмотрите решение.";
			this->labWrong->Visible = false;
			// 
			// butSolution
			// 
			this->butSolution->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butSolution->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butSolution->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butSolution->Location = System::Drawing::Point(18, 538);
			this->butSolution->Name = L"butSolution";
			this->butSolution->Size = System::Drawing::Size(287, 61);
			this->butSolution->TabIndex = 32;
			this->butSolution->Text = L"Посмотреть решение";
			this->butSolution->UseVisualStyleBackColor = false;
			this->butSolution->Click += gcnew System::EventHandler(this, &Training::butSolution_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(0, 881);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1434, 80);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Назад в главное меню";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Training::button1_Click_1);
			// 
			// labAnsABC1
			// 
			this->labAnsABC1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsABC1->BackColor = System::Drawing::Color::Transparent;
			this->labAnsABC1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsABC1->Location = System::Drawing::Point(32, 626);
			this->labAnsABC1->Name = L"labAnsABC1";
			this->labAnsABC1->Size = System::Drawing::Size(454, 175);
			this->labAnsABC1->TabIndex = 34;
			this->labAnsABC1->Text = L"Решим с помощью теоремы Виета:\r\nx^2 +px + q = 0. В нашем случае \r\np = -5, q = 4.\r"
				L"\nНайдём такие корни x1 и x2, что\r\nx1 * x2 = 4 и x1 + x2 = 5.\r\nПолучим, что x1 = "
				L"1, x2 = 4.";
			this->labAnsABC1->Visible = false;
			// 
			// labAnsABC2
			// 
			this->labAnsABC2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsABC2->BackColor = System::Drawing::Color::Transparent;
			this->labAnsABC2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsABC2->Location = System::Drawing::Point(32, 626);
			this->labAnsABC2->Name = L"labAnsABC2";
			this->labAnsABC2->Size = System::Drawing::Size(478, 175);
			this->labAnsABC2->TabIndex = 35;
			this->labAnsABC2->Text = L"Решим с помощью дискриминанта:\r\nНайдем D: D = b^2 - 4ac \r\nD = 25 - 4*2*(-3) = 49."
				L" D > 0, поэтому\r\nx1 = (-5+7)/4 = 0.5\r\nx2 = (-5-7)/4 = -3.\r\n";
			this->labAnsABC2->Visible = false;
			// 
			// labAnsABC3
			// 
			this->labAnsABC3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsABC3->BackColor = System::Drawing::Color::Transparent;
			this->labAnsABC3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsABC3->Location = System::Drawing::Point(32, 626);
			this->labAnsABC3->Name = L"labAnsABC3";
			this->labAnsABC3->Size = System::Drawing::Size(448, 219);
			this->labAnsABC3->TabIndex = 36;
			this->labAnsABC3->Text = L"Решим с помощью правила коэффициентов:\r\na + b + c = 0.  a = 2, b = -9, c = 7\r\nУсл"
				L"овие выполняется, поэтому\r\nx1 = 1\r\nx2 = c/a = 7/2 = 3.5";
			this->labAnsABC3->Visible = false;
			// 
			// labAnsABC4
			// 
			this->labAnsABC4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsABC4->BackColor = System::Drawing::Color::Transparent;
			this->labAnsABC4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsABC4->Location = System::Drawing::Point(32, 626);
			this->labAnsABC4->Name = L"labAnsABC4";
			this->labAnsABC4->Size = System::Drawing::Size(448, 219);
			this->labAnsABC4->TabIndex = 37;
			this->labAnsABC4->Text = L"Решим с помощью обратного правила коэффициентов:\r\na + c = b.  a = -3, b = 6, c = "
				L"9.\r\nУсловие выполняется, поэтому\r\nx1 = -1\r\nx2 = -c/a = -9/(-3) = 3";
			this->labAnsABC4->Visible = false;
			// 
			// labAnsABC5
			// 
			this->labAnsABC5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsABC5->BackColor = System::Drawing::Color::Transparent;
			this->labAnsABC5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsABC5->Location = System::Drawing::Point(32, 626);
			this->labAnsABC5->Name = L"labAnsABC5";
			this->labAnsABC5->Size = System::Drawing::Size(448, 219);
			this->labAnsABC5->TabIndex = 38;
			this->labAnsABC5->Text = L"Решим с помощью дискриминанта:\r\nНайдём D: D = b^2 - 4ac\r\nD = (-4)^2 - 4*4 = 0. D "
				L"= 0, поэтому\r\nx1 = x2 = -b/2a = 2.";
			this->labAnsABC5->Visible = false;
			// 
			// labAnsAC1
			// 
			this->labAnsAC1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAC1->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAC1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAC1->Location = System::Drawing::Point(492, 626);
			this->labAnsAC1->Name = L"labAnsAC1";
			this->labAnsAC1->Size = System::Drawing::Size(448, 219);
			this->labAnsAC1->TabIndex = 39;
			this->labAnsAC1->Text = L"Решим переносом коэффициента c в правую часть уравнения:\r\n3x^2 = 27.\r\nx^2 = 27/3 "
				L"= 9.\r\nx1 = -3, x2 = 3";
			this->labAnsAC1->Visible = false;
			// 
			// labAnsAC2
			// 
			this->labAnsAC2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAC2->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAC2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAC2->Location = System::Drawing::Point(492, 626);
			this->labAnsAC2->Name = L"labAnsAC2";
			this->labAnsAC2->Size = System::Drawing::Size(448, 219);
			this->labAnsAC2->TabIndex = 40;
			this->labAnsAC2->Text = L"Решим переносом коэффициента c в правую часть уравнения:\r\nx^2 = 4.\r\nx1 = -2, x2 ="
				L" 2";
			this->labAnsAC2->Visible = false;
			// 
			// labAnsAC3
			// 
			this->labAnsAC3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAC3->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAC3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAC3->Location = System::Drawing::Point(492, 626);
			this->labAnsAC3->Name = L"labAnsAC3";
			this->labAnsAC3->Size = System::Drawing::Size(448, 219);
			this->labAnsAC3->TabIndex = 41;
			this->labAnsAC3->Text = L"Решим переносом коэффициента c в правую часть уравнения:\r\n2x^2 = 32.\r\nx^2 = 32/2 "
				L"= 16.\r\nx1 = -4, x2 = 4";
			this->labAnsAC3->Visible = false;
			// 
			// labAnsAC4
			// 
			this->labAnsAC4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAC4->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAC4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAC4->Location = System::Drawing::Point(499, 626);
			this->labAnsAC4->Name = L"labAnsAC4";
			this->labAnsAC4->Size = System::Drawing::Size(448, 219);
			this->labAnsAC4->TabIndex = 42;
			this->labAnsAC4->Text = L"Решим переносом коэффициента c в правую часть уравнения:\r\n4x^2 = 16.\r\nx^2 = 16/4 "
				L"= 4.\r\nx1 = -2, x2 = 2";
			this->labAnsAC4->Visible = false;
			// 
			// labAnsAC5
			// 
			this->labAnsAC5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAC5->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAC5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAC5->Location = System::Drawing::Point(492, 626);
			this->labAnsAC5->Name = L"labAnsAC5";
			this->labAnsAC5->Size = System::Drawing::Size(448, 219);
			this->labAnsAC5->TabIndex = 43;
			this->labAnsAC5->Text = L"Решим переносом коэффициента c в правую часть уравнения:\r\n5x^2 = 100.\r\nx^2 = 100/"
				L"5 = 25\r\nx1 = -5, x2 = 5";
			this->labAnsAC5->Visible = false;
			// 
			// labAnsAB1
			// 
			this->labAnsAB1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAB1->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAB1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAB1->Location = System::Drawing::Point(961, 612);
			this->labAnsAB1->Name = L"labAnsAB1";
			this->labAnsAB1->Size = System::Drawing::Size(448, 219);
			this->labAnsAB1->TabIndex = 44;
			this->labAnsAB1->Text = L"Решим вынесением x за скобку:\r\nx(x - 5) = 0.\r\nx1 = 0, x2 = 5";
			this->labAnsAB1->Visible = false;
			// 
			// labAnsAB2
			// 
			this->labAnsAB2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAB2->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAB2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAB2->Location = System::Drawing::Point(946, 612);
			this->labAnsAB2->Name = L"labAnsAB2";
			this->labAnsAB2->Size = System::Drawing::Size(448, 219);
			this->labAnsAB2->TabIndex = 45;
			this->labAnsAB2->Text = L"Решим вынесением x за скобку:\r\nx(x + 3) = 0.\r\nx1 = 0, x2 = -3";
			this->labAnsAB2->Visible = false;
			// 
			// labAnsAB3
			// 
			this->labAnsAB3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAB3->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAB3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAB3->Location = System::Drawing::Point(946, 626);
			this->labAnsAB3->Name = L"labAnsAB3";
			this->labAnsAB3->Size = System::Drawing::Size(448, 219);
			this->labAnsAB3->TabIndex = 46;
			this->labAnsAB3->Text = L"Решим вынесением x за скобку:\r\nx(6x - 12) = 0.\r\nx1 = 0, x2 = 2";
			this->labAnsAB3->Visible = false;
			// 
			// labAnsAB4
			// 
			this->labAnsAB4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAB4->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAB4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAB4->Location = System::Drawing::Point(946, 626);
			this->labAnsAB4->Name = L"labAnsAB4";
			this->labAnsAB4->Size = System::Drawing::Size(448, 219);
			this->labAnsAB4->TabIndex = 47;
			this->labAnsAB4->Text = L"Решим вынесением x за скобку:\r\nx(4x + 6) = 0.\r\nx1 = 0, x2 = -1.5";
			this->labAnsAB4->Visible = false;
			// 
			// labAnsAB5
			// 
			this->labAnsAB5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAnsAB5->BackColor = System::Drawing::Color::Transparent;
			this->labAnsAB5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAnsAB5->Location = System::Drawing::Point(946, 626);
			this->labAnsAB5->Name = L"labAnsAB5";
			this->labAnsAB5->Size = System::Drawing::Size(448, 219);
			this->labAnsAB5->TabIndex = 48;
			this->labAnsAB5->Text = L"Решим вынесением x за скобку:\r\nx(2x - 1) = 0.\r\nx1 = 0, x2 = 0.5";
			this->labAnsAB5->Visible = false;
			// 
			// Training
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->labAnsAB5);
			this->Controls->Add(this->labAnsAB4);
			this->Controls->Add(this->labAnsAB3);
			this->Controls->Add(this->labAnsAB2);
			this->Controls->Add(this->labAnsAB1);
			this->Controls->Add(this->labAnsAC5);
			this->Controls->Add(this->labAnsAC4);
			this->Controls->Add(this->labAnsAC3);
			this->Controls->Add(this->labAnsAC2);
			this->Controls->Add(this->labAnsAC1);
			this->Controls->Add(this->labAnsABC5);
			this->Controls->Add(this->labAnsABC4);
			this->Controls->Add(this->labAnsABC3);
			this->Controls->Add(this->labAnsABC2);
			this->Controls->Add(this->labAnsABC1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->butSolution);
			this->Controls->Add(this->labWrong);
			this->Controls->Add(this->labRight);
			this->Controls->Add(this->butReady);
			this->Controls->Add(this->labErr);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BoxX2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->boxX1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labAB5);
			this->Controls->Add(this->labAB4);
			this->Controls->Add(this->labAB3);
			this->Controls->Add(this->labAB2);
			this->Controls->Add(this->labAB1);
			this->Controls->Add(this->labAC5);
			this->Controls->Add(this->labAC4);
			this->Controls->Add(this->labAC3);
			this->Controls->Add(this->labAC2);
			this->Controls->Add(this->labAC1);
			this->Controls->Add(this->labABC5);
			this->Controls->Add(this->labABC4);
			this->Controls->Add(this->labABC3);
			this->Controls->Add(this->labABC2);
			this->Controls->Add(this->labABC1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labVibor2);
			this->Controls->Add(this->butAB);
			this->Controls->Add(this->butAC);
			this->Controls->Add(this->butABC);
			this->Controls->Add(this->labVibor1);
			this->Controls->Add(this->label1);
			this->Name = L"Training";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Training";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int ch;
		int abc;
		double x1, x2;
		int randomNum() {
			srand(time(0));
			return (rand() % 5);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labVibor2->Show();
		this->labVibor1->Hide();
		this->butAB->Hide();
		this->butAC->Hide();
		ch = randomNum();
		abc = 1;
		switch (ch) {
		case 0:this->labABC1->Show();
		case 1:this->labABC2->Show();
		case 2:this->labABC3->Show();
		case 3:this->labABC4->Show();
		case 4:this->labABC5->Show();
		}
	}
private: System::Void butAC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->labVibor2->Show();
	this->labVibor1->Hide();
	this->butABC->Hide();
	this->butAB->Hide();
	ch = randomNum();
	abc = 2;
	switch (ch) {
	case 0:this->labAC1->Show();
	case 1:this->labAC2->Show();
	case 2:this->labAC3->Show();
	case 3:this->labAC4->Show();
	case 4:this->labAC5->Show();
	}
}
private: System::Void butAB_Click(System::Object^ sender, System::EventArgs^ e) {
	this->labVibor2->Show();
	this->labVibor1->Hide();
	this->butABC->Hide();
	this->butAC->Hide();
	ch = randomNum();
	abc = 3;
	switch (ch) {
	case 0:this->labAB1->Show();
	case 1:this->labAB2->Show();
	case 2:this->labAB3->Show();
	case 3:this->labAB4->Show();
	case 4:this->labAB5->Show();
	}
}
private: bool checkAnsw(double x1, double x2) {
	if (abc == 1 && ch == 0) {
		if ((x1 == 1 && x2 == 4) || (x1 == 4 && x2 == 1)) {
			return true;
		}
		else return false;
	}
	if (abc == 1 && ch == 1) {
		if ((x1 == -3 && x2 == 0.5) || (x1 == 0.5 && x2 == -3)) {
			return true;
		}
		else return false;
	}
	if (abc == 1 && ch == 2) {
		if ((x1 == 1 && x2 == 3.5) || (x1 == 3.5 && x2 == 1)) {
			return true;
		}
		else return false;
	}
	if (abc == 1 && ch == 3) {
		if ((x1 == -1 && x2 == 3) || (x1 == 3 && x2 == -1)) {
			return true;
		}
		else return false;
	}
	if (abc == 1 && ch == 4) {
		if (x1 == 2 && x2 == 2) {
			return true;
		}
		else return false;
	}
	if (abc == 3 && ch == 0) {
		if ((x1 == 0 && x2 == 2.5) || (x1 == 2.5 && x2 == 0)) {
			return true;
		}
		else return false;
	}
	if (abc == 3 && ch == 1) {
		if ((x1 == 0 && x2 == -3) || (x1 == -3 && x2 == 0)) {
			return true;
		}
		else return false;
	}
	if (abc == 3 && ch == 2) {
		if ((x1 == 0 && x2 == 2) || (x1 == 2 && x2 == 0)) {
			return true;
		}
		else return false;
	}
	if (abc == 3 && ch == 3) {
		if ((x1 == 0 && x2 == -1.5) || (x1 == -1.5 && x2 == 0)) {
			return true;
		}
		else return false;
	}
	if (abc == 3 && ch == 4) {
		if ((x1 == 0 && x2 == 0.5) || (x1 == 0.5 && x2 == 0)) {
			return true;
		}
		else return false;
	}
	if (abc == 2 && ch == 0) {
		if ((x1 == 3 && x2 == -3) || (x1 == -3 && x2 == 3)) {
			return true;
		}
		else return false;
	}
	if (abc == 2 && ch == 1) {
		if ((x1 == 2 && x2 == -2) || (x1 == -2 && x2 == 2)) {
			return true;
		}
		else return false;
	}
	if (abc == 2 && ch == 2) {
		if ((x1 == -4 && x2 == 4) || (x1 == 4 && x2 == -4)) {
			return true;
		}
		else return false;
	}
	if (abc == 2 && ch == 3) {
		if ((x1 == 2 && x2 == -2) || (x1 == -2 && x2 == 2)) {
			return true;
		}
		else return false;
	}
	if (abc == 2 && ch == 4) {
		if ((x1 == 5 && x2 == -5) || (x1 == -5 && x2 == 5)) {
			return true;
		}
		else return false;
	}
}

private: System::Void boxX1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(boxX1->Text, x1);
	
}
private: System::Void BoxX2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(BoxX2->Text, x2);
	
}

private: System::Void butReady_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Double::TryParse(boxX1->Text, x1) || !Double::TryParse(BoxX2->Text, x2)) {
		this->labWrong->Hide();
		this->labRight->Hide();
		this->labErr->Show();
	}
	else {
		this->labErr->Hide();
		if (checkAnsw(x1, x2)) {
			this->labWrong->Hide();
			this->labRight->Show();
		}
		else {
			this->labRight->Hide();
			this->labWrong->Show();
		}
		
	}
	
}
private: System::Void butSolution_Click(System::Object^ sender, System::EventArgs^ e) {
	if (abc == 1 && ch == 0) {
		this->labAnsABC1->Show();
	}
	if (abc == 1 && ch == 1) {
		this->labAnsABC2->Show();
	}
	if (abc == 1 && ch == 2) {
		this->labAnsABC3->Show();
	}
	if (abc == 1 && ch == 3) {
		this->labAnsABC4->Show();
	}
	if (abc == 1 && ch == 4) {
		this->labAnsABC5->Show();
	}
	if (abc == 2 && ch == 0) {
		this->labAnsAC1->Show();
	}
	if (abc == 2 && ch == 1) {
		this->labAnsAC2->Show();
	}
	if (abc == 2 && ch == 2) {
		this->labAnsAC3->Show();
	}
	if (abc == 2 && ch == 3) {
		this->labAnsAC4->Show();
	}
	if (abc == 2 && ch == 4) {
		this->labAnsAC5->Show();
	}
	if (abc == 3 && ch == 0) {
		this->labAnsAB1->Show();
	}
	if (abc == 3 && ch == 1) {
		this->labAnsAB2->Show();
	}
	if (abc == 3 && ch == 2) {
		this->labAnsAB3->Show();
	}
	if (abc == 3 && ch == 3) {
		this->labAnsAB4->Show();
	}
	if (abc == 3 && ch == 4) {
		this->labAnsAB5->Show();
	}

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
