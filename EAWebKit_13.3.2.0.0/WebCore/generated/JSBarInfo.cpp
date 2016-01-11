/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSBarInfo.h"

#include "BarInfo.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSBarInfo);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSBarInfoTableValues[] =
{
    { "visible", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBarInfoVisible), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSBarInfoTable = { 2, 1, JSBarInfoTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSBarInfoPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSBarInfoPrototypeTable = { 1, 0, JSBarInfoPrototypeTableValues, 0 };
const ClassInfo JSBarInfoPrototype::s_info = { "BarInfoPrototype", &JSC::JSNonFinalObject::s_info, &JSBarInfoPrototypeTable, 0 };

JSObject* JSBarInfoPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBarInfo>(exec, globalObject);
}

const ClassInfo JSBarInfo::s_info = { "BarInfo", &JSDOMWrapper::s_info, &JSBarInfoTable, 0 };

JSBarInfo::JSBarInfo(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<BarInfo> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSBarInfo::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSBarInfo::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSBarInfoPrototype::create(exec->globalData(), globalObject, JSBarInfoPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSBarInfo::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSBarInfo, Base>(exec, &JSBarInfoTable, this, propertyName, slot);
}

bool JSBarInfo::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSBarInfo, Base>(exec, &JSBarInfoTable, this, propertyName, descriptor);
}

JSValue jsBarInfoVisible(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSBarInfo* castedThis = static_cast<JSBarInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BarInfo* imp = static_cast<BarInfo*>(castedThis->impl());
    JSValue result = jsBoolean(imp->visible());
    return result;
}


static inline bool isObservable(JSBarInfo* jsBarInfo)
{
    if (jsBarInfo->hasCustomProperties())
        return true;
    return false;
}

bool JSBarInfoOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSBarInfo* jsBarInfo = static_cast<JSBarInfo*>(handle.get().asCell());
    if (!isObservable(jsBarInfo))
        return false;
    Frame* root = jsBarInfo->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSBarInfoOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSBarInfo* jsBarInfo = static_cast<JSBarInfo*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsBarInfo->impl(), jsBarInfo);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, BarInfo* impl)
{
    return wrap<JSBarInfo>(exec, globalObject, impl);
}

BarInfo* toBarInfo(JSC::JSValue value)
{
    return value.inherits(&JSBarInfo::s_info) ? static_cast<JSBarInfo*>(asObject(value))->impl() : 0;
}

}
