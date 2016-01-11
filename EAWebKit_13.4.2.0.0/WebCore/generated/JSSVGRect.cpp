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

#include "JSSVGRect.h"

#include "SVGRect.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGRect);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRectTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectX), (intptr_t)setJSSVGRectX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectY), (intptr_t)setJSSVGRectY THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectWidth), (intptr_t)setJSSVGRectWidth THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectHeight), (intptr_t)setJSSVGRectHeight THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRectTable = { 17, 15, JSSVGRectTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRectConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRectConstructorTable = { 1, 0, JSSVGRectConstructorTableValues, 0 };
class JSSVGRectConstructor : public DOMConstructorObject {
private:
    JSSVGRectConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGRectConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGRectConstructor* ptr = new (JSC::allocateCell<JSSVGRectConstructor>(*exec->heap())) JSSVGRectConstructor(structure, globalObject);
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

const ClassInfo JSSVGRectConstructor::s_info = { "SVGRectConstructor", &DOMConstructorObject::s_info, &JSSVGRectConstructorTable, 0 };

JSSVGRectConstructor::JSSVGRectConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGRectConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGRectPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGRectConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGRectConstructor, JSDOMWrapper>(exec, &JSSVGRectConstructorTable, this, propertyName, slot);
}

bool JSSVGRectConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGRectConstructor, JSDOMWrapper>(exec, &JSSVGRectConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRectPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRectPrototypeTable = { 1, 0, JSSVGRectPrototypeTableValues, 0 };
const ClassInfo JSSVGRectPrototype::s_info = { "SVGRectPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGRectPrototypeTable, 0 };

JSObject* JSSVGRectPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRect>(exec, globalObject);
}

const ClassInfo JSSVGRect::s_info = { "SVGRect", &JSDOMWrapper::s_info, &JSSVGRectTable, 0 };

JSSVGRect::JSSVGRect(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<FloatRect> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSVGRect::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGRect::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGRectPrototype::create(exec->globalData(), globalObject, JSSVGRectPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSVGRect::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGRect, Base>(exec, &JSSVGRectTable, this, propertyName, slot);
}

bool JSSVGRect::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGRect, Base>(exec, &JSSVGRectTable, this, propertyName, descriptor);
}

JSValue jsSVGRectX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatRect& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.x());
    return result;
}


JSValue jsSVGRectY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatRect& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.y());
    return result;
}


JSValue jsSVGRectWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatRect& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.width());
    return result;
}


JSValue jsSVGRectHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatRect& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.height());
    return result;
}


JSValue jsSVGRectConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRect* domObject = static_cast<JSSVGRect*>(asObject(slotBase));
    return JSSVGRect::getConstructor(exec, domObject->globalObject());
}

void JSSVGRect::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGRect, Base>(exec, propertyName, value, &JSSVGRectTable, this, slot);
}

void setJSSVGRectX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(thisObject);
    SVGPropertyTearOff<FloatRect> * imp = static_cast<SVGPropertyTearOff<FloatRect> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImp = imp->propertyReference();
    podImp.setX(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGRectY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(thisObject);
    SVGPropertyTearOff<FloatRect> * imp = static_cast<SVGPropertyTearOff<FloatRect> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImp = imp->propertyReference();
    podImp.setY(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGRectWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(thisObject);
    SVGPropertyTearOff<FloatRect> * imp = static_cast<SVGPropertyTearOff<FloatRect> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImp = imp->propertyReference();
    podImp.setWidth(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGRectHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGRect* castedThis = static_cast<JSSVGRect*>(thisObject);
    SVGPropertyTearOff<FloatRect> * imp = static_cast<SVGPropertyTearOff<FloatRect> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImp = imp->propertyReference();
    podImp.setHeight(value.toFloat(exec));
    imp->commitChange();
}


JSValue JSSVGRect::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRectConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<FloatRect> * impl)
{
    return wrap<JSSVGRect, SVGPropertyTearOff<FloatRect> >(exec, globalObject, impl);
}

SVGPropertyTearOff<FloatRect> * toSVGRect(JSC::JSValue value)
{
    return value.inherits(&JSSVGRect::s_info) ? static_cast<JSSVGRect*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
