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

#ifndef JSDataTransferItems_h
#define JSDataTransferItems_h

#if ENABLE(DATA_TRANSFER_ITEMS)

#include "DataTransferItems.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSDataTransferItems : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSDataTransferItems* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DataTransferItems> impl)
    {
        JSDataTransferItems* ptr = new (JSC::allocateCell<JSDataTransferItems>(globalObject->globalData().heap)) JSDataTransferItems(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    virtual void getOwnPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    DataTransferItems* impl() const { return m_impl.get(); }

private:
    RefPtr<DataTransferItems> m_impl;
protected:
    JSDataTransferItems(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DataTransferItems>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    static JSC::JSValue indexGetter(JSC::ExecState*, JSC::JSValue, unsigned);
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DataTransferItems*);
DataTransferItems* toDataTransferItems(JSC::JSValue);

class JSDataTransferItemsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDataTransferItemsPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDataTransferItemsPrototype* ptr = new (JSC::allocateCell<JSDataTransferItemsPrototype>(globalData.heap)) JSDataTransferItemsPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSDataTransferItemsPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemsPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemsPrototypeFunctionClear(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemsPrototypeFunctionAdd(JSC::ExecState*);
// Attributes

JSC::JSValue jsDataTransferItemsLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDataTransferItemsConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(DATA_TRANSFER_ITEMS)

#endif
