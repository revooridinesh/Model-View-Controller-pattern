#pragma once
#include "Graph.h"
#include "Edit_Window.h"

namespace ModelViewController_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  plot_button;
	private: System::Windows::Forms::Button^  edit_button;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plot_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(127, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Model View Controller";
			// 
			// plot_button
			// 
			this->plot_button->Location = System::Drawing::Point(26, 197);
			this->plot_button->Name = L"plot_button";
			this->plot_button->Size = System::Drawing::Size(75, 23);
			this->plot_button->TabIndex = 1;
			this->plot_button->Text = L"PLOT";
			this->plot_button->UseVisualStyleBackColor = true;
			this->plot_button->Click += gcnew System::EventHandler(this, &MyForm::plot_button_Click);
			// 
			// edit_button
			// 
			this->edit_button->Location = System::Drawing::Point(306, 197);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(75, 23);
			this->edit_button->TabIndex = 2;
			this->edit_button->Text = L"EDIT";
			this->edit_button->UseVisualStyleBackColor = true;
			this->edit_button->Click += gcnew System::EventHandler(this, &MyForm::edit_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 365);
			this->Controls->Add(this->edit_button);
			this->Controls->Add(this->plot_button);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Model View Controller";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_button_Click(System::Object^  sender, System::EventArgs^  e) {

				 Edit_Window^ Edit = gcnew Edit_Window();
				 Edit->ShowDialog(); 

	}
	private: System::Void plot_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Graph^ plot = gcnew Graph();
				 plot->ShowDialog();
	}
	};
}
