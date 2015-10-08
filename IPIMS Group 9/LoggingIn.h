#include "Registration.h"
#pragma once

namespace IPIMSGroup9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoggingIn
	/// </summary>
	public ref class LoggingIn : public System::Windows::Forms::Form
	{
	public:
		LoggingIn(void)
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
		~LoggingIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelWelcome;
	private: System::Windows::Forms::Label^  labelPleaseLogin;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::TextBox^  textBoxUsername;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::Button^  buttonContinue;
	private: System::Windows::Forms::CheckBox^  checkBoxNewUser;


	protected:

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
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->labelPleaseLogin = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->buttonContinue = (gcnew System::Windows::Forms::Button());
			this->checkBoxNewUser = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(71, 55);
			this->labelWelcome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(173, 42);
			this->labelWelcome->TabIndex = 2;
			this->labelWelcome->Text = L"Welcome";
			// 
			// labelPleaseLogin
			// 
			this->labelPleaseLogin->AutoSize = true;
			this->labelPleaseLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPleaseLogin->Location = System::Drawing::Point(75, 100);
			this->labelPleaseLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPleaseLogin->Name = L"labelPleaseLogin";
			this->labelPleaseLogin->Size = System::Drawing::Size(152, 20);
			this->labelPleaseLogin->TabIndex = 3;
			this->labelPleaseLogin->Text = L"Please login below.";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxPassword);
			this->groupBox2->Controls->Add(this->labelPassword);
			this->groupBox2->Controls->Add(this->textBoxUsername);
			this->groupBox2->Controls->Add(this->labelUsername);
			this->groupBox2->Location = System::Drawing::Point(227, 177);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(371, 103);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login Information:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(95, 57);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(267, 22);
			this->textBoxPassword->TabIndex = 7;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(12, 60);
			this->labelPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(73, 17);
			this->labelPassword->TabIndex = 6;
			this->labelPassword->Text = L"Password:";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Location = System::Drawing::Point(95, 21);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(267, 22);
			this->textBoxUsername->TabIndex = 4;
			this->textBoxUsername->TextChanged += gcnew System::EventHandler(this, &LoggingIn::textBoxUsername_TextChanged);
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(9, 25);
			this->labelUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(77, 17);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"Username:";
			// 
			// buttonContinue
			// 
			this->buttonContinue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonContinue->Location = System::Drawing::Point(340, 390);
			this->buttonContinue->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonContinue->Name = L"buttonContinue";
			this->buttonContinue->Size = System::Drawing::Size(153, 43);
			this->buttonContinue->TabIndex = 20;
			this->buttonContinue->Text = L"Continue";
			this->buttonContinue->UseVisualStyleBackColor = true;
			this->buttonContinue->Click += gcnew System::EventHandler(this, &LoggingIn::buttonContinue_Click);
			// 
			// checkBoxNewUser
			// 
			this->checkBoxNewUser->AutoSize = true;
			this->checkBoxNewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxNewUser->Location = System::Drawing::Point(243, 311);
			this->checkBoxNewUser->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBoxNewUser->Name = L"checkBoxNewUser";
			this->checkBoxNewUser->Size = System::Drawing::Size(308, 29);
			this->checkBoxNewUser->TabIndex = 21;
			this->checkBoxNewUser->Text = L"Need to register as a new user\?";
			this->checkBoxNewUser->UseVisualStyleBackColor = true;
			// 
			// LoggingIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 618);
			this->Controls->Add(this->checkBoxNewUser);
			this->Controls->Add(this->buttonContinue);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->labelPleaseLogin);
			this->Controls->Add(this->labelWelcome);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"LoggingIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonContinue_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxNewUser->Checked)
		{
			/*Application::EnableVisualStyles();
			Application::SetCompatibleTextRenderingDefault(false);

			IPIMSGroup9::Registration formRegistration;
			Application::Run(%formRegistration);*/
			
			this->Hide();
			Registration^ regn = gcnew Registration();
			regn->ShowDialog();

		}
		else
			MessageBox::Show("Please wait while the system logs you in.");
	}
private: System::Void textBoxUsername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
