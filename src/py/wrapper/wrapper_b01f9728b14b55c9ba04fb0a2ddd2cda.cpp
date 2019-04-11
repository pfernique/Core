#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_0cfbeb46728f5e3393b2f59c4a91a99d;
            typedef ::statiskit::MultivariateDistributionEstimation::data_type const & param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type;
            typedef bool const & param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type;
            virtual return_type_0cfbeb46728f5e3393b2f59c4a91a99d operator()(param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type param_0, param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_0cfbeb46728f5e3393b2f59c4a91a99d, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}


namespace autowig {
}

void wrapper_b01f9728b14b55c9ba04fb0a2ddd2cda(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > class_b01f9728b14b55c9ba04fb0a2ddd2cda(module, "Estimator", "");

}