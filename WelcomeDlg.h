
/***************************************************************
 * Name:      WelcomDlg.h
 * Purpose:   Defines Welcome Dialog Class
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

#ifndef WELCOMEDLG_H
#define WELCOMEDLG_H

//(*Headers(WelcomeDlg)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class WelcomeDlg: public wxDialog
{
	public:

		WelcomeDlg(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~WelcomeDlg();

		//(*Declarations(WelcomeDlg)
		wxButton* Button1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(WelcomeDlg)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(WelcomeDlg)
		void OnButtonClose(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
