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

#ifndef JSDOMApplicationCache_h
#define JSDOMApplicationCache_h

#if ENABLE(OFFLINE_WEB_APPLICATIONS)

#include "DOMApplicationCache.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSDOMApplicationCache : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSDOMApplicationCache* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMApplicationCache> impl)
    {
        JSDOMApplicationCache* ptr = new (JSC::allocateCell<JSDOMApplicationCache>(globalObject->globalData().heap)) JSDOMApplicationCache(structure, globalObject, impl);
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

    virtual void visitChildren(JSC::SlotVisitor&);

    DOMApplicationCache* impl() const { return m_impl.get(); }

private:
    RefPtr<DOMApplicationCache> m_impl;
protected:
    JSDOMApplicationCache(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DOMApplicationCache>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSDOMApplicationCacheOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, DOMApplicationCache*)
{
    DEFINE_STATIC_LOCAL(JSDOMApplicationCacheOwner, jsDOMApplicationCacheOwner, ());
    return &jsDOMApplicationCacheOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, DOMApplicationCache*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DOMApplicationCache*);
DOMApplicationCache* toDOMApplicationCache(JSC::JSValue);

class JSDOMApplicationCachePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDOMApplicationCachePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMApplicationCachePrototype* ptr = new (JSC::allocateCell<JSDOMApplicationCachePrototype>(globalData.heap)) JSDOMApplicationCachePrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSDOMApplicationCachePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMApplicationCachePrototypeFunctionUpdate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMApplicationCachePrototypeFunctionSwapCache(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMApplicationCachePrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMApplicationCachePrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMApplicationCachePrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsDOMApplicationCacheStatus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheOnchecking(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnchecking(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOnnoupdate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnnoupdate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOndownloading(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOndownloading(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOnprogress(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnprogress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOnupdateready(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnupdateready(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOncached(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOncached(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDOMApplicationCacheOnobsolete(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDOMApplicationCacheOnobsolete(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
// Constants

JSC::JSValue jsDOMApplicationCacheUNCACHED(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheIDLE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheCHECKING(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheDOWNLOADING(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheUPDATEREADY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDOMApplicationCacheOBSOLETE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(OFFLINE_WEB_APPLICATIONS)

#endif