#include "ButtonFactory.h"

wxButton* ButtonFactory :: createButton(wxWindow* window, int ID, char symbol,int x, int y, int length, int width)
{
	return new wxButton(window, ID, symbol, wxPoint(x, y), wxSize(length, width));
}



/*m_btn0 = new wxButton(this, 0, "0", wxPoint(163, 375), wxSize(150, 50));
	m_btn1 = new wxButton(this, 1, "1", wxPoint(10, 322), wxSize(150, 50));
	m_btn2 = new wxButton(this, 2, "2", wxPoint(163, 322), wxSize(150, 50));
	m_btn3 = new wxButton(this, 3, "3", wxPoint(316, 322), wxSize(150, 50));
	m_btn4 = new wxButton(this, 4, "4", wxPoint(10, 269), wxSize(150, 50));

	m_btn5 = new wxButton(this, 5, "5", wxPoint(163, 269), wxSize(150, 50));
	m_btn6 = new wxButton(this, 6, "6", wxPoint(316, 269), wxSize(150, 50));
	m_btn7 = new wxButton(this, 7, "7", wxPoint(10, 216), wxSize(150, 50));
	m_btn8 = new wxButton(this, 8, "8", wxPoint(163, 216), wxSize(150, 50));
	m_btn9 = new wxButton(this, 9, "9", wxPoint(316, 216), wxSize(150, 50));

	m_btnAdd = new wxButton(this, 10, "+", wxPoint(469, 269), wxSize(150, 50));
	m_btnSub = new wxButton(this, 11, "-", wxPoint(469, 216), wxSize(150, 50));
	m_btnMult = new wxButton(this, 12, "*", wxPoint(469, 375), wxSize(150, 50));
	m_btnDiv = new wxButton(this, 13, "/", wxPoint(469, 322), wxSize(150, 50));
	m_btnMod = new wxButton(this, 14, "%", wxPoint(469, 163), wxSize(150, 50));

	m_btnClear = new wxButton(this, 15, "A/C", wxPoint(316, 375), wxSize(150, 50));
	m_btnEnter = new wxButton(this, 16, "Enter", wxPoint(163, 428), wxSize(303, 50));
	m_btnNegative = new wxButton(this, 17, "+/-", wxPoint(10, 375), wxSize(150, 50));

	m_btnBin = new wxButton(this, 18, "bin", wxPoint(10, 163), wxSize(150, 50));
	m_btnHex = new wxButton(this, 19, "hex", wxPoint(163, 163), wxSize(150, 50));
	m_btnDec = new wxButton(this, 20, "dec", wxPoint(316, 163), wxSize(150, 50));*/