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

// FemurCoords Logic includes
#include <vtkSlicerFemurCoordsLogic.h>

// FemurCoords includes
#include "qSlicerFemurCoordsModule.h"
#include "qSlicerFemurCoordsModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFemurCoordsModulePrivate
{
public:
  qSlicerFemurCoordsModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerFemurCoordsModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerFemurCoordsModulePrivate::qSlicerFemurCoordsModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerFemurCoordsModule methods

//-----------------------------------------------------------------------------
qSlicerFemurCoordsModule::qSlicerFemurCoordsModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerFemurCoordsModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerFemurCoordsModule::~qSlicerFemurCoordsModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerFemurCoordsModule::helpText() const
{
  return "This is a loadable module for the identification of femoral landmarks, axes, planes and bone coordinate systems using a 3D surface model.";
}

//-----------------------------------------------------------------------------
QString qSlicerFemurCoordsModule::acknowledgementText() const
{
  return "This work was inspired by [Fischer 2020] Fischer et al. - A robust method for automatic identification of femoral landmarks, axes, planes and bone coordinate systems using surface models. Scientific Reports, https://doi.org/10.1038/s41598-020-77479-z (2020)";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFemurCoordsModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("Zhao Youjun (FuturTec Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerFemurCoordsModule::icon() const
{
  return QIcon(":/Icons/FemurCoords.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerFemurCoordsModule::categories() const
{
  return QStringList() << "Surgical Robot";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFemurCoordsModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerFemurCoordsModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerFemurCoordsModule
::createWidgetRepresentation()
{
  return new qSlicerFemurCoordsModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerFemurCoordsModule::createLogic()
{
  return vtkSlicerFemurCoordsLogic::New();
}
