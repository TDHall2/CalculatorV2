#include "Window.h"
wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(wxID_ANY, onButtonClick)

wxEND_EVENT_TABLE()

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

	btn0->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Window::onButtonClick, this);
	

	







}
void Window::onButtonClick(wxCommandEvent &evt) {
	int iD = evt.GetId();
	switch (iD) {
	case 0: textBox->AppendText("0");
		break;
	case 1:  textBox->AppendText("1");
		break;
	case 2:  textBox->AppendText("2");
		break;
	case 3:  textBox->AppendText("3");
		break;
	case 4:  textBox->AppendText("4");
		break;
	case 5:  textBox->AppendText("5");
		break;
	case 6:  textBox->AppendText("6");
		break;
	case 7:  textBox->AppendText("7");
		break;
	case 8:  textBox->AppendText("8");
		break;
	case 9:  textBox->AppendText("9");
		break;
	case 10:  textBox->AppendText("+");
		break;
	case 11:  textBox->AppendText("-");
		break;
	case 12:  textBox->AppendText("/");
		break;
	case 13:  textBox->AppendText("C");
		break;
	case 14:  textBox->AppendText("%");
		break;
	case 15:  textBox->AppendText("Mode");
		break;
	case 16:  textBox->AppendText("+/-");
		break;
	case 17:  textBox->AppendText("=");
		break;
	case 18:  textBox->AppendText("X");
		break;
	case 19:  textBox->AppendText("Pi");
		break;
	}
	
	

}
