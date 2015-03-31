#ifdef _WIN32
#pragma warning(push, 0) // set W0
#endif

#include "csettingspageother.h"
#include "ui_csettingspageother.h"

#include "settings.h"
#include "settings/csettings.h"
#include "ccontroller.h"
#include "shell/cshell.h"

#ifdef _WIN32
#pragma warning(pop)
#endif

CSettingsPageOther::CSettingsPageOther(QWidget *parent) :
	CSettingsPage(parent),
	ui(new Ui::CSettingsPageOther)
{
	ui->setupUi(this);

	CSettings s;
	ui->_shellCommandName->setText(s.value(KEY_OTHER_SHELL_COMMAND_NAME, CShell::shellExecutable()).toString());
}

CSettingsPageOther::~CSettingsPageOther()
{
	delete ui;
}

void CSettingsPageOther::acceptSettings()
{
	CSettings s;
	s.setValue(KEY_OTHER_SHELL_COMMAND_NAME, ui->_shellCommandName->text());
}