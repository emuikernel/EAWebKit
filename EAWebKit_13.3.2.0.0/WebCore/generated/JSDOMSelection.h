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

#ifndef JSDOMSelection_h
#define JSDOMSelection_h

#include "DOMSelection.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSDOMSelection : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSDOMSelection* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMSelection> impl)
    {
        JSDOMSelection* ptr = new (JSC::allocateCell<JSDOMSelection>(globalObject->globalData().heap)) JSDOMSelection(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    DOMSelection* impl() const { return m_impl.get(); }

private:
    RefPtr<DOMSelection> m_impl;
protected:
    JSDOMSelection(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DOMSelection>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDOMSelectionOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, DOMSelection*)
{
    DEFINE_STATIC_LOCAL(JSDOMSelectionOwner, jsDOMSelectionOwner, ());
    return &jsDOMSelectionOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, DOMSelection*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DOMSelection*);
DOMSelection* toDOMSelection(JSC::JSValue);

class JSDOMSelectionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDOMSelectionPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMSelectionPrototype* ptr = new (JSC::allocateCell<JSDOMSelectionPrototype>(globalData.heap)) JSDOMSelectionPrototype(globalData, globalObject, structure);
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
    JSDOMSelectionPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapse(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapseToEnd(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapseToStart(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionDeleteFromDocument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionContainsNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSelectAllChildren(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionExtend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionGetRangeAt(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionRemoveAllRanges(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionAddRange(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionToString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionModify(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSetBaseAndExtent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSetPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionEmpty(JSC::ExecState*);
// Attributes

JSC::JSValue jsDOMSelectionAnchorNode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionAnchorOffset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionFocusNode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionFocusOffset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionIsCollapsed(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionRangeCount(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionBaseNode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionBaseOffset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionExtentNode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionExtentOffset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMSelectionType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
