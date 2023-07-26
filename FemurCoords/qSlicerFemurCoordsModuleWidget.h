/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerFemurCoordsModuleWidget_h
#define __qSlicerFemurCoordsModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerFemurCoordsModuleExport.h"

class qSlicerFemurCoordsModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_FEMURCOORDS_EXPORT qSlicerFemurCoordsModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerFemurCoordsModuleWidget(QWidget *parent=0);
  virtual ~qSlicerFemurCoordsModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerFemurCoordsModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerFemurCoordsModuleWidget);
  Q_DISABLE_COPY(qSlicerFemurCoordsModuleWidget);
};

#endif
