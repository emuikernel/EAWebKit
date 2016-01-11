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

#include "JSAudioListener.h"

#include "AudioListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioListener);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioListenerTableValues[] =
{
    { "dopplerFactor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerDopplerFactor), (intptr_t)setJSAudioListenerDopplerFactor THUNK_GENERATOR(0) },
    { "speedOfSound", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerSpeedOfSound), (intptr_t)setJSAudioListenerSpeedOfSound THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioListenerTable = { 8, 7, JSAudioListenerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioListenerConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioListenerConstructorTable = { 1, 0, JSAudioListenerConstructorTableValues, 0 };
class JSAudioListenerConstructor : public DOMConstructorObject {
private:
    JSAudioListenerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioListenerConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioListenerConstructor* ptr = new (JSC::allocateCell<JSAudioListenerConstructor>(*exec->heap())) JSAudioListenerConstructor(structure, globalObject);
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

const ClassInfo JSAudioListenerConstructor::s_info = { "AudioListenerConstructor", &DOMConstructorObject::s_info, &JSAudioListenerConstructorTable, 0 };

JSAudioListenerConstructor::JSAudioListenerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioListenerConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioListenerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioListenerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioListenerConstructor, JSDOMWrapper>(exec, &JSAudioListenerConstructorTable, this, propertyName, slot);
}

bool JSAudioListenerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioListenerConstructor, JSDOMWrapper>(exec, &JSAudioListenerConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioListenerPrototypeTableValues[] =
{
    { "setPosition", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetPosition), (intptr_t)3 THUNK_GENERATOR(0) },
    { "setOrientation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetOrientation), (intptr_t)6 THUNK_GENERATOR(0) },
    { "setVelocity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetVelocity), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioListenerPrototypeTable = { 8, 7, JSAudioListenerPrototypeTableValues, 0 };
const ClassInfo JSAudioListenerPrototype::s_info = { "AudioListenerPrototype", &JSC::JSNonFinalObject::s_info, &JSAudioListenerPrototypeTable, 0 };

JSObject* JSAudioListenerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioListener>(exec, globalObject);
}

bool JSAudioListenerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSAudioListenerPrototypeTable, this, propertyName, slot);
}

bool JSAudioListenerPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSAudioListenerPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSAudioListener::s_info = { "AudioListener", &JSDOMWrapper::s_info, &JSAudioListenerTable, 0 };

JSAudioListener::JSAudioListener(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioListener> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSAudioListener::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioListener::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSAudioListenerPrototype::create(exec->globalData(), globalObject, JSAudioListenerPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSAudioListener::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSAudioListener, Base>(exec, &JSAudioListenerTable, this, propertyName, slot);
}

bool JSAudioListener::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSAudioListener, Base>(exec, &JSAudioListenerTable, this, propertyName, descriptor);
}

JSValue jsAudioListenerDopplerFactor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    JSValue result = jsNumber(imp->dopplerFactor());
    return result;
}


JSValue jsAudioListenerSpeedOfSound(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    JSValue result = jsNumber(imp->speedOfSound());
    return result;
}


JSValue jsAudioListenerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioListener* domObject = static_cast<JSAudioListener*>(asObject(slotBase));
    return JSAudioListener::getConstructor(exec, domObject->globalObject());
}

void JSAudioListener::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSAudioListener, Base>(exec, propertyName, value, &JSAudioListenerTable, this, slot);
}

void setJSAudioListenerDopplerFactor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(thisObject);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    imp->setDopplerFactor(value.toFloat(exec));
}


void setJSAudioListenerSpeedOfSound(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(thisObject);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    imp->setSpeedOfSound(value.toFloat(exec));
}


JSValue JSAudioListener::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioListenerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioListener::s_info))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioListener::s_info);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setPosition(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetOrientation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioListener::s_info))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioListener::s_info);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    if (exec->argumentCount() < 6)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float xUp(exec->argument(3).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float yUp(exec->argument(4).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float zUp(exec->argument(5).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setOrientation(x, y, z, xUp, yUp, zUp);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetVelocity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioListener::s_info))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = static_cast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioListener::s_info);
    AudioListener* imp = static_cast<AudioListener*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setVelocity(x, y, z);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioListener* impl)
{
    return wrap<JSAudioListener>(exec, globalObject, impl);
}

AudioListener* toAudioListener(JSC::JSValue value)
{
    return value.inherits(&JSAudioListener::s_info) ? static_cast<JSAudioListener*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO)
