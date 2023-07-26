/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerFemurCoordsFooBarWidget_h
#define __qSlicerFemurCoordsFooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerFemurCoordsModuleWidgetsExport.h"

class qSlicerFemurCoordsFooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_FemurCoords
class Q_SLICER_MODULE_FEMURCOORDS_WIDGETS_EXPORT qSlicerFemurCoordsFooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerFemurCoordsFooBarWidget(QWidget *parent=0);
  ~qSlicerFemurCoordsFooBarWidget() override;

protected slots:

protected:
  QScopedPointer<qSlicerFemurCoordsFooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerFemurCoordsFooBarWidget);
  Q_DISABLE_COPY(qSlicerFemurCoordsFooBarWidget);
};

#endif
