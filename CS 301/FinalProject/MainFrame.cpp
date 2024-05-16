#include "MainFrame.h"
#include<iostream>
#include<queue>
#include<wx/wx.h>

using namespace std;

enum IDs {Choice_1 = 2, Choice_2 = 3, Choice_3 = 4};
enum ConfirmIDs {Confirm_ID = 5};

/* 
class Question {	// temp comment ---- might end up as struct
public:
	char* Text;
	char* Answer1;
	char* Answer2;
	char* Answer3;
	int CorrectAnswer;

	Question() {}
	Question(char* text, char* a1, char* a2, char* a3) {
		Text = text;
		Answer1 = a1;
		Answer2 = a2;
		Answer3 = a3;
	}
};
*/

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);	

	//wxPoint (xx, yy) location in frame

	//radiobutton choices
	rButton1 = new wxRadioButton(panel, Choice_1, "A) UC Davis", wxPoint(100, 150), wxDefaultSize);
	rButton2 = new wxRadioButton(panel, Choice_2, "B) Cal State East Bay", wxPoint(100, 250), wxDefaultSize);
	rButton3 = new wxRadioButton(panel, Choice_3, "C) Stanford", wxPoint(100, 350), wxDefaultSize);
	

	//confirm button
	cButton = new wxButton(panel, Confirm_ID, "Confirm", wxPoint(350, 450), wxSize(100, 25));

	//Title Text
	wxStaticText* label1 = new wxStaticText(panel, wxID_ANY, "Welcome to QuizEB", wxPoint(350,25));

	//Question Text
	wxStaticText* Qlabel = new wxStaticText(panel, wxID_ANY, "What is the name of our school?", wxPoint(100,75) );
	
	//might be used
	CreateStatusBar();

	//menu
	menubar = new wxMenuBar;
	file = new wxMenu;
	file->Append(10001, wxT("New"));
	file->Append(10002, wxT("&Reset"));
	file->Append(wxID_EXIT, wxT("&Exit"));
	menubar->Append(file, wxT("&File"));
	SetMenuBar(menubar);

	//score
	wxStaticText* Score = new wxStaticText(panel, wxID_ANY, "Score: ", wxPoint(600, 50));
	m_text = new wxStaticText(panel, wxID_ANY,"0", wxPoint(650, 50));

	//Event Handlers-----------
	Connect(10001, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(MainFrame::NewFrame));

	Connect(10002, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(MainFrame::OnReset));

	Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(MainFrame::OnExit));

	Connect(Confirm_ID, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(MainFrame::ConfirmClicked));

}

//MainFrame::~MainFrame() {}


void MainFrame::ConfirmClicked(wxCommandEvent& event) {
	int temp = 3; // temp answer

	if (rButton2) { //fix later
		count++;
		m_text->SetLabel(wxString::Format(wxT("%d"), count));
	}
}

void MainFrame::OnReset(wxCommandEvent& event) {
	m_text->SetLabel(wxString::Format(wxT("%d"), 0)); //reset questions and score
}

void MainFrame::OnExit(wxCommandEvent& WXUNUSED(event)) {
	Close(true);
}

void MainFrame::NewFrame(wxCommandEvent& event) {
	this->Close();
	MainFrame* newFrame = new MainFrame("QuizEB");
	newFrame->SetClientSize(800, 600);
	newFrame->Center();
	newFrame->Show();
}

/*radio button selection------WIP
bool MainFrame::selectChoice1(wxCommandEvent& event) {}
bool MainFrame::selectChoice2(wxCommandEvent& event) {}
bool MainFrame::selectChoice3(wxCommandEvent& event) {}
*/