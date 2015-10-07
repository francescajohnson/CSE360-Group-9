#include "ScheduleAppointment.h"
#include "Registration.h"
#include "UpdateHealthcare.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPIMSGroup9::Registration formRegistration;
	Application::Run(%formRegistration);

	IPIMSGroup9::ScheduleAppointment formScheduleAppt;
	Application::Run(%formScheduleAppt);

	IPIMSGroup9::UpdateHealthcareCondition formUpdateHealthcare;
	Application::Run(%formScheduleAppt);

}

