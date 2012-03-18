
/***************************************************************
 * Name:      CompilerDlg.h
 * Purpose:   Defines Compiler Dialog Class
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

#ifndef COMPILERDLG_H
#define COMPILERDLG_H

//(*Headers(CompilerDlg)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

#include <wx/config.h>

class CompilerDlg: public wxDialog
{
	public:

		CompilerDlg(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~CompilerDlg();

		//(*Declarations(CompilerDlg)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxButton* Button2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(CompilerDlg)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(CompilerDlg)
		void OnCancel(wxCommandEvent& event);
		void OnSave(wxCommandEvent& event);
		//*)

		// My functions
		void saveSettings();

		DECLARE_EVENT_TABLE()
};

#endif
