
/***************************************************************
 * Name:      LicenseDlg.h
 * Purpose:   Defines License Dialog Class
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


#ifndef LICENSEDLG_H
#define LICENSEDLG_H

//(*Headers(LicenseDlg)
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/dialog.h>
//*)

class LicenseDlg: public wxDialog
{
	public:

		LicenseDlg(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LicenseDlg();

		//(*Declarations(LicenseDlg)
		wxStaticBitmap* StaticBitmap1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(LicenseDlg)
		static const long ID_STATICBITMAP1;
		static const long ID_TEXTCTRL1;
		//*)

	private:

		//(*Handlers(LicenseDlg)
		void OnTextCtrl1Text(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
