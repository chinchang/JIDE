/***************************************************************
 * Name:      JIDEApp.h
 * Purpose:   Defines Application Class
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

#ifndef JIDEAPP_H
#define JIDEAPP_H

#include <wx/app.h>

class JIDEApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // JIDEAPP_H
