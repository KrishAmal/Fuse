// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/source/uno/graphics/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct VertexAttributeInfo;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public struct VertexAttributeInfo :1634
// {
uStructType* VertexAttributeInfo_typeof();

struct VertexAttributeInfo
{
    int Type;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Buffer;
    int BufferStride;
    int BufferOffset;
};
// }

}}} // ::g::Uno::Graphics
