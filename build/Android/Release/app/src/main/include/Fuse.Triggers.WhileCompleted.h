// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileCompleted;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileCompleted :3946
// {
::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();
void WhileCompleted__IsCompleted_fn(::g::Fuse::Visual* n, bool* __retval);
void WhileCompleted__OnRooted_fn(WhileCompleted* __this);
void WhileCompleted__SetState_fn(::g::Fuse::Visual* n, bool* paused);

struct WhileCompleted : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileCompletedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileCompletedProp() { return WhileCompleted_typeof()->Init(), _whileCompletedProp_; }

    static bool IsCompleted(::g::Fuse::Visual* n);
    static void SetState(::g::Fuse::Visual* n, bool paused);
};
// }

}}} // ::g::Fuse::Triggers
