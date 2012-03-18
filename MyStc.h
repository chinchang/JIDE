
/***************************************************************
 * Name:      MyStc.h
 * Purpose:   Defines custom StyledtextCtrl Class
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

#ifndef MYSTC_H
#define MYSTC_H

#include <wx/stc/stc.h>
#include <wx/filename.h>

class MyStc : public wxStyledTextCtrl
{
    public:
        MyStc(wxWindow* parent,wxWindowID id = -1);
        virtual ~MyStc();
    protected:
    private:

    // my code
    public:
        //wxString dir;
        //wxString fname;
        //wxString GetCompletePath();
        wxFileName* fn;
};

#endif // MYSTC_H
