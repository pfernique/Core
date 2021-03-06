#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousEvent::ContinuousEvent;

            typedef enum ::statiskit::outcome_type  return_type_e273d319eb365120b28ccc9993bd199b;
            virtual return_type_e273d319eb365120b28ccc9993bd199b get_outcome() const override { PYBIND11_OVERLOAD(return_type_e273d319eb365120b28ccc9993bd199b, class_type, get_outcome, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_963689b729ca55bb9ee4a8fbb5e871c0;
            virtual return_type_963689b729ca55bb9ee4a8fbb5e871c0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_963689b729ca55bb9ee4a8fbb5e871c0, class_type, copy, ); };
            typedef enum ::statiskit::event_type  return_type_3544ff3ce8685011b1261f19fcf546be;
            virtual return_type_3544ff3ce8685011b1261f19fcf546be get_event() const override { PYBIND11_OVERLOAD_PURE(return_type_3544ff3ce8685011b1261f19fcf546be, class_type, get_event, ); };
    };
}


namespace autowig {
}

void wrapper_69ca358c24cd5cabb1a6b9e1358519e4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousEvent >::Type, struct ::statiskit::UnivariateEvent > class_69ca358c24cd5cabb1a6b9e1358519e4(module, "ContinuousEvent", "");

}