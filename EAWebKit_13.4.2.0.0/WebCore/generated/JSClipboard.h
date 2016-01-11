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

#ifndef JSClipboard_h
#define JSClipboard_h

#include "Clipboard.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSClipboard : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSClipboard* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Clipboard> impl)
    {
        JSClipboard* ptr = new (JSC::allocateCell<JSClipboard>(globalObject->globalData().heap)) JSClipboard(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue types(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue clearData(JSC::ExecState*);
    JSC::JSValue getData(JSC::ExecState*);
    JSC::JSValue setDragImage(JSC::ExecState*);
    Clipboard* impl() const { return m_impl.get(); }

private:
    RefPtr<Clipboard> m_impl;
protected:
    JSClipboard(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Clipboard>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Clipboard*);
Clipboard* toClipboard(JSC::JSValue);

class JSClipboardPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSClipboardPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSClipboardPrototype* ptr = new (JSC::allocateCell<JSClipboardPrototype>(globalData.heap)) JSClipboardPrototype(globalData, globalObject, structure);
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
    JSClipboardPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionClearData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionGetData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionSetData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionSetDragImage(JSC::ExecState*);
// Attributes

JSC::JSValue jsClipboardDropEffect(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSClipboardDropEffect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsClipboardEffectAllowed(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSClipboardEffectAllowed(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsClipboardTypes(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsClipboardFiles(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsClipboardItems(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsClipboardConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
