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

#ifndef JSCSSStyleDeclaration_h
#define JSCSSStyleDeclaration_h

#include "CSSStyleDeclaration.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSCSSStyleDeclaration : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSCSSStyleDeclaration* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSStyleDeclaration> impl)
    {
        JSCSSStyleDeclaration* ptr = new (JSC::allocateCell<JSCSSStyleDeclaration>(globalObject->globalData().heap)) JSCSSStyleDeclaration(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    bool putDelegate(JSC::ExecState*, const JSC::Identifier&, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    virtual void getOwnPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual void visitChildren(JSC::SlotVisitor&);


    // Custom functions
    JSC::JSValue getPropertyCSSValue(JSC::ExecState*);
    CSSStyleDeclaration* impl() const { return m_impl.get(); }

private:
    RefPtr<CSSStyleDeclaration> m_impl;
protected:
    JSCSSStyleDeclaration(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CSSStyleDeclaration>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
    static JSC::JSValue indexGetter(JSC::ExecState*, JSC::JSValue, unsigned);
private:
    static bool canGetItemsForName(JSC::ExecState*, CSSStyleDeclaration*, const JSC::Identifier&);
    static JSC::JSValue nameGetter(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
};

class JSCSSStyleDeclarationOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, CSSStyleDeclaration*)
{
    DEFINE_STATIC_LOCAL(JSCSSStyleDeclarationOwner, jsCSSStyleDeclarationOwner, ());
    return &jsCSSStyleDeclarationOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, CSSStyleDeclaration*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, CSSStyleDeclaration*);
CSSStyleDeclaration* toCSSStyleDeclaration(JSC::JSValue);

class JSCSSStyleDeclarationPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSCSSStyleDeclarationPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSStyleDeclarationPrototype* ptr = new (JSC::allocateCell<JSCSSStyleDeclarationPrototype>(globalData.heap)) JSCSSStyleDeclarationPrototype(globalData, globalObject, structure);
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
    JSCSSStyleDeclarationPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionGetPropertyValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionGetPropertyCSSValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionRemoveProperty(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionGetPropertyPriority(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionSetProperty(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionGetPropertyShorthand(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSStyleDeclarationPrototypeFunctionIsPropertyImplicit(JSC::ExecState*);
// Attributes

JSC::JSValue jsCSSStyleDeclarationCssText(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCSSStyleDeclarationCssText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCSSStyleDeclarationLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSStyleDeclarationParentRule(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSStyleDeclarationConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
