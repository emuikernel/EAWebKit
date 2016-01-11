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

#include "JSWebGLVertexArrayObjectOES.h"

#include "WebGLVertexArrayObjectOES.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLVertexArrayObjectOES);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLVertexArrayObjectOESTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLVertexArrayObjectOESConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLVertexArrayObjectOESTable = { 2, 1, JSWebGLVertexArrayObjectOESTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLVertexArrayObjectOESConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLVertexArrayObjectOESConstructorTable = { 1, 0, JSWebGLVertexArrayObjectOESConstructorTableValues, 0 };
class JSWebGLVertexArrayObjectOESConstructor : public DOMConstructorObject {
private:
    JSWebGLVertexArrayObjectOESConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLVertexArrayObjectOESConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLVertexArrayObjectOESConstructor* ptr = new (JSC::allocateCell<JSWebGLVertexArrayObjectOESConstructor>(*exec->heap())) JSWebGLVertexArrayObjectOESConstructor(structure, globalObject);
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

const ClassInfo JSWebGLVertexArrayObjectOESConstructor::s_info = { "WebGLVertexArrayObjectOESConstructor", &DOMConstructorObject::s_info, &JSWebGLVertexArrayObjectOESConstructorTable, 0 };

JSWebGLVertexArrayObjectOESConstructor::JSWebGLVertexArrayObjectOESConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLVertexArrayObjectOESConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebGLVertexArrayObjectOESPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebGLVertexArrayObjectOESConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLVertexArrayObjectOESConstructor, JSDOMWrapper>(exec, &JSWebGLVertexArrayObjectOESConstructorTable, this, propertyName, slot);
}

bool JSWebGLVertexArrayObjectOESConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLVertexArrayObjectOESConstructor, JSDOMWrapper>(exec, &JSWebGLVertexArrayObjectOESConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLVertexArrayObjectOESPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLVertexArrayObjectOESPrototypeTable = { 1, 0, JSWebGLVertexArrayObjectOESPrototypeTableValues, 0 };
const ClassInfo JSWebGLVertexArrayObjectOESPrototype::s_info = { "WebGLVertexArrayObjectOESPrototype", &JSC::JSNonFinalObject::s_info, &JSWebGLVertexArrayObjectOESPrototypeTable, 0 };

JSObject* JSWebGLVertexArrayObjectOESPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLVertexArrayObjectOES>(exec, globalObject);
}

const ClassInfo JSWebGLVertexArrayObjectOES::s_info = { "WebGLVertexArrayObjectOES", &JSDOMWrapper::s_info, &JSWebGLVertexArrayObjectOESTable, 0 };

JSWebGLVertexArrayObjectOES::JSWebGLVertexArrayObjectOES(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLVertexArrayObjectOES> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSWebGLVertexArrayObjectOES::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLVertexArrayObjectOES::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLVertexArrayObjectOESPrototype::create(exec->globalData(), globalObject, JSWebGLVertexArrayObjectOESPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSWebGLVertexArrayObjectOES::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSWebGLVertexArrayObjectOES, Base>(exec, &JSWebGLVertexArrayObjectOESTable, this, propertyName, slot);
}

bool JSWebGLVertexArrayObjectOES::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSWebGLVertexArrayObjectOES, Base>(exec, &JSWebGLVertexArrayObjectOESTable, this, propertyName, descriptor);
}

JSValue jsWebGLVertexArrayObjectOESConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLVertexArrayObjectOES* domObject = static_cast<JSWebGLVertexArrayObjectOES*>(asObject(slotBase));
    return JSWebGLVertexArrayObjectOES::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLVertexArrayObjectOES::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLVertexArrayObjectOESConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLVertexArrayObjectOES* impl)
{
    return wrap<JSWebGLVertexArrayObjectOES>(exec, globalObject, impl);
}

WebGLVertexArrayObjectOES* toWebGLVertexArrayObjectOES(JSC::JSValue value)
{
    return value.inherits(&JSWebGLVertexArrayObjectOES::s_info) ? static_cast<JSWebGLVertexArrayObjectOES*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
