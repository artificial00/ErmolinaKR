#pragma once

namespace ErmolinaKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Theory : public System::Windows::Forms::Form
	{
	public:
		Theory(void)
		{
			InitializeComponent();

		}

	protected:

		~Theory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labTheory1;
	private: System::Windows::Forms::Label^ labTheory2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Theory::typeid));
			this->labTheory1 = (gcnew System::Windows::Forms::Label());
			this->labTheory2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labTheory1
			// 
			this->labTheory1->Dock = System::Windows::Forms::DockStyle::Top;
			this->labTheory1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labTheory1->Location = System::Drawing::Point(0, 0);
			this->labTheory1->Name = L"labTheory1";
			this->labTheory1->Size = System::Drawing::Size(1434, 64);
			this->labTheory1->TabIndex = 0;
			this->labTheory1->Text = L"Теоретические сведения о квадратных уравнениях";
			this->labTheory1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labTheory2
			// 
			this->labTheory2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labTheory2->BackColor = System::Drawing::Color::LavenderBlush;
			this->labTheory2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labTheory2->ForeColor = System::Drawing::Color::Maroon;
			this->labTheory2->Location = System::Drawing::Point(33, 82);
			this->labTheory2->Name = L"labTheory2";
			this->labTheory2->Size = System::Drawing::Size(1115, 43);
			this->labTheory2->TabIndex = 1;
			this->labTheory2->Text = L"Квадратное уравнение — это алгебраическое уравнение второй степени. Его общий вид"
				L":";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(38, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1384, 34);
			this->label2->TabIndex = 4;
			this->label2->Text = L"В зависимости от значений, которые могут принимать коэффициенты, можно выделить в"
				L"осемь типов уравнений:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::Lavender;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(69, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 38);
			this->label3->TabIndex = 5;
			this->label3->Text = L"1.   0 = 0";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::Lavender;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(69, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 38);
			this->label4->TabIndex = 6;
			this->label4->Text = L"2.   c = 0";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::Color::Lavender;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(69, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(223, 38);
			this->label5->TabIndex = 7;
			this->label5->Text = L"3.   ax^2 + bx + c = 0";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::Color::Lavender;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(69, 415);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(223, 38);
			this->label6->TabIndex = 8;
			this->label6->Text = L"4.   ax^2 + bx = 0";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->BackColor = System::Drawing::Color::Lavender;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(69, 490);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 38);
			this->label7->TabIndex = 9;
			this->label7->Text = L"5.   ax^2 + c = 0";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->BackColor = System::Drawing::Color::Lavender;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(69, 564);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(223, 38);
			this->label8->TabIndex = 10;
			this->label8->Text = L"6.   ax^2 = 0";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->BackColor = System::Drawing::Color::Lavender;
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(69, 637);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(223, 38);
			this->label9->TabIndex = 11;
			this->label9->Text = L"7.   bx + c = 0";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->BackColor = System::Drawing::Color::Lavender;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(69, 711);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(223, 38);
			this->label10->TabIndex = 12;
			this->label10->Text = L"8.   bx = 0";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(0, 861);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(1434, 100);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Назад в главное меню";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Theory::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(324, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(935, 36);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Коэффициенты a, b, c равны нулю. Решение: x - любое число.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(324, 270);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(935, 36);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Коэффициенты a, b  равны нулю, c - число. Решений нет, так как уравнение некоррек"
				L"тно.";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(324, 342);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1012, 36);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Классическое квадратное уравнение со всеми коэффициентами. В решении может быть 0"
				L", 1 или 2 корня.";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(324, 417);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1012, 36);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Коэффициенты a, b заданы, c равно нулю. Выносим x за скобку: x(ax + b) = 0. В реш"
				L"ении 2 корня: 0 и -b/a.";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(324, 489);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1110, 36);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Коэффициенты a, c заданы, b равно нулю. Если -c/a >= 0, то решения 2: x = +- коре"
				L"нь из -c/a. Если -c/a < 0: корней нет. ";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(324, 564);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(935, 36);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Коэффициенты b, c равны нулю, a - число. Единственное решение: x = 0.";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(324, 637);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(963, 36);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Коэффициенты b, c заданы, a равно нулю. Теперь это уравнение первой степени. Реше"
				L"ние: x = -c/b.";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(324, 711);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(935, 36);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Коэффициенты a, c равны нулю, b - число. Единственное решение: x = 0.";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->BackColor = System::Drawing::Color::Lavender;
			this->label18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label18.Image")));
			this->label18->Location = System::Drawing::Point(1163, 82);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(241, 43);
			this->label18->TabIndex = 23;
			// 
			// Theory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1434, 961);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labTheory2);
			this->Controls->Add(this->labTheory1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Theory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Theory";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}

};
}
