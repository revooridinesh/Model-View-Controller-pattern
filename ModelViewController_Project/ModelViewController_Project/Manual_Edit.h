#pragma once

namespace ModelViewController_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Manual_Edit
	/// </summary>
	public ref class Manual_Edit : public System::Windows::Forms::Form
	{
	public:
		Manual_Edit(void)
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
		~Manual_Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Load_Button;
	protected:
	private: System::Windows::Forms::Button^  Search_button;
	private: System::Windows::Forms::Button^  Save_Button;
	private: System::Windows::Forms::TextBox^  URL_Text;
	private: System::Windows::Forms::TextBox^  Search_Text;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

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
			this->Load_Button = (gcnew System::Windows::Forms::Button());
			this->Search_button = (gcnew System::Windows::Forms::Button());
			this->Save_Button = (gcnew System::Windows::Forms::Button());
			this->URL_Text = (gcnew System::Windows::Forms::TextBox());
			this->Search_Text = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// Load_Button
			// 
			this->Load_Button->Location = System::Drawing::Point(12, 22);
			this->Load_Button->Name = L"Load_Button";
			this->Load_Button->Size = System::Drawing::Size(75, 23);
			this->Load_Button->TabIndex = 0;
			this->Load_Button->Text = L"LOAD";
			this->Load_Button->UseVisualStyleBackColor = true;
			this->Load_Button->Click += gcnew System::EventHandler(this, &Manual_Edit::Load_Button_Click);
			// 
			// Search_button
			// 
			this->Search_button->Location = System::Drawing::Point(12, 123);
			this->Search_button->Name = L"Search_button";
			this->Search_button->Size = System::Drawing::Size(75, 23);
			this->Search_button->TabIndex = 1;
			this->Search_button->Text = L"Search";
			this->Search_button->UseVisualStyleBackColor = true;
			this->Search_button->Click += gcnew System::EventHandler(this, &Manual_Edit::Search_button_Click);
			// 
			// Save_Button
			// 
			this->Save_Button->Location = System::Drawing::Point(12, 203);
			this->Save_Button->Name = L"Save_Button";
			this->Save_Button->Size = System::Drawing::Size(75, 23);
			this->Save_Button->TabIndex = 2;
			this->Save_Button->Text = L"Save As";
			this->Save_Button->UseVisualStyleBackColor = true;
			this->Save_Button->Click += gcnew System::EventHandler(this, &Manual_Edit::Save_Button_Click);
			// 
			// URL_Text
			// 
			this->URL_Text->Location = System::Drawing::Point(110, 25);
			this->URL_Text->Name = L"URL_Text";
			this->URL_Text->Size = System::Drawing::Size(334, 20);
			this->URL_Text->TabIndex = 3;
			// 
			// Search_Text
			// 
			this->Search_Text->Location = System::Drawing::Point(41, 97);
			this->Search_Text->Name = L"Search_Text";
			this->Search_Text->Size = System::Drawing::Size(100, 20);
			this->Search_Text->TabIndex = 4;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(164, 61);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 483);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// Manual_Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 556);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Search_Text);
			this->Controls->Add(this->URL_Text);
			this->Controls->Add(this->Save_Button);
			this->Controls->Add(this->Search_button);
			this->Controls->Add(this->Load_Button);
			this->Name = L"Manual_Edit";
			this->Text = L"Manual_Edit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ strfilename;
	private: System::Void Load_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				 OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
					 URL_Text->Text = strfilename;
				 }
				 else
				 {
					 MessageBox::Show("Invalid/No File Selected");
				 }
				 String^ text;
				 text = File::ReadAllText(strfilename);
				 richTextBox1->Text = text;

	}
private: System::Void Search_button_Click(System::Object^  sender, System::EventArgs^  e) {

			 int index = 0;
			 int var = 0;
			 String^ temp = richTextBox1->Text;
			 richTextBox1->Text = "";
			 richTextBox1->Text = temp;
			 while (index < richTextBox1->Text->LastIndexOf(Search_Text->Text))
			 {

				 richTextBox1->Find(Search_Text->Text, index, richTextBox1->TextLength, RichTextBoxFinds::None);
				 richTextBox1->SelectionBackColor = Color::Red;
				 index = richTextBox1->Text->IndexOf(Search_Text->Text, index) + 1;
				 var++;
			 }

			 if (!var)
			 {
				 MessageBox::Show("NO Match Found");
			 }

}
private: System::Void Save_Button_Click(System::Object^  sender, System::EventArgs^  e) {

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->ShowDialog();
			 saveFileDialog1->Filter = L"Comma-Seperated Values (*.csv)|*.csv|"
				 L"Text File (*.txt)|*.txt|"
				 L"All Files|";
			 saveFileDialog1->FilterIndex = 3;
			 saveFileDialog1->DefaultExt = L"csv";
			 StreamWriter^ swa = gcnew StreamWriter(saveFileDialog1->FileName);
			 swa->Write(richTextBox1->Text);
			 swa->Close();
			 MessageBox::Show("File Saved");

}
};
}
