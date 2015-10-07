#pragma once

namespace IPIMSGroup9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScheduleAppointment
	/// </summary>
	public ref class ScheduleAppointment : public System::Windows::Forms::Form
	{
	public:
		ScheduleAppointment(void)
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
		~ScheduleAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelScheduleAppointment;
	private: System::Windows::Forms::Button^  buttonViewAppointments;
	private: System::Windows::Forms::Button^  buttonScheduleAppointments;

	private: System::Windows::Forms::GroupBox^  groupBoxPersonalInformation;


	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;

	private: System::Windows::Forms::Label^  labelSymptoms;


	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::LinkLabel^  linkLabelLogout;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendarScheduling;


	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;

	private: System::Windows::Forms::Button^  buttonScheduleAppointment;
	private: System::Windows::Forms::MenuStrip^  menuStripScheduleAppointments;
	private: System::Windows::Forms::ToolStripMenuItem^  patientServicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;


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
			this->labelScheduleAppointment = (gcnew System::Windows::Forms::Label());
			this->buttonViewAppointments = (gcnew System::Windows::Forms::Button());
			this->buttonScheduleAppointments = (gcnew System::Windows::Forms::Button());
			this->groupBoxPersonalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->linkLabelLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->buttonScheduleAppointment = (gcnew System::Windows::Forms::Button());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendarScheduling = (gcnew System::Windows::Forms::MonthCalendar());
			this->menuStripScheduleAppointments = (gcnew System::Windows::Forms::MenuStrip());
			this->patientServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersonalInformation->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStripScheduleAppointments->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelScheduleAppointment
			// 
			this->labelScheduleAppointment->AutoSize = true;
			this->labelScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelScheduleAppointment->Location = System::Drawing::Point(12, 30);
			this->labelScheduleAppointment->Name = L"labelScheduleAppointment";
			this->labelScheduleAppointment->Size = System::Drawing::Size(331, 36);
			this->labelScheduleAppointment->TabIndex = 1;
			this->labelScheduleAppointment->Text = L"Schedule Appointments";
			// 
			// buttonViewAppointments
			// 
			this->buttonViewAppointments->Location = System::Drawing::Point(12, 69);
			this->buttonViewAppointments->Name = L"buttonViewAppointments";
			this->buttonViewAppointments->Size = System::Drawing::Size(108, 23);
			this->buttonViewAppointments->TabIndex = 2;
			this->buttonViewAppointments->Tag = L"";
			this->buttonViewAppointments->Text = L"View Appointments";
			this->buttonViewAppointments->UseVisualStyleBackColor = true;
			// 
			// buttonScheduleAppointments
			// 
			this->buttonScheduleAppointments->Enabled = false;
			this->buttonScheduleAppointments->Location = System::Drawing::Point(126, 69);
			this->buttonScheduleAppointments->Name = L"buttonScheduleAppointments";
			this->buttonScheduleAppointments->Size = System::Drawing::Size(129, 23);
			this->buttonScheduleAppointments->TabIndex = 3;
			this->buttonScheduleAppointments->Tag = L"";
			this->buttonScheduleAppointments->Text = L"Schedule Appointments";
			this->buttonScheduleAppointments->UseVisualStyleBackColor = true;
			// 
			// groupBoxPersonalInformation
			// 
			this->groupBoxPersonalInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->labelSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPersonalInformation->Location = System::Drawing::Point(12, 98);
			this->groupBoxPersonalInformation->Name = L"groupBoxPersonalInformation";
			this->groupBoxPersonalInformation->Size = System::Drawing::Size(564, 167);
			this->groupBoxPersonalInformation->TabIndex = 5;
			this->groupBoxPersonalInformation->TabStop = false;
			this->groupBoxPersonalInformation->Text = L"Personal Information:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(392, 41);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			this->labelDateOfBirth->Click += gcnew System::EventHandler(this, &ScheduleAppointment::labelDateOfBirth_Click);
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(467, 38);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Location = System::Drawing::Point(73, 64);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSymptoms->Size = System::Drawing::Size(465, 97);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"What are the symptoms\?";
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->AutoSize = true;
			this->labelSymptoms->Location = System::Drawing::Point(9, 67);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(58, 13);
			this->labelSymptoms->TabIndex = 6;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(266, 38);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(120, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 38);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(199, 41);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(7, 41);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// linkLabelLogout
			// 
			this->linkLabelLogout->AutoSize = true;
			this->linkLabelLogout->Location = System::Drawing::Point(538, 62);
			this->linkLabelLogout->Name = L"linkLabelLogout";
			this->linkLabelLogout->Size = System::Drawing::Size(40, 13);
			this->linkLabelLogout->TabIndex = 6;
			this->linkLabelLogout->TabStop = true;
			this->linkLabelLogout->Text = L"Logout";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->buttonScheduleAppointment);
			this->groupBox1->Controls->Add(this->comboBoxDoctorSelection);
			this->groupBox1->Controls->Add(this->monthCalendarScheduling);
			this->groupBox1->Controls->Add(this->checkBoxEmergencyAlert);
			this->groupBox1->Location = System::Drawing::Point(13, 271);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(563, 220);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calendar and Doctor Selection for Appointment Scheduling:";
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->AutoSize = true;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(243, 157);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(131, 24);
			this->checkBoxEmergencyAlert->TabIndex = 19;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			// 
			// buttonScheduleAppointment
			// 
			this->buttonScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonScheduleAppointment->Location = System::Drawing::Point(351, 179);
			this->buttonScheduleAppointment->Name = L"buttonScheduleAppointment";
			this->buttonScheduleAppointment->Size = System::Drawing::Size(206, 35);
			this->buttonScheduleAppointment->TabIndex = 18;
			this->buttonScheduleAppointment->Text = L"Schedule Appointment";
			this->buttonScheduleAppointment->UseVisualStyleBackColor = true;
			// 
			// comboBoxDoctorSelection
			// 
			this->comboBoxDoctorSelection->FormattingEnabled = true;
			this->comboBoxDoctorSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Dr. Thomas Smith", L"Dr. Susan Enriquez",
					L"Dr. Linda Chattin"
			});
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(244, 25);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(213, 21);
			this->comboBoxDoctorSelection->TabIndex = 2;
			this->comboBoxDoctorSelection->Text = L"Select the Doctor for your Appointment";
			// 
			// monthCalendarScheduling
			// 
			this->monthCalendarScheduling->Location = System::Drawing::Point(5, 25);
			this->monthCalendarScheduling->Name = L"monthCalendarScheduling";
			this->monthCalendarScheduling->TabIndex = 0;
			// 
			// menuStripScheduleAppointments
			// 
			this->menuStripScheduleAppointments->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->patientServicesToolStripMenuItem,
					this->reportsToolStripMenuItem, this->toolsToolStripMenuItem
			});
			this->menuStripScheduleAppointments->Location = System::Drawing::Point(0, 0);
			this->menuStripScheduleAppointments->Name = L"menuStripScheduleAppointments";
			this->menuStripScheduleAppointments->Size = System::Drawing::Size(594, 24);
			this->menuStripScheduleAppointments->TabIndex = 19;
			this->menuStripScheduleAppointments->Text = L"menuStrip1";
			this->menuStripScheduleAppointments->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &ScheduleAppointment::menuStrip1_ItemClicked);
			// 
			// patientServicesToolStripMenuItem
			// 
			this->patientServicesToolStripMenuItem->Name = L"patientServicesToolStripMenuItem";
			this->patientServicesToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->patientServicesToolStripMenuItem->Text = L"Patient Services";
			// 
			// reportsToolStripMenuItem
			// 
			this->reportsToolStripMenuItem->Name = L"reportsToolStripMenuItem";
			this->reportsToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->reportsToolStripMenuItem->Text = L"Reports";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(244, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(227, 100);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Emergency Alert Conditions Include:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 78);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
			// 
			// ScheduleAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->linkLabelLogout);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->buttonScheduleAppointments);
			this->Controls->Add(this->buttonViewAppointments);
			this->Controls->Add(this->labelScheduleAppointment);
			this->Controls->Add(this->menuStripScheduleAppointments);
			this->MainMenuStrip = this->menuStripScheduleAppointments;
			this->Name = L"ScheduleAppointment";
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStripScheduleAppointments->ResumeLayout(false);
			this->menuStripScheduleAppointments->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelDateOfBirth_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
};
}
