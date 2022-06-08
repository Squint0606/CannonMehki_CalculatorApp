#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(0, OnButtonClicked)
	EVT_BUTTON(1, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(3, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
		EVT_BUTTON(5, OnButtonClicked)
		EVT_BUTTON(6, OnButtonClicked)
		EVT_BUTTON(7, OnButtonClicked)
		EVT_BUTTON(8, OnButtonClicked)
		EVT_BUTTON(9, OnButtonClicked)
	EVT_BUTTON(10, OnButtonClicked)
	EVT_BUTTON(11, OnButtonClicked)
	EVT_BUTTON(12, OnButtonClicked)
	EVT_BUTTON(13, OnButtonClicked)
	EVT_BUTTON(14, OnButtonClicked)
		EVT_BUTTON(15, OnButtonClicked)
		EVT_BUTTON(16, OnButtonClicked)
		EVT_BUTTON(17, OnButtonClicked)
		EVT_BUTTON(18, OnButtonClicked)
		EVT_BUTTON(19, OnButtonClicked)
	EVT_BUTTON(20, OnButtonClicked)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator App", wxPoint(30, 30), wxSize(800, 600))
{
	m_list1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(609, 150), wxTE_RIGHT);
	
	m_list1->SetFont(wxFont(35, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));

	m_btn0 = new wxButton(this, 0, "0", wxPoint(163, 375), wxSize(150, 50));
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
	m_btnDec = new wxButton(this, 20, "dec", wxPoint(316, 163), wxSize(150, 50));
}

Main::~Main()
{

}

void Main::OnButtonClicked(wxCommandEvent &evt)
{
	if(evt.GetId() == 0)
		m_list1->AppendText(m_btn0->GetLabel());
	if (evt.GetId() == 1)
		m_list1->AppendText(m_btn1->GetLabel());
	if (evt.GetId() == 2)
		m_list1->AppendText(m_btn2->GetLabel());
	if (evt.GetId() == 3)
		m_list1->AppendText(m_btn3->GetLabel());
	if (evt.GetId() == 4)
		m_list1->AppendText(m_btn4->GetLabel());
		if (evt.GetId() == 5)
			m_list1->AppendText(m_btn5->GetLabel());
		if (evt.GetId() == 6)
			m_list1->AppendText(m_btn6->GetLabel());
		if (evt.GetId() == 7)
			m_list1->AppendText(m_btn7->GetLabel());
		if (evt.GetId() == 8)
			m_list1->AppendText(m_btn8->GetLabel());
		if (evt.GetId() == 9)
			m_list1->AppendText(m_btn9->GetLabel());
	if(evt.GetId() == 10)
		m_list1->AppendText(m_btnAdd->GetLabel());
	if (evt.GetId() == 11)
		m_list1->AppendText(m_btnSub->GetLabel());
	if (evt.GetId() == 12)
		m_list1->AppendText(m_btnMult->GetLabel());
	if (evt.GetId() == 13)
		m_list1->AppendText(m_btnDiv->GetLabel());
	if (evt.GetId() == 14)
		m_list1->AppendText(m_btnMod->GetLabel());
	if (evt.GetId() == 15)
		m_list1->SetLabelText("");

	evt.Skip();
}
