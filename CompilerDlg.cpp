
/***************************************************************
 * Name:      CompilerDlg.cpp
 * Purpose:   Code for Compiler Dialog Class
 * Author:    kushagra gour a.k.a chin chang (chinchang457@gmail.com)
 * Created:   2010-11-21

    Copyright 2010 Kushagra Gour (http://kushagragour.in)

    This file is part of JIDE.

    JIDE is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    JIDE is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with JIDE.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************/

#include "CompilerDlg.h"

//(*InternalHeaders(CompilerDlg)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(CompilerDlg)
const long CompilerDlg::ID_STATICTEXT1 = wxNewId();
const long CompilerDlg::ID_TEXTCTRL1 = wxNewId();
const long CompilerDlg::ID_BUTTON1 = wxNewId();
const long CompilerDlg::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CompilerDlg,wxDialog)
	//(*EventTable(CompilerDlg)
	//*)
END_EVENT_TABLE()

CompilerDlg::CompilerDlg(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(CompilerDlg)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX, _T("id"));
	SetClientSize(wxSize(358,228));
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Enter path to JDK :\nExample : C:\\Java\\jdk1.6.0_14"), wxDefaultPosition, wxSize(210,33), 0, _T("ID_STATICTEXT1"));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Path to JDK..."), wxDefaultPosition, wxSize(220,33), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer1->Add(TextCtrl1, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Save Settings"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CompilerDlg::OnSave);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CompilerDlg::OnCancel);
	//*)

	// my code
	wxString key1 = _("JDK/Path");
    wxString value1;
	wxConfig* conf = new wxConfig(_("JIDE-Config"));
    if(conf->Read(key1,&value1)){
        TextCtrl1->ChangeValue(value1);
    }
    delete conf;
}

CompilerDlg::~CompilerDlg()
{
	//(*Destroy(CompilerDlg)
	//*)
}


void CompilerDlg::OnCancel(wxCommandEvent& event)
{
    this->Close();

}

void CompilerDlg::OnSave(wxCommandEvent& event)
{
    // save the settings and close
    saveSettings();
    this->Close();
}

void CompilerDlg::saveSettings(){
    wxString key1 = _("JDK/Path");
    wxString value1 = TextCtrl1->GetValue();
    wxConfig* conf = new wxConfig(_("JIDE-Config"));
    conf->Write(key1,value1);
    delete conf;
}
