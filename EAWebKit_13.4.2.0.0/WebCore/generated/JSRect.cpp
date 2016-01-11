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
#include "JSRect.h"

#include "CSSPrimitiveValue.h"
#include "JSCSSPrimitiveValue.h"
#include "Rect.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSRect);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRectTableValues[] =
{
    { "top", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectTop), (intptr_t)0 THUNK_GENERATOR(0) },
    { "right", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectRight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "bottom", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectBottom), (intptr_t)0 THUNK_GENERATOR(0) },
    { "left", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectLeft), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRectTable = { 16, 15, JSRectTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRectConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRectConstructorTable = { 1, 0, JSRectConstructorTableValues, 0 };
class JSRectConstructor : public DOMConstructorObject {
private:
    JSRectConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSRectConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSRectConstructor* ptr = new (JSC::allocateCell<JSRectConstructor>(*exec->heap())) JSRectConstructor(structure, globalObject);
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

const ClassInfo JSRectConstructor::s_info = { "RectConstructor", &DOMConstructorObject::s_info, &JSRectConstructorTable, 0 };

JSRectConstructor::JSRectConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSRectConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSRectPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSRectConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRectConstructor, JSDOMWrapper>(exec, &JSRectConstructorTable, this, propertyName, slot);
}

bool JSRectConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRectConstructor, JSDOMWrapper>(exec, &JSRectConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRectPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRectPrototypeTable = { 1, 0, JSRectPrototypeTableValues, 0 };
const ClassInfo JSRectPrototype::s_info = { "RectPrototype", &JSC::JSNonFinalObject::s_info, &JSRectPrototypeTable, 0 };

JSObject* JSRectPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRect>(exec, globalObject);
}

const ClassInfo JSRect::s_info = { "Rect", &JSDOMWrapper::s_info, &JSRectTable, 0 };

JSRect::JSRect(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Rect> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSRect::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSRect::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSRectPrototype::create(exec->globalData(), globalObject, JSRectPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSRect::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSRect, Base>(exec, &JSRectTable, this, propertyName, slot);
}

bool JSRect::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSRect, Base>(exec, &JSRectTable, this, propertyName, descriptor);
}

JSValue jsRectTop(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRect* castedThis = static_cast<JSRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Rect* imp = static_cast<Rect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->top()));
    return result;
}


JSValue jsRectRight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRect* castedThis = static_cast<JSRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Rect* imp = static_cast<Rect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->right()));
    return result;
}


JSValue jsRectBottom(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRect* castedThis = static_cast<JSRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Rect* imp = static_cast<Rect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->bottom()));
    return result;
}


JSValue jsRectLeft(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRect* castedThis = static_cast<JSRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Rect* imp = static_cast<Rect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->left()));
    return result;
}


JSValue jsRectConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRect* domObject = static_cast<JSRect*>(asObject(slotBase));
    return JSRect::getConstructor(exec, domObject->globalObject());
}

JSValue JSRect::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRectConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Rect* impl)
{
    return wrap<JSRect>(exec, globalObject, impl);
}

Rect* toRect(JSC::JSValue value)
{
    return value.inherits(&JSRect::s_info) ? static_cast<JSRect*>(asObject(value))->impl() : 0;
}

}
