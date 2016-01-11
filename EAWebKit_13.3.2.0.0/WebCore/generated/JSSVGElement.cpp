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

#if ENABLE(SVG)

#include "JSSVGElement.h"

#include "HTMLNames.h"
#include "JSSVGElement.h"
#include "JSSVGSVGElement.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGSVGElement.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementTableValues[] =
{
    { "id", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementId), (intptr_t)setJSSVGElementId THUNK_GENERATOR(0) },
    { "xmlbase", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementXmlbase), (intptr_t)setJSSVGElementXmlbase THUNK_GENERATOR(0) },
    { "ownerSVGElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementOwnerSVGElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementTable = { 16, 15, JSSVGElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementConstructorTable = { 1, 0, JSSVGElementConstructorTableValues, 0 };
class JSSVGElementConstructor : public DOMConstructorObject {
private:
    JSSVGElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGElementConstructor* ptr = new (JSC::allocateCell<JSSVGElementConstructor>(*exec->heap())) JSSVGElementConstructor(structure, globalObject);
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

const ClassInfo JSSVGElementConstructor::s_info = { "SVGElementConstructor", &DOMConstructorObject::s_info, &JSSVGElementConstructorTable, 0 };

JSSVGElementConstructor::JSSVGElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGElementConstructor, JSDOMWrapper>(exec, &JSSVGElementConstructorTable, this, propertyName, slot);
}

bool JSSVGElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGElementConstructor, JSDOMWrapper>(exec, &JSSVGElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementPrototypeTable = { 1, 0, JSSVGElementPrototypeTableValues, 0 };
const ClassInfo JSSVGElementPrototype::s_info = { "SVGElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGElementPrototypeTable, 0 };

JSObject* JSSVGElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGElement>(exec, globalObject);
}

const ClassInfo JSSVGElement::s_info = { "SVGElement", &JSElement::s_info, &JSSVGElementTable, 0 };

JSSVGElement::JSSVGElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> impl)
    : JSElement(structure, globalObject, impl)
{
}

void JSSVGElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGElementPrototype::create(exec->globalData(), globalObject, JSSVGElementPrototype::createStructure(exec->globalData(), globalObject, JSElementPrototype::self(exec, globalObject)));
}

bool JSSVGElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGElement, Base>(exec, &JSSVGElementTable, this, propertyName, slot);
}

bool JSSVGElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGElement, Base>(exec, &JSSVGElementTable, this, propertyName, descriptor);
}

JSValue jsSVGElementId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::idAttr));
    return result;
}


JSValue jsSVGElementXmlbase(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlbase());
    return result;
}


JSValue jsSVGElementOwnerSVGElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->ownerSVGElement()));
    return result;
}


JSValue jsSVGElementViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->viewportElement()));
    return result;
}


JSValue jsSVGElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGElement* domObject = static_cast<JSSVGElement*>(asObject(slotBase));
    return JSSVGElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGElement, Base>(exec, propertyName, value, &JSSVGElementTable, this, slot);
}

void setJSSVGElementId(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(thisObject);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setAttribute(WebCore::HTMLNames::idAttr, valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


void setJSSVGElementXmlbase(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGElement* castedThis = static_cast<JSSVGElement*>(thisObject);
    SVGElement* imp = static_cast<SVGElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setXmlbase(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


JSValue JSSVGElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

SVGElement* toSVGElement(JSC::JSValue value)
{
    return value.inherits(&JSSVGElement::s_info) ? static_cast<JSSVGElement*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
