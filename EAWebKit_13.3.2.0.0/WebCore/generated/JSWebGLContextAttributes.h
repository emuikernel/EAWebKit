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

#ifndef JSWebGLContextAttributes_h
#define JSWebGLContextAttributes_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "WebGLContextAttributes.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebGLContextAttributes : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLContextAttributes* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLContextAttributes> impl)
    {
        JSWebGLContextAttributes* ptr = new (JSC::allocateCell<JSWebGLContextAttributes>(globalObject->globalData().heap)) JSWebGLContextAttributes(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    WebGLContextAttributes* impl() const { return m_impl.get(); }

private:
    RefPtr<WebGLContextAttributes> m_impl;
protected:
    JSWebGLContextAttributes(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebGLContextAttributes>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLContextAttributes*);
WebGLContextAttributes* toWebGLContextAttributes(JSC::JSValue);

class JSWebGLContextAttributesPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebGLContextAttributesPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLContextAttributesPrototype* ptr = new (JSC::allocateCell<JSWebGLContextAttributesPrototype>(globalData.heap)) JSWebGLContextAttributesPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebGLContextAttributesPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsWebGLContextAttributesAlpha(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesAlpha(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebGLContextAttributesDepth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesDepth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebGLContextAttributesStencil(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesStencil(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebGLContextAttributesAntialias(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesAntialias(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebGLContextAttributesPremultipliedAlpha(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesPremultipliedAlpha(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebGLContextAttributesPreserveDrawingBuffer(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebGLContextAttributesPreserveDrawingBuffer(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
