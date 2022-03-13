/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pdu_to_nmea.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3fe43fd8e729063a0ce0d072867f8c11)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/ais/pdu_to_nmea.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_to_nmea_pydoc.h>

void bind_pdu_to_nmea(py::module& m)
{

    using pdu_to_nmea    = ::gr::ais::pdu_to_nmea;


    py::class_<pdu_to_nmea, gr::block, gr::basic_block,
        std::shared_ptr<pdu_to_nmea>>(m, "pdu_to_nmea", D(pdu_to_nmea))

        .def(py::init(&pdu_to_nmea::make),
           py::arg("designator"),
           D(pdu_to_nmea,make)
        )
        


        
        .def("to_nmea",&pdu_to_nmea::to_nmea,       
            py::arg("arg0"),
            D(pdu_to_nmea,to_nmea)
        )


        
        .def("print",&pdu_to_nmea::print,       
            py::arg("arg0"),
            D(pdu_to_nmea,print)
        )



        ;




}








