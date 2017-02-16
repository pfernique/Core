#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > const volatile * get_pointer<class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > const volatile >(class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_48d411e601675e49961eaa93daeb1835()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::CensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_2fd4e8997a7a5414ac0e46ac51b34d56)() const = &::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >::get_event;
    class ::std::vector< int, class ::std::allocator< int > > const & (::statiskit::CensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_6c71e4c59ca95bb8b1753b4b2642706f)() const = &::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >::get_values;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::CensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_6579b64a45055c4c881b20d701684074)() const = &::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >::copy;
    boost::python::class_< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_48d411e601675e49961eaa93daeb1835("_CensoredEvent_48d411e601675e49961eaa93daeb1835", "", boost::python::no_init);
    class_48d411e601675e49961eaa93daeb1835.def(boost::python::init< class ::std::vector< int, class ::std::allocator< int > > const & >(""));
    class_48d411e601675e49961eaa93daeb1835.def(boost::python::init< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_48d411e601675e49961eaa93daeb1835.def("get_event", method_pointer_2fd4e8997a7a5414ac0e46ac51b34d56, "");
    class_48d411e601675e49961eaa93daeb1835.def("get_values", method_pointer_6c71e4c59ca95bb8b1753b4b2642706f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_48d411e601675e49961eaa93daeb1835.def("copy", method_pointer_6579b64a45055c4c881b20d701684074, "");

    if(autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
    }

}