// GNU General Public License Agreement
// Copyright (C) 2015-2016 Daniele Berto daniele.fratello@gmail.com
//
// CollSoft is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software Foundation.
// You must retain a copy of this licence in all copies.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU General Public License for more details.
// ---------------------------------------------------------------------------------

#ifndef ALLDRIVERSETTINGSCHECK_H
#define ALLDRIVERSETTINGSCHECK_H

//This class displays a panel like "Are you sure to ... ? Okay/Cancel" to the user

#include <QDialog>

namespace Ui {
class AllDriverSettingsCheck;
}

class AllDriverSettingsCheck : public QDialog
{
    Q_OBJECT

public:
    explicit AllDriverSettingsCheck(QString parameters, QWidget *parent = 0);
    ~AllDriverSettingsCheck();

private:
    Ui::AllDriverSettingsCheck *ui;
};

#endif // ALLDRIVERSETTINGSCHECK_H
