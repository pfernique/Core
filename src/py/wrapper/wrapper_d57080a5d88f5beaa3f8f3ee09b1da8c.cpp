#include "_core.h"


namespace autowig {
}

void wrapper_d57080a5d88f5beaa3f8f3ee09b1da8c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::LogarithmicDistributionMLEstimation, autowig::HolderType< struct ::statiskit::LogarithmicDistributionMLEstimation >::Type, struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_d57080a5d88f5beaa3f8f3ee09b1da8c(module, "LogarithmicDistributionMLEstimation", "");
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(pybind11::init<  >());
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(pybind11::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(pybind11::init< struct ::statiskit::LogarithmicDistributionMLEstimation const & >());

}