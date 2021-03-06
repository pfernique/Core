#include "_core.h"

namespace autowig
{
    typedef ::statiskit::BetaCompoundDiscreteUnivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::BetaCompoundDiscreteUnivariateDistribution::BetaCompoundDiscreteUnivariateDistribution;

            typedef unsigned int  return_type_cf22030de03557b1aef636a8696154de;
            virtual return_type_cf22030de03557b1aef636a8696154de get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_cf22030de03557b1aef636a8696154de, class_type, get_nb_parameters, ); };
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_9b1e41d78cb15fb485b076a8136faf6b;
            virtual return_type_9b1e41d78cb15fb485b076a8136faf6b simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_9b1e41d78cb15fb485b076a8136faf6b, class_type, simulate, ); };
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };
            typedef double  return_type_e743676180d85397828cc79f44d4d185;
            typedef int const & param_e743676180d85397828cc79f44d4d185_0_type;
            virtual return_type_e743676180d85397828cc79f44d4d185 pdf(param_e743676180d85397828cc79f44d4d185_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e743676180d85397828cc79f44d4d185, class_type, pdf, param_0); };
            typedef double  return_type_e31fb7a7a5b852af9574d7d8bac3da21;
            typedef int const & param_e31fb7a7a5b852af9574d7d8bac3da21_0_type;
            virtual return_type_e31fb7a7a5b852af9574d7d8bac3da21 ldf(param_e31fb7a7a5b852af9574d7d8bac3da21_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e31fb7a7a5b852af9574d7d8bac3da21, class_type, ldf, param_0); };
            typedef double  return_type_c3377d2e9b535f76985d786c2f3a6fe0;
            typedef struct ::statiskit::UnivariateEvent const * param_c3377d2e9b535f76985d786c2f3a6fe0_0_type;
            typedef bool const & param_c3377d2e9b535f76985d786c2f3a6fe0_1_type;
            virtual return_type_c3377d2e9b535f76985d786c2f3a6fe0 probability(param_c3377d2e9b535f76985d786c2f3a6fe0_0_type param_0, param_c3377d2e9b535f76985d786c2f3a6fe0_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3377d2e9b535f76985d786c2f3a6fe0, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}

double const & (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_aa65e59810c1571d8fbed02f3b5f63e8)()const= &::statiskit::BetaCompoundDiscreteUnivariateDistribution::get_alpha;
void  (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_6c9c4a4147e55bfbbf1c2244d715d0f0)(double const &)= &::statiskit::BetaCompoundDiscreteUnivariateDistribution::set_alpha;
double const & (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_4d3f934733425bf2a2ad74c54ad78ca1)()const= &::statiskit::BetaCompoundDiscreteUnivariateDistribution::get_gamma;
void  (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_2575ec00accd5909a8e72c6c46d12645)(double const &)= &::statiskit::BetaCompoundDiscreteUnivariateDistribution::set_gamma;

namespace autowig {
}

void wrapper_ef06cd7866a05e8a9b9f746a2f9da324(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BetaCompoundDiscreteUnivariateDistribution, autowig::Trampoline, autowig::HolderType< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type, struct ::statiskit::DiscreteUnivariateDistribution > class_ef06cd7866a05e8a9b9f746a2f9da324(module, "BetaCompoundDiscreteUnivariateDistribution", "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def(pybind11::init<  >());
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("get_alpha", method_pointer_aa65e59810c1571d8fbed02f3b5f63e8, pybind11::return_value_policy::copy, "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("set_alpha", method_pointer_6c9c4a4147e55bfbbf1c2244d715d0f0, "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("get_gamma", method_pointer_4d3f934733425bf2a2ad74c54ad78ca1, pybind11::return_value_policy::copy, "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("set_gamma", method_pointer_2575ec00accd5909a8e72c6c46d12645, "");

}