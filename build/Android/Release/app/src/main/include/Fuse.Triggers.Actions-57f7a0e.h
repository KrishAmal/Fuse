// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Launcher.InterApp/1.2.0/interapp/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchUri;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchUri :94
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof();
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target);
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval);
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value);

struct LaunchUri : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Uri;

    uString* Uri();
    void Uri(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions