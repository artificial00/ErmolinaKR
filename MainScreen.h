#pragma once
#include "Theory.h"
#include "Methods.h"
#include "Training.h"
#include "Reshatel.h"
namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
		{
			InitializeComponent();

		}

	protected:

		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labMenu1;
	private: System::Windows::Forms::Button^ butMenu1;
	private: System::Windows::Forms::Button^ butMenu2;
	private: System::Windows::Forms::Button^ butMenu3;
	private: System::Windows::Forms::Button^ butMenu4;
	private: System::Windows::Forms::Button^ butMenu5;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreen::typeid));
			this->labMenu1 = (gcnew System::Windows::Forms::Label());
			this->butMenu1 = (gcnew System::Windows::Forms::Button());
			this->butMenu2 = (gcnew System::Windows::Forms::Button());
			this->butMenu3 = (gcnew System::Windows::Forms::Button());
			this->butMenu4 = (gcnew System::Windows::Forms::Button());
			this->butMenu5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labMenu1
			// 
			this->labMenu1->BackColor = System::Drawing::Color::Transparent;
			this->labMenu1->Dock = System::Windows::Forms::DockStyle::Top;
			this->labMenu1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labMenu1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->labMenu1->Location = System::Drawing::Point(0, 0);
			this->labMenu1->Name = L"labMenu1";
			this->labMenu1->Size = System::Drawing::Size(1434, 139);
			this->labMenu1->TabIndex = 0;
			this->labMenu1->Text = L"Главное меню";
			this->labMenu1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// butMenu1
			// 
			this->butMenu1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->butMenu1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butMenu1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMenu1->Location = System::Drawing::Point(328, 180);
			this->butMenu1->Name = L"butMenu1";
			this->butMenu1->Size = System::Drawing::Size(783, 123);
			this->butMenu1->TabIndex = 1;
			this->butMenu1->Text = L"Теоретические сведения";
			this->butMenu1->UseVisualStyleBackColor = false;
			this->butMenu1->Click += gcnew System::EventHandler(this, &MainScreen::butMenu1_Click);
			// 
			// butMenu2
			// 
			this->butMenu2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->butMenu2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butMenu2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMenu2->Location = System::Drawing::Point(328, 326);
			this->butMenu2->Name = L"butMenu2";
			this->butMenu2->Size = System::Drawing::Size(783, 123);
			this->butMenu2->TabIndex = 2;
			this->butMenu2->Text = L"Методы решения";
			this->butMenu2->UseVisualStyleBackColor = false;
			this->butMenu2->Click += gcnew System::EventHandler(this, &MainScreen::butMenu2_Click);
			// 
			// butMenu3
			// 
			this->butMenu3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->butMenu3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butMenu3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMenu3->Location = System::Drawing::Point(328, 473);
			this->butMenu3->Name = L"butMenu3";
			this->butMenu3->Size = System::Drawing::Size(783, 123);
			this->butMenu3->TabIndex = 3;
			this->butMenu3->Text = L"Тренажёр";
			this->butMenu3->UseVisualStyleBackColor = false;
			this->butMenu3->Click += gcnew System::EventHandler(this, &MainScreen::butMenu3_Click);
			// 
			// butMenu4
			// 
			this->butMenu4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->butMenu4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butMenu4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMenu4->Location = System::Drawing::Point(328, 621);
			this->butMenu4->Name = L"butMenu4";
			this->butMenu4->Size = System::Drawing::Size(783, 123);
			this->butMenu4->TabIndex = 4;
			this->butMenu4->Text = L"Решатель";
			this->butMenu4->UseVisualStyleBackColor = false;
			this->butMenu4->Click += gcnew System::EventHandler(this, &MainScreen::butMenu4_Click);
			// 
			// butMenu5
			// 
			this->butMenu5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->butMenu5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butMenu5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMenu5->ForeColor = System::Drawing::Color::DarkRed;
			this->butMenu5->Location = System::Drawing::Point(328, 770);
			this->butMenu5->Name = L"butMenu5";
			this->butMenu5->Size = System::Drawing::Size(783, 123);
			this->butMenu5->TabIndex = 5;
			this->butMenu5->Text = L"Завершить программу";
			this->butMenu5->UseVisualStyleBackColor = false;
			this->butMenu5->Click += gcnew System::EventHandler(this, &MainScreen::butMenu5_Click);
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->butMenu5);
			this->Controls->Add(this->butMenu4);
			this->Controls->Add(this->butMenu3);
			this->Controls->Add(this->butMenu2);
			this->Controls->Add(this->butMenu1);
			this->Controls->Add(this->labMenu1);
			this->Name = L"MainScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainScreen";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void butMenu5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void butMenu1_Click(System::Object^ sender, System::EventArgs^ e) {
	Theory^ thr = gcnew Theory();
	thr->Show();
}
private: System::Void butMenu2_Click(System::Object^ sender, System::EventArgs^ e) {
	Methods^ mth = gcnew Methods();
	mth->Show();
}
private: System::Void butMenu3_Click(System::Object^ sender, System::EventArgs^ e) {
	Training^ tr = gcnew Training();
	tr->Show();
}
private: System::Void butMenu4_Click(System::Object^ sender, System::EventArgs^ e) {
	Reshatel^ rsh = gcnew Reshatel();
	rsh->Show();
}
};
}
