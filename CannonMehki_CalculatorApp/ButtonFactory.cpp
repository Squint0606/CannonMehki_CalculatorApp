#include "ButtonFactory.h"

wxButton* ButtonFactory :: createButton(wxWindow* window, int ID, wxString symbol,int x, int y, int length, int width)
{
	wxButton* buttonTemp;
	buttonTemp = new wxButton(window, ID, symbol, wxPoint(x, y), wxSize(length, width));
	buttonTemp->SetLabel(symbol);
	return buttonTemp;
}
