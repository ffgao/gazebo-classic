#include "OgreCamera.hh"
#include "ViewController.hh"

using namespace gazebo;

////////////////////////////////////////////////////////////////////////////////
// Constructor
ViewController::ViewController(OgreCamera *camera)
  : camera(camera)
{
}

////////////////////////////////////////////////////////////////////////////////
/// Destructor
ViewController::~ViewController()
{
}