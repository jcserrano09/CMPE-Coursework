#pragma once
#include<wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
	~MainFrame() {}
public:
	wxButton* cButton = nullptr;
	wxRadioButton* rButton1 = nullptr;
	wxRadioButton* rButton2 = nullptr;
	wxRadioButton* rButton3 = nullptr;

	wxMenuBar* menubar;
	wxMenu* file;

	//score
	wxStaticText* m_text = nullptr;
	int count;

	void NewFrame(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnReset(wxCommandEvent& event);
	void ConfirmClicked(wxCommandEvent& event);

	/*radio button selection
	bool selectChoice1(wxCommandEvent& event);
	bool selectChoice2(wxCommandEvent& event);
	bool selectChoice3(wxCommandEvent& event);
	*/

};

