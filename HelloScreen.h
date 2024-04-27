#include "Instructions.h"
#include "MainScreen.h"
namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HelloScreen : public System::Windows::Forms::Form
	{
	public:
		HelloScreen(void)
		{
			InitializeComponent();
		}

	protected:

		~HelloScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labHello1;
	private: System::Windows::Forms::Label^ labHello2;
	private: System::Windows::Forms::Label^ labHello3;
	private: System::Windows::Forms::Button^ butHello3;
	private: System::Windows::Forms::Button^ butHello2;
	private: System::Windows::Forms::Button^ butHello1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelloScreen::typeid));
			this->labHello1 = (gcnew System::Windows::Forms::Label());
			this->labHello2 = (gcnew System::Windows::Forms::Label());
			this->labHello3 = (gcnew System::Windows::Forms::Label());
			this->butHello3 = (gcnew System::Windows::Forms::Button());
			this->butHello2 = (gcnew System::Windows::Forms::Button());
			this->butHello1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labHello1
			// 
			this->labHello1->BackColor = System::Drawing::Color::Transparent;
			this->labHello1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labHello1->Dock = System::Windows::Forms::DockStyle::Top;
			this->labHello1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHello1->Location = System::Drawing::Point(0, 0);
			this->labHello1->Name = L"labHello1";
			this->labHello1->Size = System::Drawing::Size(1434, 201);
			this->labHello1->TabIndex = 0;
			this->labHello1->Text = L"Приветствую!\r\nВы запустили программу \"Решатель\"!";
			this->labHello1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labHello2
			// 
			this->labHello2->BackColor = System::Drawing::Color::Transparent;
			this->labHello2->Dock = System::Windows::Forms::DockStyle::Top;
			this->labHello2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHello2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->labHello2->Location = System::Drawing::Point(0, 201);
			this->labHello2->Name = L"labHello2";
			this->labHello2->Size = System::Drawing::Size(1434, 201);
			this->labHello2->TabIndex = 1;
			this->labHello2->Text = L"Эта программа создана для изучения \r\nи решения квадратных уравнений.";
			this->labHello2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labHello3
			// 
			this->labHello3->BackColor = System::Drawing::Color::Transparent;
			this->labHello3->Dock = System::Windows::Forms::DockStyle::Top;
			this->labHello3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHello3->ForeColor = System::Drawing::Color::Maroon;
			this->labHello3->Location = System::Drawing::Point(0, 402);
			this->labHello3->Name = L"labHello3";
			this->labHello3->Size = System::Drawing::Size(1434, 153);
			this->labHello3->TabIndex = 2;
			this->labHello3->Text = L"Перед использованием программы рекомендуется\r\n ознакомиться с инструкцией.";
			this->labHello3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// butHello3
			// 
			this->butHello3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butHello3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butHello3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butHello3->ForeColor = System::Drawing::Color::DarkRed;
			this->butHello3->Location = System::Drawing::Point(0, 861);
			this->butHello3->Name = L"butHello3";
			this->butHello3->Size = System::Drawing::Size(1434, 100);
			this->butHello3->TabIndex = 3;
			this->butHello3->Text = L"Завершить программу";
			this->butHello3->UseVisualStyleBackColor = false;
			this->butHello3->Click += gcnew System::EventHandler(this, &HelloScreen::butHello3_Click);
			// 
			// butHello2
			// 
			this->butHello2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butHello2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butHello2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butHello2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->butHello2->Location = System::Drawing::Point(0, 761);
			this->butHello2->Name = L"butHello2";
			this->butHello2->Size = System::Drawing::Size(1434, 100);
			this->butHello2->TabIndex = 4;
			this->butHello2->Text = L"Перейти в главное меню";
			this->butHello2->UseVisualStyleBackColor = false;
			this->butHello2->Click += gcnew System::EventHandler(this, &HelloScreen::butHello2_Click);
			// 
			// butHello1
			// 
			this->butHello1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butHello1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butHello1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butHello1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->butHello1->Location = System::Drawing::Point(0, 661);
			this->butHello1->Name = L"butHello1";
			this->butHello1->Size = System::Drawing::Size(1434, 100);
			this->butHello1->TabIndex = 5;
			this->butHello1->Text = L"Инструкция";
			this->butHello1->UseVisualStyleBackColor = false;
			this->butHello1->Click += gcnew System::EventHandler(this, &HelloScreen::butHello1_Click);
			// 
			// HelloScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->butHello1);
			this->Controls->Add(this->butHello2);
			this->Controls->Add(this->butHello3);
			this->Controls->Add(this->labHello3);
			this->Controls->Add(this->labHello2);
			this->Controls->Add(this->labHello1);
			this->Name = L"HelloScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HelloScreen";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void butHello3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void butHello1_Click(System::Object^ sender, System::EventArgs^ e) {
	Instructions^ instr = gcnew Instructions();
	instr->Show();
	this->Hide();
}
private: System::Void butHello2_Click(System::Object^ sender, System::EventArgs^ e) {
	MainScreen^ main = gcnew MainScreen();
	main->Show();
	this->Hide();
}
};
}
