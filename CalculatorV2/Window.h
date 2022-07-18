#pragma once
#include "wx/wx.h"


class Window : public wxFrame
{
public:
	int width = 4;
	int height = 5;
	wxTextCtrl* textBox = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnDivide = nullptr;
	wxButton* btnMulti = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnMode = nullptr;
	wxButton* btnNegative = nullptr;
	wxButton* pI = nullptr;
	char function = '/0';
	int first = 0;
	int second = 0;








public:
	Window();
	

};
