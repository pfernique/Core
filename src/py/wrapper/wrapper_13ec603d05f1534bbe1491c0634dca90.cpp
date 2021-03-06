#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDispersionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDispersionEstimation::MultivariateDispersionEstimation;

            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & return_type_f90e89297ac2541ca0716c5f01e71bb0;
            virtual return_type_f90e89297ac2541ca0716c5f01e71bb0 get_dispersion() const override { PYBIND11_OVERLOAD_PURE(return_type_f90e89297ac2541ca0716c5f01e71bb0, class_type, get_dispersion, ); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultivariateDispersionEstimation::*method_pointer_ebec9ac7b6a4561290c4d11e2dc97512)()const= &::statiskit::MultivariateDispersionEstimation::get_location;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::MultivariateDispersionEstimation::*method_pointer_f90e89297ac2541ca0716c5f01e71bb0)()const= &::statiskit::MultivariateDispersionEstimation::get_dispersion;

namespace autowig {
}

void wrapper_13ec603d05f1534bbe1491c0634dca90(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateDispersionEstimation, autowig::Trampoline, autowig::HolderType< class ::statiskit::MultivariateDispersionEstimation >::Type > class_13ec603d05f1534bbe1491c0634dca90(module, "MultivariateDispersionEstimation", "");
    class_13ec603d05f1534bbe1491c0634dca90.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_13ec603d05f1534bbe1491c0634dca90.def("get_location", method_pointer_ebec9ac7b6a4561290c4d11e2dc97512, pybind11::return_value_policy::copy, "");
    class_13ec603d05f1534bbe1491c0634dca90.def("get_dispersion", method_pointer_f90e89297ac2541ca0716c5f01e71bb0, pybind11::return_value_policy::copy, "");

}