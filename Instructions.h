#pragma once
#include "MainScreen.h"
namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Instructions
	/// </summary>
	public ref class Instructions : public System::Windows::Forms::Form
	{
	public:
		Instructions(void)
		{
			InitializeComponent();

		}

	protected:

		~Instructions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labInstr;
	private: System::Windows::Forms::Label^ labInstr2;
	private: System::Windows::Forms::Label^ labInstr3;
	private: System::Windows::Forms::Button^ butInstr2;

	private: System::Windows::Forms::Button^ butInstr1;
	private: System::Windows::Forms::Label^ labInstr4;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Instructions::typeid));
			this->labInstr = (gcnew System::Windows::Forms::Label());
			this->labInstr2 = (gcnew System::Windows::Forms::Label());
			this->labInstr3 = (gcnew System::Windows::Forms::Label());
			this->butInstr2 = (gcnew System::Windows::Forms::Button());
			this->butInstr1 = (gcnew System::Windows::Forms::Button());
			this->labInstr4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labInstr
			// 
			this->labInstr->BackColor = System::Drawing::Color::Transparent;
			this->labInstr->Dock = System::Windows::Forms::DockStyle::Top;
			this->labInstr->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labInstr->Location = System::Drawing::Point(0, 0);
			this->labInstr->Name = L"labInstr";
			this->labInstr->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labInstr->Size = System::Drawing::Size(1434, 104);
			this->labInstr->TabIndex = 0;
			this->labInstr->Text = L"Инструкция по эксплуатации программы \"Решатель\"";
			this->labInstr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labInstr2
			// 
			this->labInstr2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->labInstr2->Dock = System::Windows::Forms::DockStyle::Top;
			this->labInstr2->Location = System::Drawing::Point(0, 104);
			this->labInstr2->Name = L"labInstr2";
			this->labInstr2->Size = System::Drawing::Size(1434, 18);
			this->labInstr2->TabIndex = 1;
			// 
			// labInstr3
			// 
			this->labInstr3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labInstr3->AutoEllipsis = true;
			this->labInstr3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->labInstr3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labInstr3->Location = System::Drawing::Point(103, 132);
			this->labInstr3->Name = L"labInstr3";
			this->labInstr3->Size = System::Drawing::Size(1213, 48);
			this->labInstr3->TabIndex = 2;
			this->labInstr3->Text = L"Список действий, которые Вы сможете совершить в программе после перехода в главно"
				L"е меню:";
			this->labInstr3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// butInstr2
			// 
			this->butInstr2->AutoSize = true;
			this->butInstr2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butInstr2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butInstr2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butInstr2->ForeColor = System::Drawing::Color::DarkRed;
			this->butInstr2->Location = System::Drawing::Point(0, 881);
			this->butInstr2->Name = L"butInstr2";
			this->butInstr2->Size = System::Drawing::Size(1434, 80);
			this->butInstr2->TabIndex = 3;
			this->butInstr2->Text = L"Завершить программу";
			this->butInstr2->UseVisualStyleBackColor = false;
			this->butInstr2->Click += gcnew System::EventHandler(this, &Instructions::button1_Click);
			// 
			// butInstr1
			// 
			this->butInstr1->AutoSize = true;
			this->butInstr1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butInstr1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butInstr1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butInstr1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->butInstr1->Location = System::Drawing::Point(0, 801);
			this->butInstr1->Name = L"butInstr1";
			this->butInstr1->Size = System::Drawing::Size(1434, 80);
			this->butInstr1->TabIndex = 4;
			this->butInstr1->Text = L"Перейти в главное меню";
			this->butInstr1->UseVisualStyleBackColor = false;
			this->butInstr1->Click += gcnew System::EventHandler(this, &Instructions::butInstr1_Click);
			// 
			// labInstr4
			// 
			this->labInstr4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labInstr4->BackColor = System::Drawing::Color::Transparent;
			this->labInstr4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labInstr4->Location = System::Drawing::Point(12, 180);
			this->labInstr4->Name = L"labInstr4";
			this->labInstr4->Size = System::Drawing::Size(1410, 618);
			this->labInstr4->TabIndex = 5;
			this->labInstr4->Text = resources->GetString(L"labInstr4.Text");
			this->labInstr4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Instructions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->labInstr4);
			this->Controls->Add(this->butInstr1);
			this->Controls->Add(this->butInstr2);
			this->Controls->Add(this->labInstr3);
			this->Controls->Add(this->labInstr2);
			this->Controls->Add(this->labInstr);
			this->Name = L"Instructions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Instructions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void butInstr1_Click(System::Object^ sender, System::EventArgs^ e) {
	MainScreen^ main = gcnew MainScreen();
	main->Show();
	this->Hide();
}
};
}
