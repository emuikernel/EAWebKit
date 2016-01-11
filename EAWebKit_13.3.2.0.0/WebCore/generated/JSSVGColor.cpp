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

#include "JSSVGColor.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSRGBColor.h"
#include "RGBColor.h"
#include "SVGColor.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGColor);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGColorTableValues[] =
{
    { "colorType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorColorType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "rgbColor", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorRgbColor), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGColorTable = { 8, 7, JSSVGColorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGColorConstructorTableValues[] =
{
    { "SVG_COLORTYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_RGBCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_RGBCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_RGBCOLOR_ICCCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_RGBCOLOR_ICCCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_CURRENTCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_CURRENTCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGColorConstructorTable = { 8, 7, JSSVGColorConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGColor::SVG_COLORTYPE_UNKNOWN, SVGColorEnumSVG_COLORTYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGColor::SVG_COLORTYPE_RGBCOLOR, SVGColorEnumSVG_COLORTYPE_RGBCOLORIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGColor::SVG_COLORTYPE_RGBCOLOR_ICCCOLOR, SVGColorEnumSVG_COLORTYPE_RGBCOLOR_ICCCOLORIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGColor::SVG_COLORTYPE_CURRENTCOLOR, SVGColorEnumSVG_COLORTYPE_CURRENTCOLORIsWrongUseDontCheckEnums);

class JSSVGColorConstructor : public DOMConstructorObject {
private:
    JSSVGColorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGColorConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGColorConstructor* ptr = new (JSC::allocateCell<JSSVGColorConstructor>(*exec->heap())) JSSVGColorConstructor(structure, globalObject);
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

const ClassInfo JSSVGColorConstructor::s_info = { "SVGColorConstructor", &DOMConstructorObject::s_info, &JSSVGColorConstructorTable, 0 };

JSSVGColorConstructor::JSSVGColorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGColorConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGColorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGColorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGColorConstructor, JSDOMWrapper>(exec, &JSSVGColorConstructorTable, this, propertyName, slot);
}

bool JSSVGColorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGColorConstructor, JSDOMWrapper>(exec, &JSSVGColorConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGColorPrototypeTableValues[] =
{
    { "SVG_COLORTYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_RGBCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_RGBCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_RGBCOLOR_ICCCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_RGBCOLOR_ICCCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_COLORTYPE_CURRENTCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGColorSVG_COLORTYPE_CURRENTCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setRGBColor", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGColorPrototypeFunctionSetRGBColor), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setRGBColorICCColor", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGColorPrototypeFunctionSetRGBColorICCColor), (intptr_t)2 THUNK_GENERATOR(0) },
    { "setColor", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGColorPrototypeFunctionSetColor), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGColorPrototypeTable = { 17, 15, JSSVGColorPrototypeTableValues, 0 };
const ClassInfo JSSVGColorPrototype::s_info = { "SVGColorPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGColorPrototypeTable, 0 };

JSObject* JSSVGColorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGColor>(exec, globalObject);
}

bool JSSVGColorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGColorPrototype, JSObject>(exec, &JSSVGColorPrototypeTable, this, propertyName, slot);
}

bool JSSVGColorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGColorPrototype, JSObject>(exec, &JSSVGColorPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGColor::s_info = { "SVGColor", &JSCSSValue::s_info, &JSSVGColorTable, 0 };

JSSVGColor::JSSVGColor(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGColor> impl)
    : JSCSSValue(structure, globalObject, impl)
{
}

void JSSVGColor::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGColor::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGColorPrototype::create(exec->globalData(), globalObject, JSSVGColorPrototype::createStructure(exec->globalData(), globalObject, JSCSSValuePrototype::self(exec, globalObject)));
}

bool JSSVGColor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGColor, Base>(exec, &JSSVGColorTable, this, propertyName, slot);
}

bool JSSVGColor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGColor, Base>(exec, &JSSVGColorTable, this, propertyName, descriptor);
}

JSValue jsSVGColorColorType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGColor* castedThis = static_cast<JSSVGColor*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGColor* imp = static_cast<SVGColor*>(castedThis->impl());
    JSValue result = jsNumber(imp->colorType());
    return result;
}


JSValue jsSVGColorRgbColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGColor* castedThis = static_cast<JSSVGColor*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGColor* imp = static_cast<SVGColor*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->rgbColor()));
    return result;
}


JSValue jsSVGColorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGColor* domObject = static_cast<JSSVGColor*>(asObject(slotBase));
    return JSSVGColor::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGColor::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGColorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGColorPrototypeFunctionSetRGBColor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGColor::s_info))
        return throwVMTypeError(exec);
    JSSVGColor* castedThis = static_cast<JSSVGColor*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGColor::s_info);
    SVGColor* imp = static_cast<SVGColor*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    const String& rgbColor(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setRGBColor(rgbColor, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGColorPrototypeFunctionSetRGBColorICCColor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGColor::s_info))
        return throwVMTypeError(exec);
    JSSVGColor* castedThis = static_cast<JSSVGColor*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGColor::s_info);
    SVGColor* imp = static_cast<SVGColor*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    const String& rgbColor(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& iccColor(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setRGBColorICCColor(rgbColor, iccColor, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGColorPrototypeFunctionSetColor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGColor::s_info))
        return throwVMTypeError(exec);
    JSSVGColor* castedThis = static_cast<JSSVGColor*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGColor::s_info);
    SVGColor* imp = static_cast<SVGColor*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    unsigned short colorType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& rgbColor(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& iccColor(ustringToString(exec->argument(2).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setColor(colorType, rgbColor, iccColor, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGColorSVG_COLORTYPE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGColorSVG_COLORTYPE_RGBCOLOR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGColorSVG_COLORTYPE_RGBCOLOR_ICCCOLOR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGColorSVG_COLORTYPE_CURRENTCOLOR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}


}

#endif // ENABLE(SVG)
