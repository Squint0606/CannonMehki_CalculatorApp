#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator App", wxPoint(30, 30), wxSize(800, 600))
{
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(609, 150));
	
	m_btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(163, 375), wxSize(150, 50));
	m_btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 322), wxSize(150, 50));
	m_btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(163, 322), wxSize(150, 50));
	m_btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(316, 322), wxSize(150, 50));
	m_btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 269), wxSize(150, 50));

	m_btn5 = new wxButton(this, wxID_ANY, "5", wxPoint(163, 269), wxSize(150, 50));
	m_btn6 = new wxButton(this, wxID_ANY, "6", wxPoint(316, 269), wxSize(150, 50));
	m_btn7 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 216), wxSize(150, 50));
	m_btn8 = new wxButton(this, wxID_ANY, "8", wxPoint(163, 216), wxSize(150, 50));
	m_btn9 = new wxButton(this, wxID_ANY, "9", wxPoint(316, 216), wxSize(150, 50));

	m_btnAdd = new wxButton(this, wxID_ANY, "+", wxPoint(469, 269), wxSize(150, 50));
	m_btnSub = new wxButton(this, wxID_ANY, "-", wxPoint(469, 216), wxSize(150, 50));
	m_btnMult = new wxButton(this, wxID_ANY, "*", wxPoint(469, 375), wxSize(150, 50));
	m_btnDiv = new wxButton(this, wxID_ANY, "/", wxPoint(469, 322), wxSize(150, 50));
	m_btnMod = new wxButton(this, wxID_ANY, "%", wxPoint(469, 163), wxSize(150, 50));

	m_btnClear = new wxButton(this, wxID_ANY, "A/C", wxPoint(316, 375), wxSize(150, 50));
	m_btnEnter = new wxButton(this, wxID_ANY, "=", wxPoint(10, 163), wxSize(150, 50));
	m_btnNegative = new wxButton(this, wxID_ANY, "+/-", wxPoint(10, 375), wxSize(150, 50));

	m_btnBin = new wxButton(this, wxID_ANY, "bin", wxPoint(10, 163), wxSize(150, 50));
	m_btnHex = new wxButton(this, wxID_ANY, "hex", wxPoint(163, 163), wxSize(150, 50));
	m_btnDec = new wxButton(this, wxID_ANY, "dec", wxPoint(316, 163), wxSize(150, 50));
}

Main::~Main()
{

}