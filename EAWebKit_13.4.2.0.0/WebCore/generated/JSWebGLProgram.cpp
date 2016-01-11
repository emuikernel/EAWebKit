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

#if ENABLE(WEBGL)

#include "JSWebGLProgram.h"

#include "WebGLProgram.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLProgram);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLProgramTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLProgramConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLProgramTable = { 2, 1, JSWebGLProgramTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLProgramConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLProgramConstructorTable = { 1, 0, JSWebGLProgramConstructorTableValues, 0 };
class JSWebGLProgramConstructor : public DOMConstructorObject {
private:
    JSWebGLProgramConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLProgramConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLProgramConstructor* ptr = new (JSC::allocateCell<JSWebGLProgramConstructor>(*exec->heap())) JSWebGLProgramConstructor(structure, globalObject);
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

const ClassInfo JSWebGLProgramConstructor::s_info = { "WebGLProgramConstructor", &DOMConstructorObject::s_info, &JSWebGLProgramConstructorTable, 0 };

JSWebGLProgramConstructor::JSWebGLProgramConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLProgramConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebGLProgramPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebGLProgramConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLProgramConstructor, JSDOMWrapper>(exec, &JSWebGLProgramConstructorTable, this, propertyName, slot);
}

bool JSWebGLProgramConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLProgramConstructor, JSDOMWrapper>(exec, &JSWebGLProgramConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLProgramPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLProgramPrototypeTable = { 1, 0, JSWebGLProgramPrototypeTableValues, 0 };
const ClassInfo JSWebGLProgramPrototype::s_info = { "WebGLProgramPrototype", &JSC::JSNonFinalObject::s_info, &JSWebGLProgramPrototypeTable, 0 };

JSObject* JSWebGLProgramPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLProgram>(exec, globalObject);
}

const ClassInfo JSWebGLProgram::s_info = { "WebGLProgram", &JSDOMWrapper::s_info, &JSWebGLProgramTable, 0 };

JSWebGLProgram::JSWebGLProgram(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLProgram> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSWebGLProgram::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLProgram::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLProgramPrototype::create(exec->globalData(), globalObject, JSWebGLProgramPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSWebGLProgram::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSWebGLProgram, Base>(exec, &JSWebGLProgramTable, this, propertyName, slot);
}

bool JSWebGLProgram::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSWebGLProgram, Base>(exec, &JSWebGLProgramTable, this, propertyName, descriptor);
}

JSValue jsWebGLProgramConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLProgram* domObject = static_cast<JSWebGLProgram*>(asObject(slotBase));
    return JSWebGLProgram::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLProgram::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLProgramConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLProgram* impl)
{
    return wrap<JSWebGLProgram>(exec, globalObject, impl);
}

WebGLProgram* toWebGLProgram(JSC::JSValue value)
{
    return value.inherits(&JSWebGLProgram::s_info) ? static_cast<JSWebGLProgram*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
