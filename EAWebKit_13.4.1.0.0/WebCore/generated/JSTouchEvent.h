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

#ifndef JSTouchEvent_h
#define JSTouchEvent_h

#if ENABLE(TOUCH_EVENTS)

#include "JSUIEvent.h"
#include "TouchEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSTouchEvent : public JSUIEvent {
public:
    typedef JSUIEvent Base;
    static JSTouchEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TouchEvent> impl)
    {
        JSTouchEvent* ptr = new (JSC::allocateCell<JSTouchEvent>(globalObject->globalData().heap)) JSTouchEvent(structure, globalObject, impl);
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
protected:
    JSTouchEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<TouchEvent>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSTouchEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSTouchEventPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTouchEventPrototype* ptr = new (JSC::allocateCell<JSTouchEventPrototype>(globalData.heap)) JSTouchEventPrototype(globalData, globalObject, structure);
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
    JSTouchEventPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTouchEventPrototypeFunctionInitTouchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsTouchEventTouches(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventTargetTouches(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventChangedTouches(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventCtrlKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventShiftKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventAltKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventMetaKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTouchEventConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(TOUCH_EVENTS)

#endif
