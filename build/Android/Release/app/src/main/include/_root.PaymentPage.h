// This file was generated based on '.uno/ux11/PaymentPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PaymentPage;}

namespace g{

// public partial sealed class PaymentPage :2
// {
::g::Fuse::Controls::Panel_type* PaymentPage_typeof();
void PaymentPage__ctor_8_fn(PaymentPage* __this, ::g::Fuse::Navigation::Router* router1);
void PaymentPage__InitializeUX_fn(PaymentPage* __this);
void PaymentPage__New5_fn(::g::Fuse::Navigation::Router* router1, PaymentPage** __retval);

struct PaymentPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return PaymentPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PaymentPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return PaymentPage_typeof()->Init(), __selector1_; }
    static uSStrong< ::g::Fuse::Font*> Cat_;
    static uSStrong< ::g::Fuse::Font*>& Cat() { return PaymentPage_typeof()->Init(), Cat_; }
    static uSStrong< ::g::Fuse::Font*> Dog_;
    static uSStrong< ::g::Fuse::Font*>& Dog() { return PaymentPage_typeof()->Init(), Dog_; }
    static uSStrong< ::g::Fuse::Font*> Horse_;
    static uSStrong< ::g::Fuse::Font*>& Horse() { return PaymentPage_typeof()->Init(), Horse_; }
    static uSStrong< ::g::Fuse::Font*> Mouse_;
    static uSStrong< ::g::Fuse::Font*>& Mouse() { return PaymentPage_typeof()->Init(), Mouse_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb27;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb28;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb29;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb30;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static PaymentPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
