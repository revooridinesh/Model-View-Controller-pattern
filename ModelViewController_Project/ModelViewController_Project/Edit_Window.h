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
	/// Summary for Edit_Window
	/// </summary>
	public ref class Edit_Window : public System::Windows::Forms::Form
	{
	public:
		Edit_Window(void)
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
		~Edit_Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Select_File;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  URL_Text;
	private: System::Windows::Forms::Button^  Modify;
	private: System::Windows::Forms::Button^  Add_button;


	private: System::Windows::Forms::TextBox^  Energy_Text;
	private: System::Windows::Forms::TextBox^  Count_Text;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  Delete_Button;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->Select_File = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->URL_Text = (gcnew System::Windows::Forms::TextBox());
			this->Modify = (gcnew System::Windows::Forms::Button());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->Energy_Text = (gcnew System::Windows::Forms::TextBox());
			this->Count_Text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Delete_Button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Select_File
			// 
			this->Select_File->Location = System::Drawing::Point(34, 29);
			this->Select_File->Name = L"Select_File";
			this->Select_File->Size = System::Drawing::Size(75, 28);
			this->Select_File->TabIndex = 0;
			this->Select_File->Text = L"Select File";
			this->Select_File->UseVisualStyleBackColor = true;
			this->Select_File->Click += gcnew System::EventHandler(this, &Edit_Window::Select_File_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter the Energy Value for which you want to change its Count";
			// 
			// URL_Text
			// 
			this->URL_Text->Location = System::Drawing::Point(168, 29);
			this->URL_Text->Multiline = true;
			this->URL_Text->Name = L"URL_Text";
			this->URL_Text->Size = System::Drawing::Size(423, 25);
			this->URL_Text->TabIndex = 2;
			// 
			// Modify
			// 
			this->Modify->Location = System::Drawing::Point(510, 136);
			this->Modify->Name = L"Modify";
			this->Modify->Size = System::Drawing::Size(75, 23);
			this->Modify->TabIndex = 3;
			this->Modify->Text = L"Modify";
			this->Modify->UseVisualStyleBackColor = true;
			this->Modify->Click += gcnew System::EventHandler(this, &Edit_Window::Modify_Click);
			// 
			// Add_button
			// 
			this->Add_button->Location = System::Drawing::Point(459, 228);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(75, 23);
			this->Add_button->TabIndex = 4;
			this->Add_button->Text = L"ADD";
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &Edit_Window::Add_button_Click);
			// 
			// Energy_Text
			// 
			this->Energy_Text->Location = System::Drawing::Point(101, 138);
			this->Energy_Text->Name = L"Energy_Text";
			this->Energy_Text->Size = System::Drawing::Size(100, 20);
			this->Energy_Text->TabIndex = 5;
			// 
			// Count_Text
			// 
			this->Count_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Count_Text->Location = System::Drawing::Point(331, 139);
			this->Count_Text->Name = L"Count_Text";
			this->Count_Text->Size = System::Drawing::Size(100, 20);
			this->Count_Text->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Energy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(263, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Count";
			// 
			// Delete_Button
			// 
			this->Delete_Button->Location = System::Drawing::Point(564, 228);
			this->Delete_Button->Name = L"Delete_Button";
			this->Delete_Button->Size = System::Drawing::Size(75, 23);
			this->Delete_Button->TabIndex = 9;
			this->Delete_Button->Text = L"Delete";
			this->Delete_Button->UseVisualStyleBackColor = true;
			this->Delete_Button->Click += gcnew System::EventHandler(this, &Edit_Window::Delete_Button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 226);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(331, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(2, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(512, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Enter the Energy Value for which you want to Add or Delete Record";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(263, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 15);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Count";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Energy";
			// 
			// Edit_Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 492);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Delete_Button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Count_Text);
			this->Controls->Add(this->Energy_Text);
			this->Controls->Add(this->Add_button);
			this->Controls->Add(this->Modify);
			this->Controls->Add(this->URL_Text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Select_File);
			this->Name = L"Edit_Window";
			this->Text = L"Edit_Window";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ strfilename;
		String^ gedfilename;
		int flag = 0;

	private: System::Void Select_File_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Opens the Open File Dialog box and stores the file location
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
	}
	
	private: System::Void Modify_Click(System::Object^  sender, System::EventArgs^  e) {

				 int Count;
				 int Index;
				 int mod_count = 0;
				 double Energy;
				 String^ edfilename;
				 
				 // Checks whether the user entered any data or not
				 if (Energy_Text->TextLength == 0 || Count_Text->TextLength == 0)
				 {
					 if (URL_Text->TextLength == 0)
						 MessageBox::Show("Select a File by clicking Select File button");
					 else
						 MessageBox::Show("Please Enter Enerygy, Count Values you want to Modify");
				 }

				 else
				 {
					 //Reads data from the text boxes
					 Energy = Convert::ToDouble(Energy_Text->Text);
					 Count = Convert::ToInt16(Count_Text->Text);
					 try
					 {
						 //Checks whether there is any previous update
						 StreamReader^ sr;
						 if (flag == 1)
						 {
							 sr = gcnew StreamReader(gedfilename);
						 }
						 else
						 {

							 sr = gcnew StreamReader(strfilename);
						 }

						 // Adding date and time to Editing File name
						 Index = strfilename->IndexOf('.');
						 String^ date;
						 date = Convert::ToString(DateTime::Now);
						 date = date->Replace('/', '-');
						 date = date->Replace(':', '-');
						 date = date->Replace(' ', '_');
						 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
						 edfilename = edfilename->Insert(Index - 4, "Edited_");
						 StreamWriter^ sw = gcnew StreamWriter(edfilename);
						 
						 //Loops through the data files and looks for a match, if there is a match updates it
						 String^ line;
						 sw->WriteLine(sr->ReadLine());
						 while ((line = sr->ReadLine()) != nullptr)
						 {
							 Index = line->IndexOf(',');
							 if (Energy == (Convert::ToDouble(line->Substring(0, Index))))
							 {
								 line = String::Concat(Convert::ToString(Energy), ",", Convert::ToString(Count));
								 mod_count++;
							 }
							 sw->WriteLine(line);
						}

						 //Initmating the user whether the date has been modified or not
						 sr->Close();
						 sw->Close();
						 if (mod_count > 0)
						 {
							 if (flag == 1)
								 File::Delete(gedfilename);
							 flag = 1;
							 gedfilename = edfilename;
							 MessageBox::Show("Data Has been Modified");
						 }
						 else
						 {
							 File::Delete(edfilename);
							 MessageBox::Show("NO Data Found");
						}
					 }

					 // Let the user know what went wrong.
					 catch (Exception^ e)
					 {
						 Console::WriteLine("The file could not be read:");
						 Console::WriteLine(e->Message);
					 }
				 }
	}  //End of Modify_Click Method



private: System::Void Add_button_Click(System::Object^  sender, System::EventArgs^  e) {

			 int Count;
			 int Index;
			 double Energy;
			 double prev_energy;
			 String^ edfilename;
			 int found = 0;
			 
			 //Checks whether there is any previous update
			 if (textBox1->TextLength == 0 || textBox2->TextLength == 0)
			 {
				 if (URL_Text->TextLength == 0)
					 MessageBox::Show("Select a File by clicking Select File button");
				 else
					 MessageBox::Show("Please Enter Enerygy, Count Values you want to ADD");
			 }
			 else
			 {
				 //Reading the Values from the text boxes whihc user has entered to add it to the file
				 Energy = Convert::ToDouble(textBox1->Text);
				 Count = Convert::ToInt16(textBox2->Text);

				 try
				 {
					 StreamReader^ sr;
					 if (flag == 1)
					 {
						 sr = gcnew StreamReader(gedfilename);
					 }
					 else
					 {
						 sr = gcnew StreamReader(strfilename);
					 }

					 //Naming the File name with Current Date and Time
					 Index = strfilename->IndexOf('.');
					 String^ date;
					 date = Convert::ToString(DateTime::Now);
					 date = date->Replace('/', '-');
					 date = date->Replace(':', '-');
					 date = date->Replace(' ', '_');
					 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
					 edfilename = edfilename->Insert(Index - 4, "Edited_");
					 StreamWriter^ sw = gcnew StreamWriter(edfilename);
					 
					 String^ line;
					 String^ prev_line;
					 String^ add;

					 //Forming the line which has to be added to the file using the values USER entered
					 add = String::Concat(Convert::ToString(Energy), ",", Convert::ToString(Count));

					 //Checks whether the Entered Values comes first or not if yes raises flag Found
					 sw->WriteLine(sr->ReadLine());
					 prev_line = sr->ReadLine();
					 Index = prev_line->IndexOf(',');
					 prev_energy = Convert::ToDouble(prev_line->Substring(0, Index));

					 if (Energy < prev_energy)
					 {
						 sw->WriteLine(add);
						 found = 1;
					 }
					 sw->WriteLine(prev_line);

					 //Finds the line where the Entered Values should store and writes the 'add' to that line
					 while ((line = sr->ReadLine()) != nullptr)
					 {
						 Index = line->IndexOf(',');
						 if (found == 0)
						 {
							 if (prev_energy < Energy && Energy < (Convert::ToDouble(line->Substring(0, Index))))
							 {
								 sw->WriteLine(add);
								 found = 1;
							 }

							 if (Energy == prev_energy || Energy == (Convert::ToDouble(line->Substring(0, Index))))
								 found = 2;
						 }

						 sw->WriteLine(line);
						 prev_line = line;
						 Index = prev_line->IndexOf(',');
						 prev_energy = Convert::ToDouble(prev_line->Substring(0, Index));
						 
					 }

					 // If No Match found, add the data at the end
					 if (found == 0)
					 {
						 sw->WriteLine(add);
						 found = 1;
					 }
					 sr->Close();
					 sw->Close();
					 //Intimate the user about the result
					 if (found == 1)
					 {
						 if (flag == 1)
							 File::Delete(gedfilename);
						 flag = 1;
						 gedfilename = edfilename;
						 MessageBox::Show("Data Has been Added");
					 }
					 if (found == 2)
					 {
						 File::Delete(edfilename);
						 MessageBox::Show("Entered Energy Already Present");
					 }

				 }
				 // Let the user know what went wrong.
				 catch (Exception^ e)
				 {
					 Console::WriteLine("The file could not be read:");
					 Console::WriteLine(e->Message);
				 }
			 }

}


private: System::Void Delete_Button_Click(System::Object^  sender, System::EventArgs^  e) {

			 int Index;
			 double Energy;
			 String^ edfilename;
			 int found = 0;
			 int garb;
			 garb = textBox2->TextLength;
			 //Validating the Text boxes
			 if (textBox1->TextLength == 0)
			 {
				 if (URL_Text->TextLength == 0)
					 MessageBox::Show("Select a File by clicking Select File button");
				 else
					 MessageBox::Show("Please Enter Enerygy Value you want to delete");
			 }
			 else
			 {
				 //Reading the Values from the text boxes whihc user has entered to Delete the file
				 Energy = Convert::ToDouble(textBox1->Text);
				 //Count = Convert::ToInt16(textBox2->Text);

				 try
				 {					 
					 StreamReader^ sr;
					 if (flag == 1)
					 {
						 sr = gcnew StreamReader(gedfilename);
					 }
					 else
					 {

						 sr = gcnew StreamReader(strfilename);
					 }

					 //Naming the File name with Current Date and Time
					 Index = strfilename->IndexOf('.');
					 String^ date;
					 date = Convert::ToString(DateTime::Now);
					 date = date->Replace('/', '-');
					 date = date->Replace(':', '-');
					 date = date->Replace(' ', '_');
					 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
					 edfilename = edfilename->Insert(Index - 4, "Edited_");
					 StreamWriter^ sw = gcnew StreamWriter(edfilename);

					 String^ line;
					 sw->WriteLine(sr->ReadLine());
					 
					 //Finds the line where the Entered Values should is present and deletes that line
					 while ((line = sr->ReadLine()) != nullptr)
					 {
						 Index = line->IndexOf(',');
						 if (Energy == (Convert::ToDouble(line->Substring(0, Index))))
						 {
							 //&& Count == (Convert::ToDouble(line->Substring(Index))
							 Count_Text->Text = line->Substring(Index + 1);
							 found = 1;
						 }
						 else
						 {
							 sw->WriteLine(line);
						 }
					 }

					 sr->Close();
					 sw->Close();
					 if (found == 1)
					 {
						 if (flag == 1)
							 File::Delete(gedfilename);
						 flag = 1;
						 gedfilename = edfilename;
						 MessageBox::Show("Data Has been Deleted");
					 }
					 else
					 {
						 MessageBox::Show("NO Data Found");
					 }

				 }
				 // Let the user know what went wrong.
				 catch (Exception^ e)
				 {
					 Console::WriteLine("The file could not be read:");
					 Console::WriteLine(e->Message);
				 }
			 }

}
};
}
