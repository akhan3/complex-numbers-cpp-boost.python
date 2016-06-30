#include <boost/python.hpp>

// #include <boost/python/operators.hpp>
// #include <boost/python/class.hpp>
// #include <boost/python/module.hpp>

// #include <boost/python/def.hpp>
// #include <boost/operators.hpp>

#include "Cmpx.h"                 // Cmpx main header

using namespace boost::python;
// using interval::straddles_zero;

BOOST_PYTHON_MODULE(cmpx_mod)
{
    class_<Cmpx>("Cmpx", init<>())
        .def(init<double>())
        .def(init<double, double>())
        .def(double() + self)
        .def(self_ns::str(self))
    ;
}

//     Cmpx operator+(const Cmpx z) const;
//     Cmpx operator+(const double x) const;
//     friend Cmpx operator+(const double x, const Cmpx z);

