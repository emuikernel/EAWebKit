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
#include "JSMouseEvent.h"

#include "Clipboard.h"
#include "EventTarget.h"
#include "ExceptionCode.h"
#include "JSClipboard.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSEventTarget.h"
#include "JSNode.h"
#include "MouseEvent.h"
#include "Node.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMouseEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMouseEventTableValues[] =
{
    { "screenX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventScreenX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "screenY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventScreenY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "clientX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventClientX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "clientY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventClientY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ctrlKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventCtrlKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "shiftKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventShiftKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventAltKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "metaKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventMetaKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "button", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventButton), (intptr_t)0 THUNK_GENERATOR(0) },
    { "relatedTarget", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventRelatedTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "offsetX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventOffsetX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "offsetY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventOffsetY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "fromElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventFromElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventToElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dataTransfer", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventDataTransfer), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMouseEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMouseEventTable = { 65, 63, JSMouseEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMouseEventConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMouseEventConstructorTable = { 1, 0, JSMouseEventConstructorTableValues, 0 };
class JSMouseEventConstructor : public DOMConstructorObject {
private:
    JSMouseEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMouseEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMouseEventConstructor* ptr = new (JSC::allocateCell<JSMouseEventConstructor>(*exec->heap())) JSMouseEventConstructor(structure, globalObject);
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

const ClassInfo JSMouseEventConstructor::s_info = { "MouseEventConstructor", &DOMConstructorObject::s_info, &JSMouseEventConstructorTable, 0 };

JSMouseEventConstructor::JSMouseEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMouseEventConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSMouseEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSMouseEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMouseEventConstructor, JSDOMWrapper>(exec, &JSMouseEventConstructorTable, this, propertyName, slot);
}

bool JSMouseEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMouseEventConstructor, JSDOMWrapper>(exec, &JSMouseEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMouseEventPrototypeTableValues[] =
{
    { "initMouseEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMouseEventPrototypeFunctionInitMouseEvent), (intptr_t)15 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMouseEventPrototypeTable = { 2, 1, JSMouseEventPrototypeTableValues, 0 };
const ClassInfo JSMouseEventPrototype::s_info = { "MouseEventPrototype", &JSC::JSNonFinalObject::s_info, &JSMouseEventPrototypeTable, 0 };

JSObject* JSMouseEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMouseEvent>(exec, globalObject);
}

bool JSMouseEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSMouseEventPrototypeTable, this, propertyName, slot);
}

bool JSMouseEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMouseEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSMouseEvent::s_info = { "MouseEvent", &JSUIEvent::s_info, &JSMouseEventTable, 0 };

JSMouseEvent::JSMouseEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MouseEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
}

void JSMouseEvent::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSMouseEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMouseEventPrototype::create(exec->globalData(), globalObject, JSMouseEventPrototype::createStructure(exec->globalData(), globalObject, JSUIEventPrototype::self(exec, globalObject)));
}

bool JSMouseEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSMouseEvent, Base>(exec, &JSMouseEventTable, this, propertyName, slot);
}

bool JSMouseEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSMouseEvent, Base>(exec, &JSMouseEventTable, this, propertyName, descriptor);
}

JSValue jsMouseEventScreenX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->screenX());
    return result;
}


JSValue jsMouseEventScreenY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->screenY());
    return result;
}


JSValue jsMouseEventClientX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->clientX());
    return result;
}


JSValue jsMouseEventClientY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->clientY());
    return result;
}


JSValue jsMouseEventCtrlKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->ctrlKey());
    return result;
}


JSValue jsMouseEventShiftKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->shiftKey());
    return result;
}


JSValue jsMouseEventAltKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->altKey());
    return result;
}


JSValue jsMouseEventMetaKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->metaKey());
    return result;
}


JSValue jsMouseEventButton(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->button());
    return result;
}


JSValue jsMouseEventRelatedTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->relatedTarget()));
    return result;
}


JSValue jsMouseEventOffsetX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->offsetX());
    return result;
}


JSValue jsMouseEventOffsetY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->offsetY());
    return result;
}


JSValue jsMouseEventX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsMouseEventY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsMouseEventFromElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->fromElement()));
    return result;
}


JSValue jsMouseEventToElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->toElement()));
    return result;
}


JSValue jsMouseEventDataTransfer(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->dataTransfer()));
    return result;
}


JSValue jsMouseEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMouseEvent* domObject = static_cast<JSMouseEvent*>(asObject(slotBase));
    return JSMouseEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSMouseEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMouseEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMouseEventPrototypeFunctionInitMouseEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMouseEvent::s_info))
        return throwVMTypeError(exec);
    JSMouseEvent* castedThis = static_cast<JSMouseEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMouseEvent::s_info);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThis->impl());
    const String& type(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubble(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelable(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    DOMWindow* view(toDOMWindow(exec->argument(3)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int detail(exec->argument(4).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int screenX(exec->argument(5).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int screenY(exec->argument(6).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int clientX(exec->argument(7).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int clientY(exec->argument(8).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool ctrlKey(exec->argument(9).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool altKey(exec->argument(10).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool shiftKey(exec->argument(11).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool metaKey(exec->argument(12).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned short button(exec->argument(13).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    EventTarget* relatedTarget(toEventTarget(exec->argument(14)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initMouseEvent(type, canBubble, cancelable, view, detail, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey, button, relatedTarget);
    return JSValue::encode(jsUndefined());
}


}