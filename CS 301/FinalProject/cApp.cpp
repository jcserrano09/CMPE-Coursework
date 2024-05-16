#include "cApp.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit() {
	MainFrame* mainFrame = new MainFrame("QuizEB");
	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
	return true;
} 