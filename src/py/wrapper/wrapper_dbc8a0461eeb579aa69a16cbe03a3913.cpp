#include "_core.h"


namespace autowig {
}

void wrapper_dbc8a0461eeb579aa69a16cbe03a3913(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::BinomialDistributionMMEstimation, autowig::HolderType< struct ::statiskit::BinomialDistributionMMEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_dbc8a0461eeb579aa69a16cbe03a3913(module, "BinomialDistributionMMEstimation", "");
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(pybind11::init<  >());
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(pybind11::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(pybind11::init< struct ::statiskit::BinomialDistributionMMEstimation const & >());

}