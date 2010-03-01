/* Copyright (�) 2004, 2010, Oracle and/or its affiliates. All rights reserved.

   The MySQL Connector/ODBC is licensed under the terms of the
   GPL, like most MySQL Connectors. There are special exceptions
   to the terms and conditions of the GPL as it is applied to
   this software, see the FLOSS License Exception available on
   mysql.com.

   This program is free software; you can redistribute it and/or modify
   it under the terms of version 2 of the GNU General Public License as
   published by the Free Software Foundation.

   There are special exceptions to the terms and conditions of the GPL as it
   is applied to this software. View the full text of the exception in file
   EXCEPTIONS in the directory of this software distribution.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef MYODBCCHECKBOX_H
#define MYODBCCHECKBOX_H

#include <qcheckbox.h>
#include <qevent.h>


#ifndef MYODBC_ADD_TOOLTIP

#if QT_VERSION >= 0x040000
#    define MYODBC_ADD_TOOLTIP(control, tooltipStr) control->setToolTip(tooltipStr);
#else
#    define MYODBC_ADD_TOOLTIP(control, tooltipStr) QToolTip::add(control, tooltipStr);
#endif

#endif
class MYODBCSetupCheckBox : public QCheckBox
{
    Q_OBJECT

public:
    MYODBCSetupCheckBox( const QString &stringText, QWidget *pwidgetParent = 0 );

    void setAssistText( const QString &stringText );

    QString getAssistText();

signals:
    void signalAssistText( const QString &stringText );

protected:
    QString stringAssistText;

    void focusInEvent( QFocusEvent *e );
    void focusOutEvent( QFocusEvent *e );
};

#endif

