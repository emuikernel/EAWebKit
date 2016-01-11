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
#include "JSHTMLBRElement.h"

#include "HTMLBRElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLBRElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBRElementTableValues[] =
{
    { "clear", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementClear), (intptr_t)setJSHTMLBRElementClear THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementTable = { 4, 3, JSHTMLBRElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBRElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementConstructorTable = { 1, 0, JSHTMLBRElementConstructorTableValues, 0 };
class JSHTMLBRElementConstructor : public DOMConstructorObject {
private:
    JSHTMLBRElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLBRElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLBRElementConstructor* ptr = new (JSC::allocateCell<JSHTMLBRElementConstructor>(*exec->heap())) JSHTMLBRElementConstructor(structure, globalObject);
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

const ClassInfo JSHTMLBRElementConstructor::s_info = { "HTMLBRElementConstructor", &DOMConstructorObject::s_info, &JSHTMLBRElementConstructorTable, 0 };

JSHTMLBRElementConstructor::JSHTMLBRElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLBRElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLBRElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLBRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElementConstructor, JSDOMWrapper>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLBRElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBRElementConstructor, JSDOMWrapper>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBRElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementPrototypeTable = { 1, 0, JSHTMLBRElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBRElementPrototype::s_info = { "HTMLBRElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLBRElementPrototypeTable, 0 };

JSObject* JSHTMLBRElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBRElement>(exec, globalObject);
}

const ClassInfo JSHTMLBRElement::s_info = { "HTMLBRElement", &JSHTMLElement::s_info, &JSHTMLBRElementTable, 0 };

JSHTMLBRElement::JSHTMLBRElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBRElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLBRElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLBRElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLBRElementPrototype::create(exec->globalData(), globalObject, JSHTMLBRElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, this, propertyName, slot);
}

bool JSHTMLBRElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLBRElementClear(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBRElement* castedThis = static_cast<JSHTMLBRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBRElement* imp = static_cast<HTMLBRElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::clearAttr));
    return result;
}


JSValue jsHTMLBRElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBRElement* domObject = static_cast<JSHTMLBRElement*>(asObject(slotBase));
    return JSHTMLBRElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLBRElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLBRElement, Base>(exec, propertyName, value, &JSHTMLBRElementTable, this, slot);
}

void setJSHTMLBRElementClear(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBRElement* castedThis = static_cast<JSHTMLBRElement*>(thisObject);
    HTMLBRElement* imp = static_cast<HTMLBRElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::clearAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLBRElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBRElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
