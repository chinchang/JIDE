/***************************************************************
 * Name:      JIDEMain.h
 * Purpose:   Defines Main Frame Class
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


#ifndef JIDEMAIN_H
#define JIDEMAIN_H

//(*Headers(JIDEFrame)
#include <wx/notebook.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/splitter.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include <wx/textctrl.h>
#include <wx/config.h>
#include <wx/html/htmlwin.h>
#include "CompilerDlg.h"
#include "MyStc.h"
#include "LicenseDlg.h"
#include "WelcomeDlg.h"

class JIDEFrame: public wxFrame
{
    public:

        JIDEFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~JIDEFrame();

    private:

        //(*Handlers(JIDEFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnMenuNew(wxCommandEvent& event);
        void OnMenuOpen(wxCommandEvent& event);
        void OnMenuSave(wxCommandEvent& event);
        void OnMenuCompiler(wxCommandEvent& event);
        void OnMenuClose(wxCommandEvent& event);
        void OnMenuCompile(wxCommandEvent& event);
        void OnMenuRun(wxCommandEvent& event);
        void OnMenuStartPage(wxCommandEvent& event);
        void OnMenuLicense(wxCommandEvent& event);
        //*)

        //(*Identifiers(JIDEFrame)
        static const long ID_NOTEBOOK1;
        static const long ID_TEXTCTRL1;
        static const long ID_SPLITTERWINDOW1;
        static const long ID_STATUSBAR1;
        static const long idMenuNew;
        static const long idMenuOpen;
        static const long idMenuSave;
        static const long idMenuClose;
        static const long idMenuQuit;
        static const long idMenuCompile;
        static const long idMenuRun;
        static const long idMenuCompiler;
        static const long idMenuStartPage;
        static const long idMenuLicense;
        static const long idMenuAbout;
        //*)

        //(*Declarations(JIDEFrame)
        wxNotebook* Notebook1;
        wxMenuItem* MenuItem5;
        wxMenuItem* MenuItem4;
        wxMenuItem* MenuItem10;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxMenuBar* MenuBar1;
        wxSplitterWindow* SplitterWindow1;
        //*)

        /* My declarations */
        int untitledPageCount;

        DECLARE_EVENT_TABLE()
};

#endif // JIDEMAIN_H
