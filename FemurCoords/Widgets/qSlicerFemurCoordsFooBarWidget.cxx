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

// FooBar Widgets includes
#include "qSlicerFemurCoordsFooBarWidget.h"
#include "ui_qSlicerFemurCoordsFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_FemurCoords
class qSlicerFemurCoordsFooBarWidgetPrivate
  : public Ui_qSlicerFemurCoordsFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerFemurCoordsFooBarWidget);
protected:
  qSlicerFemurCoordsFooBarWidget* const q_ptr;

public:
  qSlicerFemurCoordsFooBarWidgetPrivate(
    qSlicerFemurCoordsFooBarWidget& object);
  virtual void setupUi(qSlicerFemurCoordsFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerFemurCoordsFooBarWidgetPrivate
::qSlicerFemurCoordsFooBarWidgetPrivate(
  qSlicerFemurCoordsFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerFemurCoordsFooBarWidgetPrivate
::setupUi(qSlicerFemurCoordsFooBarWidget* widget)
{
  this->Ui_qSlicerFemurCoordsFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerFemurCoordsFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerFemurCoordsFooBarWidget
::qSlicerFemurCoordsFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerFemurCoordsFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerFemurCoordsFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerFemurCoordsFooBarWidget
::~qSlicerFemurCoordsFooBarWidget()
{
}
