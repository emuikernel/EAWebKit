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

#if ENABLE(XPATH)

#include "JSXPathEvaluator.h"

#include "ExceptionCode.h"
#include "JSCustomXPathNSResolver.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSXPathExpression.h"
#include "JSXPathNSResolver.h"
#include "JSXPathResult.h"
#include "PlatformString.h"
#include "XPathEvaluator.h"
#include "XPathExpression.h"
#include "XPathNSResolver.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXPathEvaluator);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathEvaluatorTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathEvaluatorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathEvaluatorTable = { 2, 1, JSXPathEvaluatorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathEvaluatorConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathEvaluatorConstructorTable = { 1, 0, JSXPathEvaluatorConstructorTableValues, 0 };
class JSXPathEvaluatorConstructor : public DOMConstructorObject {
private:
    JSXPathEvaluatorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXPathEvaluatorConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXPathEvaluatorConstructor* ptr = new (JSC::allocateCell<JSXPathEvaluatorConstructor>(*exec->heap())) JSXPathEvaluatorConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSXPathEvaluator(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

const ClassInfo JSXPathEvaluatorConstructor::s_info = { "XPathEvaluatorConstructor", &DOMConstructorObject::s_info, &JSXPathEvaluatorConstructorTable, 0 };

JSXPathEvaluatorConstructor::JSXPathEvaluatorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXPathEvaluatorConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSXPathEvaluatorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSXPathEvaluatorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathEvaluatorConstructor, JSDOMWrapper>(exec, &JSXPathEvaluatorConstructorTable, this, propertyName, slot);
}

bool JSXPathEvaluatorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXPathEvaluatorConstructor, JSDOMWrapper>(exec, &JSXPathEvaluatorConstructorTable, this, propertyName, descriptor);
}

EncodedJSValue JSC_HOST_CALL JSXPathEvaluatorConstructor::constructJSXPathEvaluator(ExecState* exec)
{
    return JSValue::encode(asObject(toJS(exec, static_cast<JSXPathEvaluatorConstructor*>(exec->callee())->globalObject(), XPathEvaluator::create())));
}

ConstructType JSXPathEvaluatorConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSXPathEvaluator;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathEvaluatorPrototypeTableValues[] =
{
    { "createExpression", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateExpression), (intptr_t)2 THUNK_GENERATOR(0) },
    { "createNSResolver", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateNSResolver), (intptr_t)1 THUNK_GENERATOR(0) },
    { "evaluate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionEvaluate), (intptr_t)5 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathEvaluatorPrototypeTable = { 8, 7, JSXPathEvaluatorPrototypeTableValues, 0 };
const ClassInfo JSXPathEvaluatorPrototype::s_info = { "XPathEvaluatorPrototype", &JSC::JSNonFinalObject::s_info, &JSXPathEvaluatorPrototypeTable, 0 };

JSObject* JSXPathEvaluatorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathEvaluator>(exec, globalObject);
}

bool JSXPathEvaluatorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXPathEvaluatorPrototypeTable, this, propertyName, slot);
}

bool JSXPathEvaluatorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSXPathEvaluatorPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSXPathEvaluator::s_info = { "XPathEvaluator", &JSDOMWrapper::s_info, &JSXPathEvaluatorTable, 0 };

JSXPathEvaluator::JSXPathEvaluator(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathEvaluator> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSXPathEvaluator::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSXPathEvaluator::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSXPathEvaluatorPrototype::create(exec->globalData(), globalObject, JSXPathEvaluatorPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSXPathEvaluator::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSXPathEvaluator, Base>(exec, &JSXPathEvaluatorTable, this, propertyName, slot);
}

bool JSXPathEvaluator::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSXPathEvaluator, Base>(exec, &JSXPathEvaluatorTable, this, propertyName, descriptor);
}

JSValue jsXPathEvaluatorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXPathEvaluator* domObject = static_cast<JSXPathEvaluator*>(asObject(slotBase));
    return JSXPathEvaluator::getConstructor(exec, domObject->globalObject());
}

JSValue JSXPathEvaluator::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathEvaluatorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateExpression(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXPathEvaluator::s_info))
        return throwVMTypeError(exec);
    JSXPathEvaluator* castedThis = static_cast<JSXPathEvaluator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSXPathEvaluator::s_info);
    XPathEvaluator* imp = static_cast<XPathEvaluator*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& expression(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = toXPathNSResolver(exec->argument(1));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(1));
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createExpression(expression, resolver, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateNSResolver(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXPathEvaluator::s_info))
        return throwVMTypeError(exec);
    JSXPathEvaluator* castedThis = static_cast<JSXPathEvaluator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSXPathEvaluator::s_info);
    XPathEvaluator* imp = static_cast<XPathEvaluator*>(castedThis->impl());
    Node* nodeResolver(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createNSResolver(nodeResolver)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionEvaluate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXPathEvaluator::s_info))
        return throwVMTypeError(exec);
    JSXPathEvaluator* castedThis = static_cast<JSXPathEvaluator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSXPathEvaluator::s_info);
    XPathEvaluator* imp = static_cast<XPathEvaluator*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& expression(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Node* contextNode(toNode(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = toXPathNSResolver(exec->argument(2));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(2));
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }
    unsigned short type(exec->argument(3).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    XPathResult* inResult(toXPathResult(exec->argument(4)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->evaluate(expression, contextNode, resolver, type, inResult, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathEvaluator* impl)
{
    return wrap<JSXPathEvaluator>(exec, globalObject, impl);
}

XPathEvaluator* toXPathEvaluator(JSC::JSValue value)
{
    return value.inherits(&JSXPathEvaluator::s_info) ? static_cast<JSXPathEvaluator*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(XPATH)
