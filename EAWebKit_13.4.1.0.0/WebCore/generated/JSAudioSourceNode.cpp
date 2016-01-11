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

#if ENABLE(WEB_AUDIO)

#include "JSAudioSourceNode.h"

#include "AudioSourceNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioSourceNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioSourceNodeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioSourceNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioSourceNodeTable = { 2, 1, JSAudioSourceNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioSourceNodeConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioSourceNodeConstructorTable = { 1, 0, JSAudioSourceNodeConstructorTableValues, 0 };
class JSAudioSourceNodeConstructor : public DOMConstructorObject {
private:
    JSAudioSourceNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioSourceNodeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioSourceNodeConstructor* ptr = new (JSC::allocateCell<JSAudioSourceNodeConstructor>(*exec->heap())) JSAudioSourceNodeConstructor(structure, globalObject);
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

const ClassInfo JSAudioSourceNodeConstructor::s_info = { "AudioSourceNodeConstructor", &DOMConstructorObject::s_info, &JSAudioSourceNodeConstructorTable, 0 };

JSAudioSourceNodeConstructor::JSAudioSourceNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioSourceNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioSourceNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioSourceNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioSourceNodeConstructor, JSDOMWrapper>(exec, &JSAudioSourceNodeConstructorTable, this, propertyName, slot);
}

bool JSAudioSourceNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioSourceNodeConstructor, JSDOMWrapper>(exec, &JSAudioSourceNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioSourceNodePrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioSourceNodePrototypeTable = { 1, 0, JSAudioSourceNodePrototypeTableValues, 0 };
const ClassInfo JSAudioSourceNodePrototype::s_info = { "AudioSourceNodePrototype", &JSC::JSNonFinalObject::s_info, &JSAudioSourceNodePrototypeTable, 0 };

JSObject* JSAudioSourceNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioSourceNode>(exec, globalObject);
}

const ClassInfo JSAudioSourceNode::s_info = { "AudioSourceNode", &JSAudioNode::s_info, &JSAudioSourceNodeTable, 0 };

JSAudioSourceNode::JSAudioSourceNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioSourceNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSAudioSourceNode::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioSourceNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSAudioSourceNodePrototype::create(exec->globalData(), globalObject, JSAudioSourceNodePrototype::createStructure(exec->globalData(), globalObject, JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSAudioSourceNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSAudioSourceNode, Base>(exec, &JSAudioSourceNodeTable, this, propertyName, slot);
}

bool JSAudioSourceNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSAudioSourceNode, Base>(exec, &JSAudioSourceNodeTable, this, propertyName, descriptor);
}

JSValue jsAudioSourceNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioSourceNode* domObject = static_cast<JSAudioSourceNode*>(asObject(slotBase));
    return JSAudioSourceNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSAudioSourceNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioSourceNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(WEB_AUDIO)