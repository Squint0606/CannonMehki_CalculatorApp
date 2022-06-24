#pragma once
#include "wx/wx.h"

class ButtonFactory
{
public:
	wxButton* createButton(wxWindow* window, int ID, wxString symbol, int x, int y, int length, int width);
};

