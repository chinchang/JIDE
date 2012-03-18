
/***************************************************************
 * Name:      LicenseDlg.cpp
 * Purpose:   Code for License Dialog Class
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

#include "LicenseDlg.h"

//(*InternalHeaders(LicenseDlg)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(LicenseDlg)
const long LicenseDlg::ID_STATICBITMAP1 = wxNewId();
const long LicenseDlg::ID_TEXTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LicenseDlg,wxDialog)
	//(*EventTable(LicenseDlg)
	//*)
END_EVENT_TABLE()

LicenseDlg::LicenseDlg(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LicenseDlg)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, _("License - JIDE"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX, _T("wxID_ANY"));
	SetClientSize(wxSize(418,584));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("gplv3-88x31.png"))), wxPoint(-1,0), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 0, wxALL|wxSHAPED|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxSize(406,321), wxTE_AUTO_SCROLL|wxTE_MULTILINE|wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer1->Add(TextCtrl1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->SetSizeHints(this);
	Center();
	//*)

	TextCtrl1->LoadFile(_("License.txt"));
}

LicenseDlg::~LicenseDlg()
{
	//(*Destroy(LicenseDlg)
	//*)
}


void LicenseDlg::OnTextCtrl1Text(wxCommandEvent& event)
{
}
