// This file was generated based on '.uno/ux11/ImpactThankYouPage.g.uno'.
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
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ImpactThankYouPage;}

namespace g{

// public partial sealed class ImpactThankYouPage :2
// {
::g::Fuse::Controls::Panel_type* ImpactThankYouPage_typeof();
void ImpactThankYouPage__ctor_8_fn(ImpactThankYouPage* __this, ::g::Fuse::Navigation::Router* router1);
void ImpactThankYouPage__InitializeUX_fn(ImpactThankYouPage* __this);
void ImpactThankYouPage__New5_fn(::g::Fuse::Navigation::Router* router1, ImpactThankYouPage** __retval);

struct ImpactThankYouPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ImpactThankYouPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ImpactThankYouPage_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb22;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb23;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static ImpactThankYouPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
