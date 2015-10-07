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

	protected:

	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;

	private: System::Windows::Forms::Label^  labelSymptoms;






	private: System::Windows::Forms::TextBox^  textBoxSymptoms;

	private: System::Windows::Forms::Label^  labelUpdateHealthcareConditions;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::GroupBox^  groupBox1;




	private: System::Windows::Forms::LinkLabel^  linkLabelLogout;
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  patientServicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchForPatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  updatePatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewAppointmentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ePrescriptionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchRecordsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editProfileInformationToolStripMenuItem;











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
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelUpdateHealthcareConditions = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabelLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->patientServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatePatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAppointmentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ePrescriptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchRecordsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(441, 415);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(138, 31);
			this->checkBoxEmergencyAlert->TabIndex = 1;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
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
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxSymptoms->Size = System::Drawing::Size(489, 192);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 156);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
			// 
			// buttonSave
			// 
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSave->Location = System::Drawing::Point(442, 454);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(115, 35);
			this->buttonSave->TabIndex = 19;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::buttonSave_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(442, 274);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(115, 35);
			this->buttonClear->TabIndex = 20;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::buttonClear_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 274);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(424, 215);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Emergency Alert Conditions Include:";
			// 
			// linkLabelLogout
			// 
			this->linkLabelLogout->AutoSize = true;
			this->linkLabelLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabelLogout->Location = System::Drawing::Point(538, 62);
			this->linkLabelLogout->Name = L"linkLabelLogout";
			this->linkLabelLogout->Size = System::Drawing::Size(40, 13);
			this->linkLabelLogout->TabIndex = 10;
			this->linkLabelLogout->TabStop = true;
			this->linkLabelLogout->Text = L"Logout";
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->patientServicesToolStripMenuItem,
					this->reportsToolStripMenuItem, this->toolsToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(590, 24);
			this->menuStrip->TabIndex = 22;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// patientServicesToolStripMenuItem
			// 
			this->patientServicesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->searchForPatientToolStripMenuItem,
					this->updatePatientToolStripMenuItem, this->viewAppointmentsToolStripMenuItem, this->ePrescriptionToolStripMenuItem
			});
			this->patientServicesToolStripMenuItem->Name = L"patientServicesToolStripMenuItem";
			this->patientServicesToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->patientServicesToolStripMenuItem->Text = L"Patient Services";
			// 
			// searchForPatientToolStripMenuItem
			// 
			this->searchForPatientToolStripMenuItem->Name = L"searchForPatientToolStripMenuItem";
			this->searchForPatientToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->searchForPatientToolStripMenuItem->Text = L"Search for Patient";
			// 
			// updatePatientToolStripMenuItem
			// 
			this->updatePatientToolStripMenuItem->Name = L"updatePatientToolStripMenuItem";
			this->updatePatientToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->updatePatientToolStripMenuItem->Text = L"Update Patient";
			// 
			// viewAppointmentsToolStripMenuItem
			// 
			this->viewAppointmentsToolStripMenuItem->Name = L"viewAppointmentsToolStripMenuItem";
			this->viewAppointmentsToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->viewAppointmentsToolStripMenuItem->Text = L"View Appointments";
			// 
			// ePrescriptionToolStripMenuItem
			// 
			this->ePrescriptionToolStripMenuItem->Name = L"ePrescriptionToolStripMenuItem";
			this->ePrescriptionToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->ePrescriptionToolStripMenuItem->Text = L"E-Prescription";
			// 
			// reportsToolStripMenuItem
			// 
			this->reportsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->searchRecordsToolStripMenuItem });
			this->reportsToolStripMenuItem->Name = L"reportsToolStripMenuItem";
			this->reportsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->reportsToolStripMenuItem->Text = L"Records";
			// 
			// searchRecordsToolStripMenuItem
			// 
			this->searchRecordsToolStripMenuItem->Name = L"searchRecordsToolStripMenuItem";
			this->searchRecordsToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->searchRecordsToolStripMenuItem->Text = L"Search Records";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editProfileInformationToolStripMenuItem });
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// editProfileInformationToolStripMenuItem
			// 
			this->editProfileInformationToolStripMenuItem->Name = L"editProfileInformationToolStripMenuItem";
			this->editProfileInformationToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->editProfileInformationToolStripMenuItem->Text = L"Edit Profile Information";
			// 
			// UpdateHealthcareCondition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 498);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->linkLabelLogout);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->labelUpdateHealthcareConditions);
			this->Controls->Add(this->textBoxSymptoms);
			this->Controls->Add(this->labelSymptoms);
			this->Controls->Add(this->checkBoxEmergencyAlert);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UpdateHealthcareCondition";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxEmergencyAlert->Checked)
			MessageBox::Show("Our staff will contact you as soon as possible");
			
		else
			MessageBox::Show("The symptoms have been saved.");
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSymptoms->Text = "What are the symptoms?";
		this->checkBoxEmergencyAlert->Checked = false;
	}
	
};
}
