#pragma once

namespace IPIMSGroup9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateHealthcareCondition
	/// </summary>
	public ref class UpdateHealthcareCondition : public System::Windows::Forms::Form
	{
	public:
		UpdateHealthcareCondition(void)
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
		~UpdateHealthcareCondition()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;

	private: System::Windows::Forms::Label^  labelSymptoms;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;

	private: System::Windows::Forms::Label^  labelUpdateHealthcareConditions;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelUpdateHealthcareConditions = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(230, 284);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::button1_Click);
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(11, 284);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(121, 31);
			this->checkBoxEmergencyAlert->TabIndex = 1;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			this->checkBoxEmergencyAlert->CheckedChanged += gcnew System::EventHandler(this, &UpdateHealthcareCondition::checkBox1_CheckedChanged);
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelSymptoms->Font = (gcnew System::Drawing::Font(L"Arial", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSymptoms->Location = System::Drawing::Point(11, 77);
			this->labelSymptoms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(75, 22);
			this->labelSymptoms->TabIndex = 2;
			this->labelSymptoms->Text = L"Symptoms:";
			this->labelSymptoms->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::label1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(400, 284);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 29);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::button2_Click);
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxSymptoms->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSymptoms->Location = System::Drawing::Point(90, 77);
			this->textBoxSymptoms->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSymptoms->MaximumSize = System::Drawing::Size(376, 407);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxSymptoms->Size = System::Drawing::Size(376, 192);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"What are the symptoms\?";
			// 
			// labelUpdateHealthcareConditions
			// 
			this->labelUpdateHealthcareConditions->AutoSize = true;
			this->labelUpdateHealthcareConditions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelUpdateHealthcareConditions->Location = System::Drawing::Point(12, 30);
			this->labelUpdateHealthcareConditions->Name = L"labelUpdateHealthcareConditions";
			this->labelUpdateHealthcareConditions->Size = System::Drawing::Size(412, 36);
			this->labelUpdateHealthcareConditions->TabIndex = 8;
			this->labelUpdateHealthcareConditions->Text = L"Update Healthcare Conditions";
			// 
			// UpdateHealthcareCondition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 498);
			this->Controls->Add(this->labelUpdateHealthcareConditions);
			this->Controls->Add(this->textBoxSymptoms);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelSymptoms);
			this->Controls->Add(this->checkBoxEmergencyAlert);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UpdateHealthcareCondition";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->Load += gcnew System::EventHandler(this, &UpdateHealthcareCondition::UpdateHealthcareCondition_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateHealthcareCondition_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxEmergencyAlert->Checked)
			MessageBox::Show("Our staff will contact you as soon as possible");
		else
			MessageBox::Show("Symptoms have been saved.");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	};
}
