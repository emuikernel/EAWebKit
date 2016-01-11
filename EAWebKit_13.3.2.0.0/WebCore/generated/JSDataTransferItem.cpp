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

#if ENABLE(DATA_TRANSFER_ITEMS)

#include "JSDataTransferItem.h"

#include "Blob.h"
#include "DataTransferItem.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSStringCallback.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDataTransferItem);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDataTransferItemTableValues[] =
{
    { "kind", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemKind), (intptr_t)0 THUNK_GENERATOR(0) },
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDataTransferItemTable = { 8, 7, JSDataTransferItemTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDataTransferItemConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDataTransferItemConstructorTable = { 1, 0, JSDataTransferItemConstructorTableValues, 0 };
class JSDataTransferItemConstructor : public DOMConstructorObject {
private:
    JSDataTransferItemConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDataTransferItemConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDataTransferItemConstructor* ptr = new (JSC::allocateCell<JSDataTransferItemConstructor>(*exec->heap())) JSDataTransferItemConstructor(structure, globalObject);
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

const ClassInfo JSDataTransferItemConstructor::s_info = { "DataTransferItemConstructor", &DOMConstructorObject::s_info, &JSDataTransferItemConstructorTable, 0 };

JSDataTransferItemConstructor::JSDataTransferItemConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDataTransferItemConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDataTransferItemPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDataTransferItemConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDataTransferItemConstructor, JSDOMWrapper>(exec, &JSDataTransferItemConstructorTable, this, propertyName, slot);
}

bool JSDataTransferItemConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDataTransferItemConstructor, JSDOMWrapper>(exec, &JSDataTransferItemConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDataTransferItemPrototypeTableValues[] =
{
    { "getAsString", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemPrototypeFunctionGetAsString), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getAsFile", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemPrototypeFunctionGetAsFile), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDataTransferItemPrototypeTable = { 4, 3, JSDataTransferItemPrototypeTableValues, 0 };
const ClassInfo JSDataTransferItemPrototype::s_info = { "DataTransferItemPrototype", &JSC::JSNonFinalObject::s_info, &JSDataTransferItemPrototypeTable, 0 };

JSObject* JSDataTransferItemPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDataTransferItem>(exec, globalObject);
}

bool JSDataTransferItemPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDataTransferItemPrototypeTable, this, propertyName, slot);
}

bool JSDataTransferItemPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDataTransferItemPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDataTransferItem::s_info = { "DataTransferItem", &JSDOMWrapper::s_info, &JSDataTransferItemTable, 0 };

JSDataTransferItem::JSDataTransferItem(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DataTransferItem> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSDataTransferItem::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSDataTransferItem::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDataTransferItemPrototype::create(exec->globalData(), globalObject, JSDataTransferItemPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSDataTransferItem::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSDataTransferItem, Base>(exec, &JSDataTransferItemTable, this, propertyName, slot);
}

bool JSDataTransferItem::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSDataTransferItem, Base>(exec, &JSDataTransferItemTable, this, propertyName, descriptor);
}

JSValue jsDataTransferItemKind(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDataTransferItem* castedThis = static_cast<JSDataTransferItem*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DataTransferItem* imp = static_cast<DataTransferItem*>(castedThis->impl());
    JSValue result = jsString(exec, imp->kind());
    return result;
}


JSValue jsDataTransferItemType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDataTransferItem* castedThis = static_cast<JSDataTransferItem*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DataTransferItem* imp = static_cast<DataTransferItem*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}


JSValue jsDataTransferItemConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDataTransferItem* domObject = static_cast<JSDataTransferItem*>(asObject(slotBase));
    return JSDataTransferItem::getConstructor(exec, domObject->globalObject());
}

JSValue JSDataTransferItem::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDataTransferItemConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDataTransferItem::s_info))
        return throwVMTypeError(exec);
    JSDataTransferItem* castedThis = static_cast<JSDataTransferItem*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDataTransferItem::s_info);
    DataTransferItem* imp = static_cast<DataTransferItem*>(castedThis->impl());
    RefPtr<StringCallback> callback;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull()) {
        if (!exec->argument(0).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        callback = JSStringCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    }

    imp->getAsString(callback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsFile(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDataTransferItem::s_info))
        return throwVMTypeError(exec);
    JSDataTransferItem* castedThis = static_cast<JSDataTransferItem*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDataTransferItem::s_info);
    DataTransferItem* imp = static_cast<DataTransferItem*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getAsFile()));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DataTransferItem* impl)
{
    return wrap<JSDataTransferItem>(exec, globalObject, impl);
}

DataTransferItem* toDataTransferItem(JSC::JSValue value)
{
    return value.inherits(&JSDataTransferItem::s_info) ? static_cast<JSDataTransferItem*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATA_TRANSFER_ITEMS)
