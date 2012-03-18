
/***************************************************************
 * Name:      WelcomeDlg.cpp
 * Purpose:   Code for Welcome Dialog Class
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

#include "WelcomeDlg.h"

//(*InternalHeaders(WelcomeDlg)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(WelcomeDlg)
const long WelcomeDlg::ID_STATICBITMAP1 = wxNewId();
const long WelcomeDlg::ID_STATICTEXT1 = wxNewId();
const long WelcomeDlg::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WelcomeDlg,wxDialog)
	//(*EventTable(WelcomeDlg)
	//*)
END_EVENT_TABLE()

WelcomeDlg::WelcomeDlg(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(WelcomeDlg)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, _("JIDE"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	SetClientSize(wxSize(251,210));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("jide logo.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 30);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("JIDE 1.0 (Beta)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer1->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Lets Code !"), wxDefaultPosition, wxSize(75,45), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WelcomeDlg::OnButtonClose);
	//*)
}

WelcomeDlg::~WelcomeDlg()
{
	//(*Destroy(WelcomeDlg)
	//*)
}


void WelcomeDlg::OnButtonClose(wxCommandEvent& event)
{
    this->Close();
}
