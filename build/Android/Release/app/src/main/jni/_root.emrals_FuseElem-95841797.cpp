// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseElem-95841797.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseElementsElement_Visibility_Property :40
// {
static void emrals_FuseElementsElement_Visibility_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::emrals_FuseElementsElement_Visibility_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseElementsElement_Visibility_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseElementsElement_Visibility_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseElementsElement_Visibility_Property", options);
    type->fp_build_ = emrals_FuseElementsElement_Visibility_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseElementsElement_Visibility_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseElementsElement_Visibility_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseElementsElement_Visibility_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_FuseElementsElement_Visibility_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public emrals_FuseElementsElement_Visibility_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :43
void emrals_FuseElementsElement_Visibility_Property__ctor_3_fn(emrals_FuseElementsElement_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Visibility Get(Uno.UX.PropertyObject obj) :45
void emrals_FuseElementsElement_Visibility_Property__Get1_fn(emrals_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Visibility(), void();
}

// public emrals_FuseElementsElement_Visibility_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :43
void emrals_FuseElementsElement_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, emrals_FuseElementsElement_Visibility_Property** __retval)
{
    *__retval = emrals_FuseElementsElement_Visibility_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :44
void emrals_FuseElementsElement_Visibility_Property__get_Object_fn(emrals_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Visibility v, Uno.UX.IPropertyListener origin) :46
void emrals_FuseElementsElement_Visibility_Property__Set1_fn(emrals_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->SetVisibility(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :47
void emrals_FuseElementsElement_Visibility_Property__get_SupportsOriginSetter_fn(emrals_FuseElementsElement_Visibility_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public emrals_FuseElementsElement_Visibility_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :43
void emrals_FuseElementsElement_Visibility_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseElementsElement_Visibility_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :43
emrals_FuseElementsElement_Visibility_Property* emrals_FuseElementsElement_Visibility_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseElementsElement_Visibility_Property* obj1 = (emrals_FuseElementsElement_Visibility_Property*)uNew(emrals_FuseElementsElement_Visibility_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g