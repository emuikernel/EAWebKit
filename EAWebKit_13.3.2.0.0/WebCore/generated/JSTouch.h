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

#ifndef JSTouch_h
#define JSTouch_h

#if ENABLE(TOUCH_EVENTS)

#include "JSDOMBinding.h"
#include "Touch.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSTouch : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTouch* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Touch> impl)
    {
        JSTouch* ptr = new (JSC::allocateCell<JSTouch>(globalObject->globalData().heap)) JSTouch(structure, globalObject, impl);
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

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    Touch* impl() const { return m_impl.get(); }

private:
    RefPtr<Touch> m_impl;
protected:
    JSTouch(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Touch>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Touch*);
Touch* toTouch(JSC::JSValue);
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Touch*);

class JSTouchPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSTouchPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTouchPrototype* ptr = new (JSC::allocateCell<JSTouchPrototype>(globalData.heap)) JSTouchPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSTouchPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsTouchClientX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchClientY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchScreenX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchScreenY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchPageX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchPageY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchTarget(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchIdentifier(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchWebkitRadiusX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchWebkitRadiusY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchWebkitRotationAngle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchWebkitForce(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(TOUCH_EVENTS)

#endif
