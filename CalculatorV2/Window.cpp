#include "Window.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "SWE Calculator", wxPoint(200, 200), wxSize(500, 500)) {
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer* gridAreaSizer = new wxBoxSizer(wxVERTICAL);
	textBox = new wxTextCtrl(this, wxID_ANY, "");

	mainSizer->Add(textBox, 1, wxEXPAND| wxALL, 4);
	
	wxGridSizer* grid = new wxGridSizer(5, 4, 0, 0);
	mainSizer->Add(grid, 1, wxEXPAND| wxALL, 4);
	
	btn0 = new wxButton(this, 0, "0");
	btn1 = new wxButton(this, 1, "1");
	btn2 = new wxButton(this, 2, "2");
	btn3 = new wxButton(this, 3, "3");
	btn4 = new wxButton(this, 4, "4");
	btn5 = new wxButton(this, 5, "5");
	btn6 = new wxButton(this, 6, "6");
	btn7 = new wxButton(this, 7, "7");
	btn8 = new wxButton(this, 8, "8");
	btn9 = new wxButton(this, 9, "9");
	btnPlus = new wxButton(this, 10, "+");
	btnMinus = new wxButton(this, 11, "-");
	btnDivide = new wxButton(this, 12, "/");
	btnClear = new wxButton(this, 13, "C");
	btnMod = new wxButton(this, 14, "%");
	btnMode = new wxButton(this, 15, "Mode");
	btnNegative = new wxButton(this, 16, "+/-");
	btnEqual = new wxButton(this, 17, "=");
	btnMulti = new wxButton(this, 18, "X");
	pI = new wxButton(this, 19, "Pi");

	grid->Add(btn0, 1, wxEXPAND | wxALL);
	grid->Add(btn1, 1, wxEXPAND | wxALL);
	grid->Add(btn2, 1, wxEXPAND | wxALL);
	grid->Add(btn3, 1, wxEXPAND | wxALL);
	grid->Add(btn4, 1, wxEXPAND | wxALL);
	grid->Add(btn5, 1, wxEXPAND | wxALL);
	grid->Add(btn6, 1, wxEXPAND | wxALL);
	grid->Add(btn7, 1, wxEXPAND | wxALL);
	grid->Add(btn8, 1, wxEXPAND | wxALL);
	grid->Add(btn9, 1, wxEXPAND | wxALL);
	grid->Add(btnPlus, 1, wxEXPAND | wxALL);
	grid->Add(btnMinus, 1, wxEXPAND | wxALL);
	grid->Add(btnDivide, 1, wxEXPAND | wxALL);
	grid->Add(btnClear, 1, wxEXPAND | wxALL);
	grid->Add(btnMod, 1, wxEXPAND | wxALL);
	grid->Add(btnMode, 1, wxEXPAND | wxALL);
	grid->Add(btnNegative, 1, wxEXPAND | wxALL);
	grid->Add(btnMulti, 1, wxEXPAND | wxALL);
	grid->Add(btnEqual, 1, wxEXPAND | wxALL);
	grid->Add(pI, 1, wxEXPAND | wxALL);



	SetSizer(mainSizer);
	

	







}
