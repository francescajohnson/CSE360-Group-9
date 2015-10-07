#include "ScheduleAppointment.h"
#include "Registration.h"
#include "UpdateHealthcare.h"
#include "LoggingIn.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPIMSGroup9::LoggingIn formLoggingIn;
	Application::Run(%formLoggingIn);

	IPIMSGroup9::ScheduleAppointment formScheduleAppt;
	Application::Run(%formScheduleAppt);

	IPIMSGroup9::Registration formRegistration;
	Application::Run(%formRegistration);

	IPIMSGroup9::UpdateHealthcareCondition formUpdateHealthcare;
	Application::Run(%formUpdateHealthcare);

}

