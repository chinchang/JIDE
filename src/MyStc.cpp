
/***************************************************************
 * Name:      MyStc.cpp
 * Purpose:   Code for custom StyledTextControl Class
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

#include "MyStc.h"

MyStc::MyStc(wxWindow* parent,wxWindowID id)
{
    //ctor
    Create(parent, id);
    wxString keywords = _("void class catch try import public private default protected if else for while do throw throws");
    keywords.append(_(" new delete implements extends super throwable static unsigned"));


    wxString keywords2 =(_("int float char double long byte short"));
    this->SetLexer(wxSTC_LEX_CPP);
    this->SetKeyWords(0,keywords);
    this->SetKeyWords(1,keywords2);


    this->StyleSetSpec(wxSTC_STYLE_DEFAULT, _("fore:#ff0000,bold"));
    this->StyleSetSpec(wxSTC_C_PREPROCESSOR, _("fore:#4E9801"));
    this->StyleSetSpec(wxSTC_C_WORD, _("fore:#ff0000,bold"));
    this->StyleSetSpec(wxSTC_C_WORD2, _("fore:#0033CC,bold"));
    this->StyleSetSpec(wxSTC_C_STRING, _("fore:#7E2601"));
    this->StyleSetSpec(wxSTC_C_NUMBER, _("fore:#FF0099"));
    this->StyleSetSpec(wxSTC_C_COMMENTLINE, _("fore:#6F6F6F"));
    this->StyleSetSpec(wxSTC_C_COMMENT, _("fore:#6F6F6F"));

    this->SetMarginWidth(0, 15);
    //this->SetMarginType(1, wxSTC_MARGIN_NUMBER);

    this->SetIndent(10);
    this->SetIndentationGuides(1);
    this->fn = NULL;

}

MyStc::~MyStc()
{
    //dtor
}
