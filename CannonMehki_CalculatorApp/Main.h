#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "calculatorProcessor.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:
	wxTextCtrl* m_txtBox1 = nullptr;

	wxButton* m_btn0 = nullptr;
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;

	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;

	wxButton* m_btnAdd = nullptr;
	wxButton* m_btnSub = nullptr;
	wxButton* m_btnMult = nullptr;
	wxButton* m_btnDiv = nullptr;
	wxButton* m_btnMod = nullptr;

	wxButton* m_btnClear = nullptr;
	wxButton* m_btnEnter = nullptr;
	wxButton* m_btnNegative = nullptr;

	wxButton* m_btnBin = nullptr;
	wxButton* m_btnHex = nullptr;
	wxButton* m_btnDec = nullptr;

	bool bFirstClick = true;
	
	void OnButtonClicked(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};

