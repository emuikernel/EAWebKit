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

#include "JSSVGAnimatedLengthList.h"

#include "JSSVGLengthList.h"
#include "SVGLengthList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedLengthList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthListTableValues[] =
{
    { "baseVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthListBaseVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthListAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthListTable = { 8, 7, JSSVGAnimatedLengthListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthListConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthListConstructorTable = { 1, 0, JSSVGAnimatedLengthListConstructorTableValues, 0 };
class JSSVGAnimatedLengthListConstructor : public DOMConstructorObject {
private:
    JSSVGAnimatedLengthListConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimatedLengthListConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimatedLengthListConstructor* ptr = new (JSC::allocateCell<JSSVGAnimatedLengthListConstructor>(*exec->heap())) JSSVGAnimatedLengthListConstructor(structure, globalObject);
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

const ClassInfo JSSVGAnimatedLengthListConstructor::s_info = { "SVGAnimatedLengthListConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedLengthListConstructorTable, 0 };

JSSVGAnimatedLengthListConstructor::JSSVGAnimatedLengthListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedLengthListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedLengthListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedLengthListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedLengthListConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedLengthListConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedLengthListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedLengthListConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedLengthListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthListPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthListPrototypeTable = { 1, 0, JSSVGAnimatedLengthListPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedLengthListPrototype::s_info = { "SVGAnimatedLengthListPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGAnimatedLengthListPrototypeTable, 0 };

JSObject* JSSVGAnimatedLengthListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedLengthList>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedLengthList::s_info = { "SVGAnimatedLengthList", &JSDOMWrapper::s_info, &JSSVGAnimatedLengthListTable, 0 };

JSSVGAnimatedLengthList::JSSVGAnimatedLengthList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedLengthList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSVGAnimatedLengthList::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedLengthList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedLengthListPrototype::create(exec->globalData(), globalObject, JSSVGAnimatedLengthListPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSVGAnimatedLengthList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGAnimatedLengthList, Base>(exec, &JSSVGAnimatedLengthListTable, this, propertyName, slot);
}

bool JSSVGAnimatedLengthList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGAnimatedLengthList, Base>(exec, &JSSVGAnimatedLengthListTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedLengthListBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLengthList* castedThis = static_cast<JSSVGAnimatedLengthList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedLengthList* imp = static_cast<SVGAnimatedLengthList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGListPropertyTearOff<SVGLengthList>*>(imp->baseVal())));
    return result;
}


JSValue jsSVGAnimatedLengthListAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLengthList* castedThis = static_cast<JSSVGAnimatedLengthList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedLengthList* imp = static_cast<SVGAnimatedLengthList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGListPropertyTearOff<SVGLengthList>*>(imp->animVal())));
    return result;
}


JSValue jsSVGAnimatedLengthListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLengthList* domObject = static_cast<JSSVGAnimatedLengthList*>(asObject(slotBase));
    return JSSVGAnimatedLengthList::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimatedLengthList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedLengthListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedLengthList* impl)
{
    return wrap<JSSVGAnimatedLengthList>(exec, globalObject, impl);
}

SVGAnimatedLengthList* toSVGAnimatedLengthList(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedLengthList::s_info) ? static_cast<JSSVGAnimatedLengthList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
