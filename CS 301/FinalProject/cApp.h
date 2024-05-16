#pragma once
#include <wx/wx.h>
class cApp : public wxApp
{
public:
	cApp();
	~cApp();

public:
	bool OnInit();
};

cApp::cApp() {}
cApp::~cApp() {}

