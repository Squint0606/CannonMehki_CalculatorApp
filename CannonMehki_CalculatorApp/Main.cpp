#include "Main.h"
#include "ButtonFactory.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator App", wxPoint(30, 30), wxSize(800, 600))
{
	ButtonFactory  factory;

	m_list1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(609, 150), wxTE_RIGHT);
	
	m_btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(163, 375), wxSize(150, 50));
	m_btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 322), wxSize(150, 50));
	m_btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(163, 322), wxSize(150, 50));
	m_btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(316, 322), wxSize(150, 50));
	m_btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 269), wxSize(150, 50));

	m_btn0 = factory.createButton(this, 0, '0', 163, 375, 150, 50);
	m_btn1 = factory.createButton(this, 1, '1', 10, 322, 150, 50);
	m_btn2 = factory.createButton(this, 2, '2', 163, 322, 150, 50);
	m_btn3 = factory.createButton(this, 3, '3', 316, 322, 150, 50);
	m_btn4 = factory.createButton(this, 4, '4', 10, 269, 150, 50);

	m_btn5 = factory.createButton(this, 5, '5', 163, 269, 150, 50);
	m_btn6 = factory.createButton(this, 6, '6', 316, 269, 150, 50);
	m_btn7 = factory.createButton(this, 7, '7', 10, 216, 150, 50);
	m_btn8 = factory.createButton(this, 8, '8', 163, 216, 150, 50);
	m_btn9 = factory.createButton(this, 9, '9', 316, 216, 150, 50);

	m_btnAdd = factory.createButton(this, 10, '+', 469, 269, 150, 50);
	m_btnSub = factory.createButton(this, 11, '-', 469, 216, 150, 50);
	m_btnMult = factory.createButton(this, 12, '*', 469, 375, 150, 50);
	m_btnDiv = factory.createButton(this, 13, '/', 469, 322, 150, 50);
	m_btnMod = factory.createButton(this, 14, '%', 469, 163, 150, 50);

	m_btnClear = factory.createButton(this, 15, 'A/C', 316, 375, 150, 50);
	m_btnEnter = factory.createButton(this, 16, '=', 163, 428, 303, 50);
	m_btnNegative = factory.createButton(this, 17, '+/-', 10, 375, 150, 50);

	m_btnBin = factory.createButton(this, 18, 'bin', 10, 163, 150, 50);
	m_btnHex = factory.createButton(this, 19, 'hex', 163, 163, 150, 50);
	m_btnDec = factory.createButton(this, 20, 'dec', 316, 163, 150, 50);
}

Main::~Main()
{

}