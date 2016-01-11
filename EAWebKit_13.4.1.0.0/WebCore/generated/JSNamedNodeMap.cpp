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
#include "JSNamedNodeMap.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "NamedNodeMap.h"
#include "Node.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNamedNodeMap);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNamedNodeMapTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNamedNodeMapLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNamedNodeMapConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNamedNodeMapTable = { 5, 3, JSNamedNodeMapTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNamedNodeMapConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNamedNodeMapConstructorTable = { 1, 0, JSNamedNodeMapConstructorTableValues, 0 };
class JSNamedNodeMapConstructor : public DOMConstructorObject {
private:
    JSNamedNodeMapConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSNamedNodeMapConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSNamedNodeMapConstructor* ptr = new (JSC::allocateCell<JSNamedNodeMapConstructor>(*exec->heap())) JSNamedNodeMapConstructor(structure, globalObject);
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

const ClassInfo JSNamedNodeMapConstructor::s_info = { "NamedNodeMapConstructor", &DOMConstructorObject::s_info, &JSNamedNodeMapConstructorTable, 0 };

JSNamedNodeMapConstructor::JSNamedNodeMapConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNamedNodeMapConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSNamedNodeMapPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSNamedNodeMapConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNamedNodeMapConstructor, JSDOMWrapper>(exec, &JSNamedNodeMapConstructorTable, this, propertyName, slot);
}

bool JSNamedNodeMapConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNamedNodeMapConstructor, JSDOMWrapper>(exec, &JSNamedNodeMapConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNamedNodeMapPrototypeTableValues[] =
{
    { "getNamedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionGetNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setNamedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionSetNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "removeNamedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionRemoveNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getNamedItemNS", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionGetNamedItemNS), (intptr_t)2 THUNK_GENERATOR(0) },
    { "setNamedItemNS", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionSetNamedItemNS), (intptr_t)1 THUNK_GENERATOR(0) },
    { "removeNamedItemNS", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNamedNodeMapPrototypeFunctionRemoveNamedItemNS), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNamedNodeMapPrototypeTable = { 16, 15, JSNamedNodeMapPrototypeTableValues, 0 };
const ClassInfo JSNamedNodeMapPrototype::s_info = { "NamedNodeMapPrototype", &JSC::JSNonFinalObject::s_info, &JSNamedNodeMapPrototypeTable, 0 };

JSObject* JSNamedNodeMapPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNamedNodeMap>(exec, globalObject);
}

bool JSNamedNodeMapPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNamedNodeMapPrototypeTable, this, propertyName, slot);
}

bool JSNamedNodeMapPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNamedNodeMapPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNamedNodeMap::s_info = { "NamedNodeMap", &JSDOMWrapper::s_info, &JSNamedNodeMapTable, 0 };

JSNamedNodeMap::JSNamedNodeMap(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NamedNodeMap> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSNamedNodeMap::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSNamedNodeMap::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSNamedNodeMapPrototype::create(exec->globalData(), globalObject, JSNamedNodeMapPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSNamedNodeMap::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    JSValue proto = prototype();
    if (proto.isObject() && static_cast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = JSNamedNodeMapTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<NamedNodeMap*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<NamedNodeMap*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSNamedNodeMap, Base>(exec, &JSNamedNodeMapTable, this, propertyName, slot);
}

bool JSNamedNodeMap::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    JSValue proto = prototype();
    if (proto.isObject() && static_cast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = JSNamedNodeMapTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<NamedNodeMap*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<NamedNodeMap*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSNamedNodeMap, Base>(exec, &JSNamedNodeMapTable, this, propertyName, descriptor);
}

bool JSNamedNodeMap::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<NamedNodeMap*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsNamedNodeMapLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsNamedNodeMapConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNamedNodeMap* domObject = static_cast<JSNamedNodeMap*>(asObject(slotBase));
    return JSNamedNodeMap::getConstructor(exec, domObject->globalObject());
}

void JSNamedNodeMap::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<NamedNodeMap*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSNamedNodeMap::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNamedNodeMapConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionGetNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getNamedItem(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionSetNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->setNamedItem(node, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionRemoveNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->removeNamedItem(name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionGetNamedItemNS(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& localName(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getNamedItemNS(namespaceURI, localName)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionSetNamedItemNS(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->setNamedItemNS(node, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNamedNodeMapPrototypeFunctionRemoveNamedItemNS(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNamedNodeMap::s_info))
        return throwVMTypeError(exec);
    JSNamedNodeMap* castedThis = static_cast<JSNamedNodeMap*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNamedNodeMap::s_info);
    NamedNodeMap* imp = static_cast<NamedNodeMap*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& localName(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->removeNamedItemNS(namespaceURI, localName, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


JSValue JSNamedNodeMap::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSNamedNodeMap* thisObj = static_cast<JSNamedNodeMap*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<NamedNodeMap*>(thisObj->impl())->item(index));
}

static inline bool isObservable(JSNamedNodeMap* jsNamedNodeMap)
{
    if (jsNamedNodeMap->hasCustomProperties())
        return true;
    return false;
}

bool JSNamedNodeMapOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSNamedNodeMap* jsNamedNodeMap = static_cast<JSNamedNodeMap*>(handle.get().asCell());
    if (!isObservable(jsNamedNodeMap))
        return false;
    Element* element = jsNamedNodeMap->impl()->element();
    if (!element)
        return false;
    void* root = WebCore::root(element);
    return visitor.containsOpaqueRoot(root);
}

void JSNamedNodeMapOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNamedNodeMap* jsNamedNodeMap = static_cast<JSNamedNodeMap*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsNamedNodeMap->impl(), jsNamedNodeMap);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NamedNodeMap* impl)
{
    return wrap<JSNamedNodeMap>(exec, globalObject, impl);
}

NamedNodeMap* toNamedNodeMap(JSC::JSValue value)
{
    return value.inherits(&JSNamedNodeMap::s_info) ? static_cast<JSNamedNodeMap*>(asObject(value))->impl() : 0;
}

}
