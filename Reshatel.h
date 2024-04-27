#pragma once

#include <math.h>
namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Reshatel : public System::Windows::Forms::Form
	{
	public:
		Reshatel(void)
		{
			InitializeComponent();
		
		}

	protected:

		~Reshatel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ butReady;
	private: System::Windows::Forms::Label^ labErr;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ boxA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ boxB;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ boxC;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ labType;
	private: System::Windows::Forms::Label^ labUravn;
	private: System::Windows::Forms::Label^ labAl1;
	private: System::Windows::Forms::Label^ labOtv1;
	private: System::Windows::Forms::Label^ labAl2;
	private: System::Windows::Forms::Label^ labOtv2;

	private: 

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reshatel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->butReady = (gcnew System::Windows::Forms::Button());
			this->labErr = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->boxA = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->boxB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->boxC = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labType = (gcnew System::Windows::Forms::Label());
			this->labUravn = (gcnew System::Windows::Forms::Label());
			this->labAl1 = (gcnew System::Windows::Forms::Label());
			this->labOtv1 = (gcnew System::Windows::Forms::Label());
			this->labAl2 = (gcnew System::Windows::Forms::Label());
			this->labOtv2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1434, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Решатель для квадратных уравнений";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->button1->TabIndex = 1;
			this->button1->Text = L"Назад в главное меню";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reshatel::button1_Click);
			// 
			// butReady
			// 
			this->butReady->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butReady->BackColor = System::Drawing::Color::LightSteelBlue;
			this->butReady->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butReady->Location = System::Drawing::Point(1237, 313);
			this->butReady->Name = L"butReady";
			this->butReady->Size = System::Drawing::Size(148, 61);
			this->butReady->TabIndex = 38;
			this->butReady->Text = L"Готово";
			this->butReady->UseVisualStyleBackColor = false;
			this->butReady->Click += gcnew System::EventHandler(this, &Reshatel::butReady_Click);
			// 
			// labErr
			// 
			this->labErr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labErr->BackColor = System::Drawing::Color::Transparent;
			this->labErr->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labErr->ForeColor = System::Drawing::Color::Maroon;
			this->labErr->Location = System::Drawing::Point(413, 394);
			this->labErr->Name = L"labErr";
			this->labErr->Size = System::Drawing::Size(577, 51);
			this->labErr->TabIndex = 37;
			this->labErr->Text = L"Ваш ввод некорректен! Повторите попытку.";
			this->labErr->Visible = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(53, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 51);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Коэффициент a:";
			// 
			// boxA
			// 
			this->boxA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->boxA->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->boxA->Location = System::Drawing::Point(302, 327);
			this->boxA->Name = L"boxA";
			this->boxA->Size = System::Drawing::Size(79, 34);
			this->boxA->TabIndex = 33;
			this->boxA->TextChanged += gcnew System::EventHandler(this, &Reshatel::boxA_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(185, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1076, 51);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Введите коэффициенты уравнения, которое необходимо решить:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(444, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 51);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Коэффициент b:";
			// 
			// boxB
			// 
			this->boxB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->boxB->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->boxB->Location = System::Drawing::Point(695, 327);
			this->boxB->Name = L"boxB";
			this->boxB->Size = System::Drawing::Size(80, 34);
			this->boxB->TabIndex = 43;
			this->boxB->TextChanged += gcnew System::EventHandler(this, &Reshatel::boxB_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(856, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 51);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Коэффициент c:";
			// 
			// boxC
			// 
			this->boxC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->boxC->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->boxC->Location = System::Drawing::Point(1104, 327);
			this->boxC->Name = L"boxC";
			this->boxC->Size = System::Drawing::Size(72, 34);
			this->boxC->TabIndex = 45;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(87, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1248, 98);
			this->label6->TabIndex = 47;
			this->label6->Text = L"Формат ввода: если коэффициент отсутствует, то в поле значения необходимо внести "
				L"0; если коэффициент дробный, то запишите его в формате десятичной дроби через то"
				L"чку (например 0.5).";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(53, 482);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(317, 51);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Ваше уравнение:";
			// 
			// labType
			// 
			this->labType->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labType->BackColor = System::Drawing::Color::Transparent;
			this->labType->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labType->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labType->Location = System::Drawing::Point(929, 459);
			this->labType->Name = L"labType";
			this->labType->Size = System::Drawing::Size(456, 90);
			this->labType->TabIndex = 50;
			this->labType->Visible = false;
			// 
			// labUravn
			// 
			this->labUravn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labUravn->BackColor = System::Drawing::Color::Lavender;
			this->labUravn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labUravn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labUravn->Location = System::Drawing::Point(430, 459);
			this->labUravn->Name = L"labUravn";
			this->labUravn->Size = System::Drawing::Size(493, 90);
			this->labUravn->TabIndex = 49;
			this->labUravn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labAl1
			// 
			this->labAl1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAl1->BackColor = System::Drawing::Color::Transparent;
			this->labAl1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labAl1->Location = System::Drawing::Point(53, 573);
			this->labAl1->Name = L"labAl1";
			this->labAl1->Size = System::Drawing::Size(275, 48);
			this->labAl1->TabIndex = 51;
			this->labAl1->Text = L"Алгоритм решения:";
			this->labAl1->Visible = false;
			// 
			// labOtv1
			// 
			this->labOtv1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labOtv1->BackColor = System::Drawing::Color::Transparent;
			this->labOtv1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labOtv1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labOtv1->Location = System::Drawing::Point(1159, 583);
			this->labOtv1->Name = L"labOtv1";
			this->labOtv1->Size = System::Drawing::Size(226, 38);
			this->labOtv1->TabIndex = 52;
			this->labOtv1->Text = L"Ответ:";
			this->labOtv1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labOtv1->Visible = false;
			// 
			// labAl2
			// 
			this->labAl2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labAl2->BackColor = System::Drawing::Color::Transparent;
			this->labAl2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAl2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labAl2->Location = System::Drawing::Point(53, 630);
			this->labAl2->Name = L"labAl2";
			this->labAl2->Size = System::Drawing::Size(1050, 235);
			this->labAl2->TabIndex = 53;
			this->labAl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labAl2->Visible = false;
			// 
			// labOtv2
			// 
			this->labOtv2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labOtv2->BackColor = System::Drawing::Color::Transparent;
			this->labOtv2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labOtv2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labOtv2->Location = System::Drawing::Point(1159, 667);
			this->labOtv2->Name = L"labOtv2";
			this->labOtv2->Size = System::Drawing::Size(226, 187);
			this->labOtv2->TabIndex = 54;
			this->labOtv2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labOtv2->Visible = false;
			// 
			// Reshatel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->labOtv2);
			this->Controls->Add(this->labAl2);
			this->Controls->Add(this->labOtv1);
			this->Controls->Add(this->labAl1);
			this->Controls->Add(this->labType);
			this->Controls->Add(this->labUravn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->boxC);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->boxB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->butReady);
			this->Controls->Add(this->labErr);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->boxA);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Reshatel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reshatel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	double a, b, c;
	int type;
	

private: System::Void boxA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(boxA->Text, a);
}
private: System::Void boxB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(boxB->Text, b);
}
private: System::Void boxC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(boxC->Text, c);
}
private: System::Void butReady_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Double::TryParse(boxA->Text, a) || !Double::TryParse(boxB->Text, b) || !Double::TryParse(boxC->Text, c)) {

		this->labErr->Show();
	}
	else {
		this->labErr->Hide();
		if (a == 0 && b == 0 && c == 0) {
			this->labType->Text = "Тип уравнения: 0 = 0";
			this->labType->Show();
			this->labUravn->Text = "0 = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Коэффициенты a, b, c равны нулю, а значит x может быть любым.";
			this->labOtv2->Text = "x - любой";
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a == 0 && b == 0 && c != 0) {
			this->labType->Text = "Тип уравнения: c = 0";
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(c) + " = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Задан только коэффициент c. Такое уравнение не имеет корней и является неверным";
			this->labOtv2->Text = "корней нет";
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a != 0 && b != 0 && c != 0) {
			this->labType->Text = "Тип уравнения: ax^2 + bx + c = 0";
			this->labType->Show();
			double discr = round((b*b - (4*a*c))*1000)/1000;
			this->labUravn->Text = Convert::ToString(a) + "x^2 + " + Convert::ToString(b) + "x + " + Convert::ToString(c) + " = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Сначала найдём дискриминант: D = b^2 - 4ac. D = " + Convert::ToString(b * b) + " - 4 * " + Convert::ToString(a) + " * " + Convert::ToString(c)+
				" = " + Convert::ToString(discr) + "\n";
			if (discr > 0) {
				this->labAl2->Text += "Так как D > 0, то у нас будет 2 корня: \nx1 = (-b + корень из D) / 2a, x2 = (-b - корень из D) / 2a. Тогда: \n"+
					"x1 = (-(" + Convert::ToString(b) + ") + " + Convert::ToString(round(sqrt(discr) * 1000) / 1000) + " / (2 * (" + Convert::ToString(a) + "))) = " + 
					Convert::ToString(round(((-b + round(sqrt(discr) * 1000) / 1000) / (2 * a)) * 1000) / 1000) +
					"\nx2 = (-(" + Convert::ToString(b) + ") - " + Convert::ToString(round(sqrt(discr) * 1000) / 1000) + " / (2 * (" + Convert::ToString(a) + "))) = " +
					Convert::ToString(round(((-b - round(sqrt(discr) * 1000) / 1000) / (2 * a)) * 1000) / 1000);
				this->labOtv2->Text = "x1 = " + Convert::ToString(round(((-b + round(sqrt(discr) * 1000) / 1000) / (2 * a)) * 1000) / 1000) +
					"\nx2 = " + Convert::ToString(round((( - b - round(sqrt(discr) * 1000) / 1000)/(2*a))*1000)/1000);
			}
			else if (discr == 0) {
				this->labAl2->Text += "Так как D = 0, то корень будет один: x = -b / 2a. Тогда: \n" +
					"x = -(" + Convert::ToString(b) + ") / 2 * (" + Convert::ToString(a) + ") = " + Convert::ToString(round((- b / (2 * a))*1000)/1000);
				this->labOtv2->Text = "x = " + Convert::ToString(round((-b / (2 * a)) * 1000) / 1000);
			}
			else {
				this->labAl2->Text += "Так как D < 0, то корней не существует, ведь невозможно извлечь корень из отрицательного числа.";
				this->labOtv2->Text = "корней нет";
			}
			
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a != 0 && b != 0 && c == 0) {
			this->labType->Text = "Тип уравнения: ax^2 + bx = 0";
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(a) + "x^2 + " + Convert::ToString(b) + "x" + " = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Первым шагом вынесем x за скобки. Получим вид: x(" + Convert::ToString(a) + "x + " + Convert::ToString(b) + ") = 0. " +
				"У нас получилось два множителя, произведение которых равно нулю. Значит, x = 0 и (" + Convert::ToString(a) + "x + " + Convert::ToString(b) + ") = 0. " +
				"Решим второй множитель: " + Convert::ToString(a) + "x = -(" + Convert::ToString(b) +"); x = -(" + Convert::ToString(b) +") / " + Convert::ToString(a)+
				" = " + Convert::ToString(round((- b / a)*1000)/1000);
			this->labOtv2->Text = "x1 = 0, \nx2 = " + Convert::ToString(round((-b / a) * 1000) / 1000);
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a != 0 && b == 0 && c != 0) {
			this->labType->Text = "Тип уравнения: ax^2 + c = 0";
			bool bolsh = 0;
			if ((-c / a) > 0){
				bolsh = 1;
			}
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(a) + "x^2 + " + Convert::ToString(c) + " = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Первым шагом перенесем коэффициент c вправо. Получим вид: " + Convert::ToString(a) + "x ^ 2 = " + "-(" + Convert::ToString(c) +
				"). Теперь возможны 2 ситуации: если - c / a > 0 и - c / a < 0. \n";
			if (bolsh == 0) {
				this->labAl2->Text += "Так как в данном слуачае -(" + Convert::ToString(c) + "/" + Convert::ToString(a) + ") = " + Convert::ToString(round((- c / a)*1000)/1000) + " < 0, " +
					"решений нет, ведь корень из отрицательного числа не может быть извлечён.";
				this->labOtv2->Text = "корней нет";
			}
			else {
				this->labAl2->Text += "Так как в данном слуачае -(" + Convert::ToString(c) + "/" + Convert::ToString(a) + ") = " + Convert::ToString(round((-c / a) * 1000) / 1000) + " > 0, " +
					"решений будет два: +-корень из -(" + Convert::ToString(c) + "/" + Convert::ToString(a)+ ").";
				this->labOtv2->Text = "x1 = " + Convert::ToString(round((sqrt(- c / a))*1000)/1000) + " \nx2 = -(" + Convert::ToString(round((sqrt(-c / a)) * 1000) / 1000) + ")";
			}
			
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a != 0 && b == 0 && c == 0) {
			this->labType->Text = "Тип уравнения: ax^2 = 0";
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(a) + "x^2 = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Коэффициенты b и c равны нулю. Единственным корнем уравнения является 0.";
			this->labOtv2->Text = "x = 0";
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a == 0 && b != 0 && c != 0) {
			this->labType->Text = "Тип уравнения: bx + c = 0";
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(b) + "x + " + Convert::ToString(c) + " = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Для начала перенесем коэффициент c вправо, получим: " + Convert::ToString(b) + "x = -(" + Convert::ToString(c) + 
				 "). Поделим обе части уравнения на b и получим: x = " + Convert::ToString(round((-c / b) * 1000) / 1000);
			this->labOtv2->Text = "x = " + Convert::ToString(round((-c / b) * 1000) / 1000);
			this->labAl2->Show();
			this->labOtv2->Show();
		}
		else if (a == 0 && b != 0 && c == 0) {
			this->labType->Text = "Тип уравнения: bx = 0";
			this->labType->Show();
			this->labUravn->Text = Convert::ToString(b) + "x = 0";
			this->labAl1->Show();
			this->labOtv1->Show();
			this->labAl2->Text = "Коэффициенты a и c равны нулю. Единственным корнем уравнения является 0.";
			this->labOtv2->Text = "x = 0";
			this->labAl2->Show();
			this->labOtv2->Show();
		}

	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}


