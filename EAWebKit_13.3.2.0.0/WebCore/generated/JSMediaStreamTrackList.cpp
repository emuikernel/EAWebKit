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

#if ENABLE(MEDIA_STREAM)

#include "JSMediaStreamTrackList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMediaStreamTrack.h"
#include "MediaStreamTrack.h"
#include "MediaStreamTrackList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMediaStreamTrackList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamTrackListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamTrackListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamTrackListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamTrackListTable = { 5, 3, JSMediaStreamTrackListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamTrackListConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamTrackListConstructorTable = { 1, 0, JSMediaStreamTrackListConstructorTableValues, 0 };
class JSMediaStreamTrackListConstructor : public DOMConstructorObject {
private:
    JSMediaStreamTrackListConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamTrackListConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamTrackListConstructor* ptr = new (JSC::allocateCell<JSMediaStreamTrackListConstructor>(*exec->heap())) JSMediaStreamTrackListConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSMediaStreamTrackListConstructor::s_info = { "MediaStreamTrackListConstructor", &DOMConstructorObject::s_info, &JSMediaStreamTrackListConstructorTable, 0 };

JSMediaStreamTrackListConstructor::JSMediaStreamTrackListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamTrackListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSMediaStreamTrackListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSMediaStreamTrackListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaStreamTrackListConstructor, JSDOMWrapper>(exec, &JSMediaStreamTrackListConstructorTable, this, propertyName, slot);
}

bool JSMediaStreamTrackListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMediaStreamTrackListConstructor, JSDOMWrapper>(exec, &JSMediaStreamTrackListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamTrackListPrototypeTableValues[] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMediaStreamTrackListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamTrackListPrototypeTable = { 2, 1, JSMediaStreamTrackListPrototypeTableValues, 0 };
const ClassInfo JSMediaStreamTrackListPrototype::s_info = { "MediaStreamTrackListPrototype", &JSC::JSNonFinalObject::s_info, &JSMediaStreamTrackListPrototypeTable, 0 };

JSObject* JSMediaStreamTrackListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamTrackList>(exec, globalObject);
}

bool JSMediaStreamTrackListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSMediaStreamTrackListPrototypeTable, this, propertyName, slot);
}

bool JSMediaStreamTrackListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMediaStreamTrackListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSMediaStreamTrackList::s_info = { "MediaStreamTrackList", &JSDOMWrapper::s_info, &JSMediaStreamTrackListTable, 0 };

JSMediaStreamTrackList::JSMediaStreamTrackList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamTrackList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSMediaStreamTrackList::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSMediaStreamTrackList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMediaStreamTrackListPrototype::create(exec->globalData(), globalObject, JSMediaStreamTrackListPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSMediaStreamTrackList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSMediaStreamTrackListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<MediaStreamTrackList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSMediaStreamTrackList, Base>(exec, &JSMediaStreamTrackListTable, this, propertyName, slot);
}

bool JSMediaStreamTrackList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSMediaStreamTrackListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<MediaStreamTrackList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSMediaStreamTrackList, Base>(exec, &JSMediaStreamTrackListTable, this, propertyName, descriptor);
}

bool JSMediaStreamTrackList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<MediaStreamTrackList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsMediaStreamTrackListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaStreamTrackList* castedThis = static_cast<JSMediaStreamTrackList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStreamTrackList* imp = static_cast<MediaStreamTrackList*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsMediaStreamTrackListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaStreamTrackList* domObject = static_cast<JSMediaStreamTrackList*>(asObject(slotBase));
    return JSMediaStreamTrackList::getConstructor(exec, domObject->globalObject());
}

void JSMediaStreamTrackList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<MediaStreamTrackList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSMediaStreamTrackList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamTrackListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaStreamTrackList::s_info))
        return throwVMTypeError(exec);
    JSMediaStreamTrackList* castedThis = static_cast<JSMediaStreamTrackList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMediaStreamTrackList::s_info);
    MediaStreamTrackList* imp = static_cast<MediaStreamTrackList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSMediaStreamTrackList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSMediaStreamTrackList* thisObj = static_cast<JSMediaStreamTrackList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<MediaStreamTrackList*>(thisObj->impl())->item(index));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaStreamTrackList* impl)
{
    return wrap<JSMediaStreamTrackList>(exec, globalObject, impl);
}

MediaStreamTrackList* toMediaStreamTrackList(JSC::JSValue value)
{
    return value.inherits(&JSMediaStreamTrackList::s_info) ? static_cast<JSMediaStreamTrackList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_STREAM)