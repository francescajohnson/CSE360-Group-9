#include "ScheduleAppointment.h"
#include "Registration.h"
#include "UpdateHealthcare.h"
#include "LoggingIn.h"
#include "mainForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPIMSGroup9::mainForm formmainForm;
	Application::Run(%formmainForm);

	IPIMSGroup9::LoggingIn formLoggingIn;
	Application::Run(%formLoggingIn);

	IPIMSGroup9::ScheduleAppointment formScheduleAppt;
	Application::Run(%formScheduleAppt);

	IPIMSGroup9::Registration formRegistration;
	Application::Run(%formRegistration);

	IPIMSGroup9::UpdateHealthcareCondition formUpdateHealthcare;
	Application::Run(%formUpdateHealthcare);

}

