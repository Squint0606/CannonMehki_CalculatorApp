#include "Main.h"
#include "ButtonFactory.h"
#include "calculatorProcessor.h"
//#include <string>

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
	ButtonFactory factory;

	m_list1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(609, 150));

	m_list1->SetFont(wxFont(35, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));
	
	/*m_btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(163, 375), wxSize(150, 50));
	m_btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 322), wxSize(150, 50));
	m_btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(163, 322), wxSize(150, 50));
	m_btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(316, 322), wxSize(150, 50));
	m_btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 269), wxSize(150, 50));*/

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

	m_btnClear = factory.createButton(this, 15, "A / C", 316, 375, 150, 50);
	m_btnEnter = factory.createButton(this, 16, '=', 163, 428, 303, 50);
	m_btnNegative = factory.createButton(this, 17, "+/-", 10, 375, 150, 50);

	m_btnBin = factory.createButton(this, 18, "bin", 10, 163, 150, 50);
	m_btnHex = factory.createButton(this, 19, "hex", 163, 163, 150, 50);
	m_btnDec = factory.createButton(this, 20, "dec", 316, 163, 150, 50);
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
		m_txtBox1->SetLabelText("");

	wxString number1;
	wxString number2;
	wxString equation;
	wxString operation;
	int j = 0;
	calculatorProcessor* processor = calculatorProcessor::GetInstance();

	if (evt.GetId() == 16)
	{
		equation = m_txtBox1->GetLabel();
		for (int i = 0; i < equation.length(); i++)
		{
			if (equation[i] != '+' || equation[i] != '-' ||
				equation[i] != '*' || equation[i] != '/')
			{
				number1 += equation[i];
				//equation.erase(equation[0]);
			}
			else
			{
				//std::cout << "Unknown operation";
				operation = equation[i];
				j = i;
			}
			for (;j < equation.length(); j++)
			{
				if (equation[j] != '+' || equation[j] != '-' ||
					equation[j] != '*' || equation[j] != '/')
				{
					number2 += equation[j];
				}
			}
			
		}
		if (operation == '+')
		{
			m_txtBox1->SetLabelText(processor->getAddResult(std::atoi(number1), std::atoi(number2)));
		}
		if (operation == '-')
		{
			m_txtBox1->SetLabelText(processor->getSubtractResult(std::atoi(number1), std::atoi(number2)));
		}
		if (operation == '*')
		{
			m_txtBox1->SetLabelText(processor->getMultiplyResult(std::atoi(number1), std::atoi(number2)));
		}
		if (operation == '/')
		{
			m_txtBox1->SetLabelText(processor->getDivideResult(std::atoi(number1), std::atoi(number2)));
		}
	}
	evt.Skip();
}
