#pragma once
#include "Sort.h"
#include <msclr\marshal_cppstd.h>

namespace OcheredForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int size;
	string str;
	int flag=0;
	int* mem;
	Sort A(mem, size);
	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextInput;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonRun;
	private: System::Windows::Forms::Button^ buttonStep;
	private: System::Windows::Forms::Label^ Res;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonNext;

	private: System::Windows::Forms::DataGridView^ dataOchered;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->TextInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonRun = (gcnew System::Windows::Forms::Button());
			this->buttonStep = (gcnew System::Windows::Forms::Button());
			this->Res = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->dataOchered = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataOchered))->BeginInit();
			this->SuspendLayout();
			// 
			// TextInput
			// 
			this->TextInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextInput->Location = System::Drawing::Point(440, 25);
			this->TextInput->Name = L"TextInput";
			this->TextInput->Size = System::Drawing::Size(391, 29);
			this->TextInput->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(133, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¬веди элементы через пробел";
			// 
			// buttonRun
			// 
			this->buttonRun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRun->Location = System::Drawing::Point(368, 87);
			this->buttonRun->Name = L"buttonRun";
			this->buttonRun->Size = System::Drawing::Size(75, 38);
			this->buttonRun->TabIndex = 2;
			this->buttonRun->Text = L"Run";
			this->buttonRun->UseVisualStyleBackColor = true;
			this->buttonRun->Click += gcnew System::EventHandler(this, &MyForm::buttonRun_Click);
			// 
			// buttonStep
			// 
			this->buttonStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStep->Location = System::Drawing::Point(578, 87);
			this->buttonStep->Name = L"buttonStep";
			this->buttonStep->Size = System::Drawing::Size(75, 38);
			this->buttonStep->TabIndex = 3;
			this->buttonStep->Text = L"Steps";
			this->buttonStep->UseVisualStyleBackColor = true;
			this->buttonStep->Click += gcnew System::EventHandler(this, &MyForm::buttonStep_Click);
			// 
			// Res
			// 
			this->Res->AutoSize = true;
			this->Res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Res->Location = System::Drawing::Point(132, 209);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(77, 25);
			this->Res->TabIndex = 4;
			this->Res->Text = L"ќтвет:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(511, 266);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ќчереди:";
			this->label3->Visible = false;
			// 
			// buttonNext
			// 
			this->buttonNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNext->Location = System::Drawing::Point(49, 249);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(110, 38);
			this->buttonNext->TabIndex = 7;
			this->buttonNext->Text = L"Next step";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Visible = false;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::buttonNext_Click);
			// 
			// dataOchered
			// 
			this->dataOchered->AllowUserToAddRows = false;
			this->dataOchered->AllowUserToDeleteRows = false;
			this->dataOchered->AllowUserToResizeColumns = false;
			this->dataOchered->AllowUserToResizeRows = false;
			this->dataOchered->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataOchered->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataOchered->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataOchered->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataOchered->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataOchered->ColumnHeadersVisible = false;
			this->dataOchered->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataOchered->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataOchered->GridColor = System::Drawing::SystemColors::Desktop;
			this->dataOchered->Location = System::Drawing::Point(49, 291);
			this->dataOchered->Name = L"dataOchered";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataOchered->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataOchered->RowHeadersVisible = false;
			this->dataOchered->RowHeadersWidth = 4;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->dataOchered->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataOchered->Size = System::Drawing::Size(1030, 688);
			this->dataOchered->TabIndex = 8;
			this->dataOchered->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 991);
			this->Controls->Add(this->dataOchered);
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->buttonStep);
			this->Controls->Add(this->buttonRun);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TextInput);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataOchered))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void rasdel(string str, int& k, int* w) {
			k = 0;
			str = str + " ";
			while (str.length() > 0) {
				int l = str.find(" ");
				if (l > 0) {
					w[k++] = stoi(str.substr(0, l));
				}
				str.erase(0, l + 1);
			}
		}
		void cleardataGrid(int size) {
			if (size > 0) {
				dataOchered->RowCount = 0;
				dataOchered->ColumnCount = 0;
				dataOchered->RowTemplate->Height = 687 / (size+1);
				dataOchered->RowCount = size+1;
				dataOchered->ColumnCount = 10;
			}
		}
	private: System::Void buttonRun_Click(System::Object^ sender, System::EventArgs^ e) {
		size = 0;
		int* mem=new int[100];
		int* res;
		str = msclr::interop::marshal_as<std::string>(TextInput->Text);
		rasdel(str, size, mem);
		Sort A(mem, size);
		A.allStep();
		res = A.GetMem();
		str = "";
		for (int i = 0; i < size; i++) {
			str += to_string(res[i])+" ";
		}
		Res->Text = "ќтвет: " + gcnew String(str.c_str());
	}


private: System::Void buttonStep_Click(System::Object^ sender, System::EventArgs^ e) {

	buttonNext->Visible = TRUE;
	dataOchered->Visible = TRUE;
	label3->Visible = TRUE;
	size = 0;
	flag = 0;
	int* mem = new int[100];
	str = msclr::interop::marshal_as<std::string>(TextInput->Text);
	rasdel(str, size, mem);
	A = Sort(mem, size);
	cleardataGrid(size);
	for (int i = 0; i < 10; i++) {
		dataOchered->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
	}
}
private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flag % 2 == 0) {
		cleardataGrid(size);
		for (int i = 0; i < 10; i++) {
			dataOchered->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
		}
		A.step1(flag/2);
		flag++;
		Ochered tmp;
		for (int i = 0; i < 10; i++) {
			tmp = A.GetOchered(i);
			int j = 1;
			while (!tmp.is_empty()) {
				str = to_string(tmp.pop());
				dataOchered->Rows[j++]->Cells[i]->Value = gcnew String(str.c_str());
			}
		}
	}
	else {
		cleardataGrid(size);
		for (int i = 0; i < 10; i++) {
			dataOchered->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
		}
		A.step2();
		str = "";
		int* mem = A.GetMem();
		for (int i = 0; i < size; i++) {
			str += to_string(mem[i]) + " ";
		}
		Res->Text = "ќтвет: " + gcnew String(str.c_str());
		flag++;
	}
}
};
}
