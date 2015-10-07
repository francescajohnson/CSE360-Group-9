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
	private: System::Windows::Forms::Button^  buttonUpdateHealthcareNAlerts;
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

	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;
	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  buttonRegister;
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
			this->buttonUpdateHealthcareNAlerts = (gcnew System::Windows::Forms::Button());
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
			this->monthCalendarScheduling = (gcnew System::Windows::Forms::MonthCalendar());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->groupBoxPersonalInformation->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelScheduleAppointment
			// 
			this->labelScheduleAppointment->AutoSize = true;
			this->labelScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelScheduleAppointment->Location = System::Drawing::Point(12, 9);
			this->labelScheduleAppointment->Name = L"labelScheduleAppointment";
			this->labelScheduleAppointment->Size = System::Drawing::Size(449, 36);
			this->labelScheduleAppointment->TabIndex = 1;
			this->labelScheduleAppointment->Text = L"Patient - Schedule Appointments";
			// 
			// buttonViewAppointments
			// 
			this->buttonViewAppointments->Location = System::Drawing::Point(12, 48);
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
			this->buttonScheduleAppointments->Location = System::Drawing::Point(126, 48);
			this->buttonScheduleAppointments->Name = L"buttonScheduleAppointments";
			this->buttonScheduleAppointments->Size = System::Drawing::Size(129, 23);
			this->buttonScheduleAppointments->TabIndex = 3;
			this->buttonScheduleAppointments->Tag = L"";
			this->buttonScheduleAppointments->Text = L"Schedule Appointments";
			this->buttonScheduleAppointments->UseVisualStyleBackColor = true;
			// 
			// buttonUpdateHealthcareNAlerts
			// 
			this->buttonUpdateHealthcareNAlerts->Location = System::Drawing::Point(261, 48);
			this->buttonUpdateHealthcareNAlerts->Name = L"buttonUpdateHealthcareNAlerts";
			this->buttonUpdateHealthcareNAlerts->Size = System::Drawing::Size(101, 23);
			this->buttonUpdateHealthcareNAlerts->TabIndex = 4;
			this->buttonUpdateHealthcareNAlerts->Tag = L"";
			this->buttonUpdateHealthcareNAlerts->Text = L"Emergency Alerts";
			this->buttonUpdateHealthcareNAlerts->UseVisualStyleBackColor = true;
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
			this->groupBoxPersonalInformation->Location = System::Drawing::Point(12, 77);
			this->groupBoxPersonalInformation->Name = L"groupBoxPersonalInformation";
			this->groupBoxPersonalInformation->Size = System::Drawing::Size(564, 84);
			this->groupBoxPersonalInformation->TabIndex = 5;
			this->groupBoxPersonalInformation->TabStop = false;
			this->groupBoxPersonalInformation->Text = L"Personal Information:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(392, 20);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			this->labelDateOfBirth->Click += gcnew System::EventHandler(this, &ScheduleAppointment::labelDateOfBirth_Click);
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(467, 17);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Location = System::Drawing::Point(73, 43);
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->Size = System::Drawing::Size(465, 20);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"What are your symptoms\?";
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->AutoSize = true;
			this->labelSymptoms->Location = System::Drawing::Point(9, 46);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(58, 13);
			this->labelSymptoms->TabIndex = 6;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(266, 17);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(120, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 17);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(199, 20);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(7, 20);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// linkLabelLogout
			// 
			this->linkLabelLogout->AutoSize = true;
			this->linkLabelLogout->Location = System::Drawing::Point(520, 57);
			this->linkLabelLogout->Name = L"linkLabelLogout";
			this->linkLabelLogout->Size = System::Drawing::Size(40, 13);
			this->linkLabelLogout->TabIndex = 6;
			this->linkLabelLogout->TabStop = true;
			this->linkLabelLogout->Text = L"Logout";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBoxDoctorSelection);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->monthCalendarScheduling);
			this->groupBox1->Location = System::Drawing::Point(13, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(563, 251);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calendar Selection for Appointment Scheduling:";
			// 
			// monthCalendarScheduling
			// 
			this->monthCalendarScheduling->Location = System::Drawing::Point(32, 51);
			this->monthCalendarScheduling->Name = L"monthCalendarScheduling";
			this->monthCalendarScheduling->TabIndex = 0;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(32, 19);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// comboBoxDoctorSelection
			// 
			this->comboBoxDoctorSelection->FormattingEnabled = true;
			this->comboBoxDoctorSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Dr. Thomas Smith", L"Dr. Susan Enriquez",
					L"Dr. Linda Chattin"
			});
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(308, 18);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(213, 21);
			this->comboBoxDoctorSelection->TabIndex = 2;
			this->comboBoxDoctorSelection->Text = L"Select the Doctor for your Appointment";
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AutoSize = true;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(378, 425);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(185, 24);
			this->checkBoxEmergencyAlert->TabIndex = 3;
			this->checkBoxEmergencyAlert->Text = L"Is this an Emergency\?";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			// 
			// buttonRegister
			// 
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegister->Location = System::Drawing::Point(370, 455);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(206, 35);
			this->buttonRegister->TabIndex = 18;
			this->buttonRegister->Text = L"Schedule Appointment";
			this->buttonRegister->UseVisualStyleBackColor = true;
			// 
			// ScheduleAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->checkBoxEmergencyAlert);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->linkLabelLogout);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->buttonUpdateHealthcareNAlerts);
			this->Controls->Add(this->buttonScheduleAppointments);
			this->Controls->Add(this->buttonViewAppointments);
			this->Controls->Add(this->labelScheduleAppointment);
			this->Name = L"ScheduleAppointment";
			this->Text = L"ScheduleAppointment";
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelDateOfBirth_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
