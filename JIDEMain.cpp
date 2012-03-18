
/***************************************************************
 * Name:      JIDEMain.cpp
 * Purpose:   Code for Main Frame Class
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


#include "JIDEMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(JIDEFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)
#include <wx/filedlg.h>
#include <wx/filename.h>

//(*IdInit(JIDEFrame)
const long JIDEFrame::ID_NOTEBOOK1 = wxNewId();
const long JIDEFrame::ID_TEXTCTRL1 = wxNewId();
const long JIDEFrame::ID_SPLITTERWINDOW1 = wxNewId();
const long JIDEFrame::ID_STATUSBAR1 = wxNewId();
const long JIDEFrame::idMenuNew = wxNewId();
const long JIDEFrame::idMenuOpen = wxNewId();
const long JIDEFrame::idMenuSave = wxNewId();
const long JIDEFrame::idMenuClose = wxNewId();
const long JIDEFrame::idMenuQuit = wxNewId();
const long JIDEFrame::idMenuCompile = wxNewId();
const long JIDEFrame::idMenuRun = wxNewId();
const long JIDEFrame::idMenuCompiler = wxNewId();
const long JIDEFrame::idMenuStartPage = wxNewId();
const long JIDEFrame::idMenuLicense = wxNewId();
const long JIDEFrame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(JIDEFrame,wxFrame)
    //(*EventTable(JIDEFrame)
    //*)
END_EVENT_TABLE()

JIDEFrame::JIDEFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(JIDEFrame)
    wxMenuItem* MenuItem8;
    wxMenuItem* MenuItem7;
    wxMenuItem* MenuItem2;
    wxMenu* Menu3;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem11;
    wxMenu* Menu1;
    wxMenuItem* MenuItem3;
    wxMenuItem* MenuItem6;
    wxMenu* Menu2;
    wxMenuItem* MenuItem9;
    wxMenu* Menu4;

    Create(parent, id, _("JIDE 1.0 (Beta)"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(800,600));
    SetFocus();
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("jide_icon.ico"))));
    	SetIcon(FrameIcon);
    }
    SplitterWindow1 = new wxSplitterWindow(this, ID_SPLITTERWINDOW1, wxPoint(200,160), wxDefaultSize, wxSP_3D|wxHSCROLL, _T("ID_SPLITTERWINDOW1"));
    SplitterWindow1->SetMinSize(wxSize(10,10));
    SplitterWindow1->SetMinimumPaneSize(10);
    Notebook1 = new wxNotebook(SplitterWindow1, ID_NOTEBOOK1, wxPoint(262,365), wxSize(0,100), 0, _T("ID_NOTEBOOK1"));
    Notebook1->SetFocus();
    TextCtrl1 = new wxTextCtrl(SplitterWindow1, ID_TEXTCTRL1, wxEmptyString, wxPoint(0,367), wxSize(700,130), wxTE_MULTILINE|wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    SplitterWindow1->SplitHorizontally(Notebook1, TextCtrl1);
    SplitterWindow1->SetSashPosition(-5);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuNew, _("New\tCtrl-N"), _("Create a new file"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuItem2 = new wxMenuItem(Menu1, idMenuOpen, _("Open\tCtrl-O"), _("Open an existing file"), wxITEM_NORMAL);
    Menu1->Append(MenuItem2);
    MenuItem3 = new wxMenuItem(Menu1, idMenuSave, _("Save\tCtrl-S"), _("Save current file"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem3->Enable(false);
    MenuItem4 = new wxMenuItem(Menu1, idMenuClose, _("Close\tCtrl-W"), _("Close current file"), wxITEM_NORMAL);
    Menu1->Append(MenuItem4);
    Menu1->AppendSeparator();
    MenuItem5 = new wxMenuItem(Menu1, idMenuQuit, _("Quit"), _("Quit JIDE"), wxITEM_NORMAL);
    Menu1->Append(MenuItem5);
    MenuBar1->Append(Menu1, _("File"));
    Menu4 = new wxMenu();
    MenuItem8 = new wxMenuItem(Menu4, idMenuCompile, _("Compile\tF3"), _("Compile the current file"), wxITEM_NORMAL);
    Menu4->Append(MenuItem8);
    MenuItem9 = new wxMenuItem(Menu4, idMenuRun, _("Run\tF4"), _("Run the current file"), wxITEM_NORMAL);
    Menu4->Append(MenuItem9);
    MenuBar1->Append(Menu4, _("Build"));
    Menu2 = new wxMenu();
    MenuItem6 = new wxMenuItem(Menu2, idMenuCompiler, _("Compiler profiles\tF2"), _("Compiler profile settings"), wxITEM_NORMAL);
    Menu2->Append(MenuItem6);
    MenuBar1->Append(Menu2, _("Options"));
    Menu3 = new wxMenu();
    MenuItem10 = new wxMenuItem(Menu3, idMenuStartPage, _("Start page"), _("Open start page for getting started"), wxITEM_NORMAL);
    Menu3->Append(MenuItem10);
    MenuItem11 = new wxMenuItem(Menu3, idMenuLicense, _("License"), _("See JIDE License"), wxITEM_NORMAL);
    Menu3->Append(MenuItem11);
    MenuItem7 = new wxMenuItem(Menu3, idMenuAbout, _("About\tF1"), _("About JIDE"), wxITEM_NORMAL);
    Menu3->Append(MenuItem7);
    MenuBar1->Append(Menu3, _("Help"));
    SetMenuBar(MenuBar1);
    Center();

    Connect(idMenuNew,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuNew);
    Connect(idMenuOpen,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuOpen);
    Connect(idMenuSave,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuSave);
    Connect(idMenuClose,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuClose);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnQuit);
    Connect(idMenuCompile,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuCompile);
    Connect(idMenuRun,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuRun);
    Connect(idMenuCompiler,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuCompiler);
    Connect(idMenuStartPage,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuStartPage);
    Connect(idMenuLicense,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnMenuLicense);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&JIDEFrame::OnAbout);
    //*)

    /* My code */

    untitledPageCount = 0;
    WelcomeDlg* dlg = new WelcomeDlg(this, wxID_ANY);
    dlg->ShowModal();

    wxHtmlWindow* html = new wxHtmlWindow(Notebook1, wxID_ANY);
    Notebook1->AddPage(html,_("Start Page"),true);
    html->LoadPage(_("startpage.html"));

    SetStatusText(_("Welcome to JIDE"));

}

JIDEFrame::~JIDEFrame()
{
    //(*Destroy(JIDEFrame)
    //*)
}

void JIDEFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void JIDEFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg;
    msg.append(_("JIDE 1.0 (Beta)"));
    msg.append(_("\nDeveloped by :"));
    msg.append(_("\nKushagra Gour, Navin Kumar, Shobhit Ghai"));
    msg.append(_("\n\nWebsite : http://sourceforge.net/projects/jide"));
    msg.append(_("\n\nCopyright 2010"));
    wxMessageBox(msg, _("About"));
}

void JIDEFrame::OnMenuNew(wxCommandEvent& event)
{
    untitledPageCount++;
    wxChar c = 48+untitledPageCount;
    wxString newName = _("Untitled-");
    newName.append(c);
    MyStc* newtext = new MyStc(Notebook1, wxID_ANY);
    //wxTextCtrl* newtext = new wxTextCtrl(Notebook1, wxID_ANY, _(""),wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Notebook1->AddPage(newtext,newName,true);
    SetStatusText(_("New file created"));

    /* enable the close menu */
    int id = MenuBar1->FindMenuItem(_("File"),_("Close"));
    if(!MenuBar1->IsEnabled(id)){
        MenuBar1->Enable(id,true);
    }

    /* enable the save menu */
    id = MenuBar1->FindMenuItem(_("File"),_("Save"));
    if(!MenuBar1->IsEnabled(id)){
        MenuBar1->Enable(id,true);
    }
}

void JIDEFrame::OnMenuOpen(wxCommandEvent& event)
{
    wxFileDialog* myDialog = new wxFileDialog(this,_("Choose a file to open"),_(""),_(""),_("*.java"),wxFD_OPEN);
    if(myDialog->ShowModal() == wxID_OK){
        wxString path;
        path.append(myDialog->GetDirectory()+wxFileName::GetPathSeparator()+myDialog->GetFilename());
        wxCommandEvent e = NULL;
        OnMenuNew(e);

        untitledPageCount--;
        MyStc* currPage = (MyStc*)(Notebook1->GetCurrentPage());
        currPage->LoadFile(path);

        currPage->fn = new wxFileName(myDialog->GetPath());

        Notebook1->SetPageText(Notebook1->GetSelection(),myDialog->GetFilename());
        SetStatusText(_("File : ")+myDialog->GetFilename()+_(" opened"));

        // enable the close menu
        int id = MenuBar1->FindMenuItem(_("File"),_("Close"));
        if(!MenuBar1->IsEnabled(id)){
            MenuBar1->Enable(id,true);
        }

        // enable the save menu
        id = MenuBar1->FindMenuItem(_("File"),_("Save"));
        if(!MenuBar1->IsEnabled(id)){
            MenuBar1->Enable(id,true);
        }
    }
}

void JIDEFrame::OnMenuSave(wxCommandEvent& event)
{
    wxString name = Notebook1->GetPageText(Notebook1->GetSelection());
    if(name.CmpNoCase(_("Start Page")) == 0) return;

    MyStc* currPage = (MyStc*)(Notebook1->GetCurrentPage());

    if(currPage->fn){
        //wxMessageBox(_("saving.."));
        currPage->SaveFile(currPage->fn->GetFullPath());
        SetStatusText(_("File : ")+currPage->fn->GetFullName()+_(" saved"));
        return;
    }

    wxFileDialog* myDialog = new wxFileDialog(this,_("Save file"),_(""),_(""),_("*.java"),wxFD_SAVE);
    if(myDialog->ShowModal() == wxID_OK){

        MyStc* currPage = (MyStc*)(Notebook1->GetCurrentPage());
        currPage->fn = new wxFileName(myDialog->GetPath());
        currPage->SaveFile(currPage->fn->GetFullPath());

        Notebook1->SetPageText(Notebook1->GetSelection(),myDialog->GetFilename());
        SetStatusText(_("File : ")+myDialog->GetFilename()+_(" saved"));
    }

}

void JIDEFrame::OnMenuCompiler(wxCommandEvent& event)
{
    CompilerDlg* dlg = new CompilerDlg(this);
    dlg->ShowModal();
}

void JIDEFrame::OnMenuClose(wxCommandEvent& event)
{
    int n = Notebook1->GetPageCount();
    if(n>0){
        n--;
        wxString name = Notebook1->GetPageText(Notebook1->GetSelection());
        if(name.CmpNoCase(_("Start Page")) != 0) untitledPageCount--;
        Notebook1->DeletePage(Notebook1->GetSelection());

        // if all pages closed, disable close & save menu item
        if(n==0){
            int id = MenuBar1->FindMenuItem(_("File"),_("Close"));
            MenuBar1->Enable(id,false);
            id = MenuBar1->FindMenuItem(_("File"),_("Save"));
            MenuBar1->Enable(id,false);
        }
    }

}

void JIDEFrame::OnMenuCompile(wxCommandEvent& event)
{
    if(Notebook1->GetPageCount() == 0){
        SetStatusText(_("No file detected !"));
        return;
    }

    wxString fname = Notebook1->GetPageText(Notebook1->GetSelection());
    if(fname.CmpNoCase(_("Start Page")) == 0) return;

    MyStc* currPage = (MyStc*)(Notebook1->GetCurrentPage());
    // check if its still untitled or not...i.e. saved or not
    if(fname.SubString(0,7) == _("Untitled")){
        wxMessageBox(_("File not saved"),_("Error"));
        return;
    }
    wxString key1 = _("JDK/Path");
    wxString value1;
	wxConfig* conf = new wxConfig(_("JIDE-Config"));
    if(conf->Read(key1,&value1)){
    }
    else{
        wxMessageBox(_("Oops! You have not set the compiler yet."),_("Error"));
        return;
    }
    delete conf;

    TextCtrl1->ChangeValue(_("Compiling ") + currPage->fn->GetFullName() + _("..."));
    value1.append(wxFileName::GetPathSeparator());
    value1.append(_("bin"));
    value1.append(wxFileName::GetPathSeparator());
    value1.append(_("javac.exe"));

    wxString command;
    command.append(_("\"echo Compiling ") + currPage->fn->GetFullName() + _("... >jidelog.txt & echo -------->>jidelog.txt & "));
    command.append(_("\"") + value1 + _("\" \"") + currPage->fn->GetFullPath() + _("\" >>jidelog.txt 2>&1 ") + _(" & "));
    command.append(_("echo Compilation complete >>jidelog.txt \""));
    //wxMessageBox(command);
    system(command.char_str());
    TextCtrl1->LoadFile(_("jidelog.txt"));
}

void JIDEFrame::OnMenuRun(wxCommandEvent& event)
{
    if(Notebook1->GetPageCount() == 0){
        SetStatusText(_("No file detected !"));
        return;
    }

    wxString fname = Notebook1->GetPageText(Notebook1->GetSelection());
    if(fname.CmpNoCase(_("Start Page")) == 0) return;
    MyStc* currPage = (MyStc*)(Notebook1->GetCurrentPage());

    // check if its still untitled or not...i.e. saved or not
    if(fname.SubString(0,7) == _("Untitled")){
        wxMessageBox(_("File not saved"),_("Error"));
        return;
    }
    wxString key1 = _("JDK/Path");
    wxString value1;
    wxConfig* conf = new wxConfig(_("JIDE-Config"));
    if(conf->Read(key1,&value1)){
    }
    else{
        wxMessageBox(_("Oops! You have not set the compiler yet."),_("Error"));
        return;
    }
    delete conf;

    TextCtrl1->ChangeValue(_("Runnning ") + currPage->fn->GetFullName() + _("..."));

    value1.append(wxFileName::GetPathSeparator());
    value1.append(_("bin"));
    value1.append(wxFileName::GetPathSeparator());
    value1.append(_("java.exe\" -classpath "));

    // prepare the command to run
    wxString command;
    command.append(_("\"echo Runnning ") + currPage->fn->GetFullName() + _("... >jidelog.txt & echo ------- >>jidelog.txt & "));
    command.append(_("echo OUTPUT : >>jidelog.txt & "));
    command.append(_("\"") + value1 + _(" \"") + currPage->fn->GetPath() + _("\" ") + currPage->fn->GetName());
    command.append(_(" >> jidelog.txt  2>&1 \""));
    system(command.char_str());
    TextCtrl1->LoadFile(_("jidelog.txt"));
}

void JIDEFrame::OnMenuStartPage(wxCommandEvent& event)
{
    wxHtmlWindow* html = new wxHtmlWindow(Notebook1, wxID_ANY);
    Notebook1->AddPage(html,_("Start Page"),true);
    //wxString markup = _("<html><body> <font size=+5>Hello, world!</font></body></html>");
    html->LoadPage(_("startpage.html"));

    // enable the close menu
    int id = MenuBar1->FindMenuItem(_("File"),_("Close"));
    if(!MenuBar1->IsEnabled(id)){
        MenuBar1->Enable(id,true);
    }
}

void JIDEFrame::OnMenuLicense(wxCommandEvent& event)
{
    LicenseDlg* dlg = new LicenseDlg(this, wxID_ANY);
    dlg->ShowModal();
}
