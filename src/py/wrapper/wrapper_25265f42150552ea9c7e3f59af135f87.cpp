#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::SlopeHeuristicHuberSolver, class ::statiskit::SlopeHeuristicIWLSSolver > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::SlopeHeuristicHuberSolver, class ::statiskit::SlopeHeuristicIWLSSolver >::PolymorphicCopy;


        protected:
            typedef void  return_type_5339015f18e1581c8a543e2e79fa15bc;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_5339015f18e1581c8a543e2e79fa15bc_0_type;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_5339015f18e1581c8a543e2e79fa15bc_1_type;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_5339015f18e1581c8a543e2e79fa15bc_2_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_5339015f18e1581c8a543e2e79fa15bc_3_type;
            virtual return_type_5339015f18e1581c8a543e2e79fa15bc update(param_5339015f18e1581c8a543e2e79fa15bc_0_type param_0, param_5339015f18e1581c8a543e2e79fa15bc_1_type param_1, param_5339015f18e1581c8a543e2e79fa15bc_2_type param_2, param_5339015f18e1581c8a543e2e79fa15bc_3_type param_3) const override { PYBIND11_OVERLOAD_PURE(return_type_5339015f18e1581c8a543e2e79fa15bc, class_type, update, param_0, param_1, param_2, param_3); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}


namespace autowig {
}

void wrapper_25265f42150552ea9c7e3f59af135f87(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicHuberSolver, class ::statiskit::SlopeHeuristicIWLSSolver >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicHuberSolver, class ::statiskit::SlopeHeuristicIWLSSolver > >::Type, class ::statiskit::SlopeHeuristicIWLSSolver > class_25265f42150552ea9c7e3f59af135f87(module, "_PolymorphicCopy_25265f42150552ea9c7e3f59af135f87", "");
    class_25265f42150552ea9c7e3f59af135f87.def(pybind11::init<  >());
    class_25265f42150552ea9c7e3f59af135f87.def("_update", static_cast< void  (::statiskit::SlopeHeuristicIWLSSolver::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::update), "");

}