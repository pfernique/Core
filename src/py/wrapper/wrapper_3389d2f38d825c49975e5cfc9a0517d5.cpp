#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_0388db40fe585921af9148fd9208197d;
            virtual return_type_0388db40fe585921af9148fd9208197d copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_0388db40fe585921af9148fd9208197d, class_type, copy, ); };
            typedef double  return_type_17d4a13bc764561299d331907516003f;
            virtual return_type_17d4a13bc764561299d331907516003f get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_17d4a13bc764561299d331907516003f, class_type, get_variance, ); };
            typedef double  return_type_cb42091f4cb35419b13eb0e0c27eb470;
            virtual return_type_cb42091f4cb35419b13eb0e0c27eb470 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_cb42091f4cb35419b13eb0e0c27eb470, class_type, get_mean, ); };
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };
            typedef double  return_type_3e9327a27cc259a1a813cf253bd84642;
            typedef double const & param_3e9327a27cc259a1a813cf253bd84642_0_type;
            virtual return_type_3e9327a27cc259a1a813cf253bd84642 cdf(param_3e9327a27cc259a1a813cf253bd84642_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3e9327a27cc259a1a813cf253bd84642, class_type, cdf, param_0); };
            typedef double  return_type_30c20faf3f5a515d9541c73f1eb020df;
            typedef double const & param_30c20faf3f5a515d9541c73f1eb020df_0_type;
            virtual return_type_30c20faf3f5a515d9541c73f1eb020df pdf(param_30c20faf3f5a515d9541c73f1eb020df_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_30c20faf3f5a515d9541c73f1eb020df, class_type, pdf, param_0); };
            typedef double  return_type_2843df1d3dc6596aaccccc3a0dd5da36;
            typedef double const & param_2843df1d3dc6596aaccccc3a0dd5da36_0_type;
            virtual return_type_2843df1d3dc6596aaccccc3a0dd5da36 ldf(param_2843df1d3dc6596aaccccc3a0dd5da36_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_2843df1d3dc6596aaccccc3a0dd5da36, class_type, ldf, param_0); };
            typedef double  return_type_c3090cef11805fc1858df60ff42a7c43;
            typedef struct ::statiskit::UnivariateEvent const * param_c3090cef11805fc1858df60ff42a7c43_0_type;
            typedef bool const & param_c3090cef11805fc1858df60ff42a7c43_1_type;
            virtual return_type_c3090cef11805fc1858df60ff42a7c43 probability(param_c3090cef11805fc1858df60ff42a7c43_0_type param_0, param_c3090cef11805fc1858df60ff42a7c43_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3090cef11805fc1858df60ff42a7c43, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}


namespace autowig {
}

void wrapper_3389d2f38d825c49975e5cfc9a0517d5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type, struct ::statiskit::ContinuousUnivariateDistribution > class_3389d2f38d825c49975e5cfc9a0517d5(module, "_PolymorphicCopy_3389d2f38d825c49975e5cfc9a0517d5", "");
    class_3389d2f38d825c49975e5cfc9a0517d5.def(pybind11::init<  >());

}