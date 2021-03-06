// add_matrix.h
//
// Add a Rivendell Matrix
//
//   (C) Copyright 2002-2019 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef ADD_MATRIX_H
#define ADD_MATRIX_H

#include <qcombobox.h>
#include <qspinbox.h>

#include <rddialog.h>
#include <rduser.h>

class AddMatrix : public RDDialog
{
 Q_OBJECT
 public:
  AddMatrix(QString station,QWidget *parent=0);
  QSize sizeHint() const;
  QSizePolicy sizePolicy() const;

 private slots:
  void okData();
  void cancelData();

 private:
  int GetNextMatrix();
  QComboBox *add_type_box; 
  QSpinBox *add_matrix_box;
  QString add_station;
};


#endif

