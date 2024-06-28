#pragma once

namespace klava {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(122, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"вы кликнули:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 253);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label2->Text = Convert::ToString(e->X);
		this->label4->Text = Convert::ToString(e->Y);

	}
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label6->Text = Convert::ToString(e->Button);
	if (Convert::ToString(e->Button) == "Left")
		label6->Text = "Левой";
	if (Convert::ToString(e->Button) == "Right")
		label6->Text = "Правой";
	if (Convert::ToString(e->Button) == "Middle")
		label6->Text = "Колёсиком";

}
};
}
