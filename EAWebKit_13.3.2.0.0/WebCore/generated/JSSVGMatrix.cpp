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

#include "JSSVGMatrix.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGMatrix.h"
#include "SVGMatrix.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGMatrix);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMatrixTableValues[] =
{
    { "a", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixA), (intptr_t)setJSSVGMatrixA THUNK_GENERATOR(0) },
    { "b", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixB), (intptr_t)setJSSVGMatrixB THUNK_GENERATOR(0) },
    { "c", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixC), (intptr_t)setJSSVGMatrixC THUNK_GENERATOR(0) },
    { "d", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixD), (intptr_t)setJSSVGMatrixD THUNK_GENERATOR(0) },
    { "e", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixE), (intptr_t)setJSSVGMatrixE THUNK_GENERATOR(0) },
    { "f", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixF), (intptr_t)setJSSVGMatrixF THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMatrixConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMatrixTable = { 17, 15, JSSVGMatrixTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMatrixConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMatrixConstructorTable = { 1, 0, JSSVGMatrixConstructorTableValues, 0 };
class JSSVGMatrixConstructor : public DOMConstructorObject {
private:
    JSSVGMatrixConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGMatrixConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGMatrixConstructor* ptr = new (JSC::allocateCell<JSSVGMatrixConstructor>(*exec->heap())) JSSVGMatrixConstructor(structure, globalObject);
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

const ClassInfo JSSVGMatrixConstructor::s_info = { "SVGMatrixConstructor", &DOMConstructorObject::s_info, &JSSVGMatrixConstructorTable, 0 };

JSSVGMatrixConstructor::JSSVGMatrixConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMatrixConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGMatrixPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGMatrixConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMatrixConstructor, JSDOMWrapper>(exec, &JSSVGMatrixConstructorTable, this, propertyName, slot);
}

bool JSSVGMatrixConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMatrixConstructor, JSDOMWrapper>(exec, &JSSVGMatrixConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMatrixPrototypeTableValues[] =
{
    { "multiply", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionMultiply), (intptr_t)1 THUNK_GENERATOR(0) },
    { "inverse", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionInverse), (intptr_t)0 THUNK_GENERATOR(0) },
    { "translate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionTranslate), (intptr_t)2 THUNK_GENERATOR(0) },
    { "scale", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionScale), (intptr_t)1 THUNK_GENERATOR(0) },
    { "scaleNonUniform", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionScaleNonUniform), (intptr_t)2 THUNK_GENERATOR(0) },
    { "rotate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionRotate), (intptr_t)1 THUNK_GENERATOR(0) },
    { "rotateFromVector", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionRotateFromVector), (intptr_t)2 THUNK_GENERATOR(0) },
    { "flipX", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionFlipX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "flipY", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionFlipY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "skewX", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionSkewX), (intptr_t)1 THUNK_GENERATOR(0) },
    { "skewY", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMatrixPrototypeFunctionSkewY), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMatrixPrototypeTable = { 33, 31, JSSVGMatrixPrototypeTableValues, 0 };
const ClassInfo JSSVGMatrixPrototype::s_info = { "SVGMatrixPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGMatrixPrototypeTable, 0 };

JSObject* JSSVGMatrixPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMatrix>(exec, globalObject);
}

bool JSSVGMatrixPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGMatrixPrototypeTable, this, propertyName, slot);
}

bool JSSVGMatrixPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGMatrixPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGMatrix::s_info = { "SVGMatrix", &JSDOMWrapper::s_info, &JSSVGMatrixTable, 0 };

JSSVGMatrix::JSSVGMatrix(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<SVGMatrix> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSVGMatrix::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGMatrix::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGMatrixPrototype::create(exec->globalData(), globalObject, JSSVGMatrixPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSVGMatrix::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGMatrix, Base>(exec, &JSSVGMatrixTable, this, propertyName, slot);
}

bool JSSVGMatrix::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGMatrix, Base>(exec, &JSSVGMatrixTable, this, propertyName, descriptor);
}

JSValue jsSVGMatrixA(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.a());
    return result;
}


JSValue jsSVGMatrixB(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.b());
    return result;
}


JSValue jsSVGMatrixC(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.c());
    return result;
}


JSValue jsSVGMatrixD(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.d());
    return result;
}


JSValue jsSVGMatrixE(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.e());
    return result;
}


JSValue jsSVGMatrixF(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMatrix& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.f());
    return result;
}


JSValue jsSVGMatrixConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMatrix* domObject = static_cast<JSSVGMatrix*>(asObject(slotBase));
    return JSSVGMatrix::getConstructor(exec, domObject->globalObject());
}

void JSSVGMatrix::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGMatrix, Base>(exec, propertyName, value, &JSSVGMatrixTable, this, slot);
}

void setJSSVGMatrixA(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setA(value.toNumber(exec));
    imp->commitChange();
}


void setJSSVGMatrixB(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setB(value.toNumber(exec));
    imp->commitChange();
}


void setJSSVGMatrixC(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setC(value.toNumber(exec));
    imp->commitChange();
}


void setJSSVGMatrixD(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setD(value.toNumber(exec));
    imp->commitChange();
}


void setJSSVGMatrixE(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setE(value.toNumber(exec));
    imp->commitChange();
}


void setJSSVGMatrixF(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(thisObject);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGMatrix& podImp = imp->propertyReference();
    podImp.setF(value.toNumber(exec));
    imp->commitChange();
}


JSValue JSSVGMatrix::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMatrixConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionMultiply(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGMatrix>* secondMatrix(toSVGMatrix(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (!secondMatrix) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.multiply(secondMatrix->propertyReference()))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionInverse(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.inverse(ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionTranslate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.translate(x, y))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScale(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float scaleFactor(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.scale(scaleFactor))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScaleNonUniform(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float scaleFactorX(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float scaleFactorY(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.scaleNonUniform(scaleFactorX, scaleFactorY))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float angle(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.rotate(angle))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotateFromVector(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.rotateFromVector(x, y, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipX(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.flipX())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipY(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.flipY())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewX(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float angle(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.skewX(angle))));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewY(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    JSSVGMatrix* castedThis = static_cast<JSSVGMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMatrix::s_info);
    SVGPropertyTearOff<SVGMatrix> * imp = static_cast<SVGPropertyTearOff<SVGMatrix> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGMatrix& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float angle(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(podImp.skewY(angle))));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGMatrix> * impl)
{
    return wrap<JSSVGMatrix, SVGPropertyTearOff<SVGMatrix> >(exec, globalObject, impl);
}

SVGPropertyTearOff<SVGMatrix> * toSVGMatrix(JSC::JSValue value)
{
    return value.inherits(&JSSVGMatrix::s_info) ? static_cast<JSSVGMatrix*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
