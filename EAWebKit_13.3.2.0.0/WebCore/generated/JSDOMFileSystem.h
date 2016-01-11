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

#ifndef JSDOMFileSystem_h
#define JSDOMFileSystem_h

#if ENABLE(FILE_SYSTEM)

#include "DOMFileSystem.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSDOMFileSystem : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSDOMFileSystem* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMFileSystem> impl)
    {
        JSDOMFileSystem* ptr = new (JSC::allocateCell<JSDOMFileSystem>(globalObject->globalData().heap)) JSDOMFileSystem(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    DOMFileSystem* impl() const { return m_impl.get(); }

private:
    RefPtr<DOMFileSystem> m_impl;
protected:
    JSDOMFileSystem(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DOMFileSystem>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDOMFileSystemOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, DOMFileSystem*)
{
    DEFINE_STATIC_LOCAL(JSDOMFileSystemOwner, jsDOMFileSystemOwner, ());
    return &jsDOMFileSystemOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, DOMFileSystem*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DOMFileSystem*);
DOMFileSystem* toDOMFileSystem(JSC::JSValue);

class JSDOMFileSystemPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDOMFileSystemPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMFileSystemPrototype* ptr = new (JSC::allocateCell<JSDOMFileSystemPrototype>(globalData.heap)) JSDOMFileSystemPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSDOMFileSystemPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsDOMFileSystemName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMFileSystemRoot(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMFileSystemConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)

#endif
