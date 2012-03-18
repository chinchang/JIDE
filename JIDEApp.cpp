
/***************************************************************
 * Name:      JIDEApp.cpp
 * Purpose:   Code for Application Class
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


#include "JIDEApp.h"

//(*AppHeaders
#include "JIDEMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(JIDEApp);

bool JIDEApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	JIDEFrame* Frame = new JIDEFrame(0);
    	Frame->Show();
    	Frame->Maximize(true);
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
