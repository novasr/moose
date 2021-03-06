/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#include "ElementVectorPostprocessor.h"

template<>
InputParameters validParams<ElementVectorPostprocessor>()
{
  InputParameters params = validParams<ElementUserObject>();
  params += validParams<VectorPostprocessor>();
  return params;
}

ElementVectorPostprocessor::ElementVectorPostprocessor(const std::string & name, InputParameters parameters) :
    ElementUserObject(name, parameters),
    VectorPostprocessor(name, parameters)
{
}
