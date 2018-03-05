/******************************************************************************
  This file is part of PyTango (http://pytango.rtfd.io)

  Copyright 2006-2012 CELLS / ALBA Synchrotron, Bellaterra, Spain
  Copyright 2013-2014 European Synchrotron Radiation Facility, Grenoble, France

  Distributed under the terms of the GNU Lesser General Public License,
  either version 3 of the License, or (at your option) any later version.
  See LICENSE.txt for more info.
******************************************************************************/

#include <tango.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void export_attribute_dimension(py::module &m) {
    py::class_<Tango::AttributeDimension>(m, "AttributeDimension")
        .def_readonly("dim_x", &Tango::AttributeDimension::dim_x)
        .def_readonly("dim_y", &Tango::AttributeDimension::dim_y)
    ;
}
