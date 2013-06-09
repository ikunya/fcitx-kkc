/***************************************************************************
 *   Copyright (C) 2013~2013 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *  This program is free software: you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation, either version 3 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.  *
 *                                                                         *
 ***************************************************************************/

#include "common.h"
#include "configwidget.h"
#include "ui_configwidget.h"

KkcConfigWidget::KkcConfigWidget(QWidget* parent): FcitxQtConfigUIWidget(parent)
    ,m_ui(new Ui::KkcConfigWidget)
{
    m_ui->setupUi(this);
}

KkcConfigWidget::~KkcConfigWidget()
{
    delete m_ui;
}

QString KkcConfigWidget::addon()
{
    return "fcitx-kkc";
}

QString KkcConfigWidget::title()
{
    return _("Kana Kanji Configuration");
}

void KkcConfigWidget::load()
{

}

void KkcConfigWidget::save()
{

}