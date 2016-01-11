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

#ifndef JSSVGSVGElement_h
#define JSSVGSVGElement_h

#if ENABLE(SVG)

#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGSVGElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGSVGElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGSVGElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGSVGElement> impl)
    {
        JSSVGSVGElement* ptr = new (JSC::allocateCell<JSSVGSVGElement>(globalObject->globalData().heap)) JSSVGSVGElement(structure, globalObject, impl);
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

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGSVGElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGSVGElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGSVGElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGSVGElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGSVGElementPrototype* ptr = new (JSC::allocateCell<JSSVGSVGElementPrototype>(globalData.heap)) JSSVGSVGElementPrototype(globalData, globalObject, structure);
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
    JSSVGSVGElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionSuspendRedraw(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionUnsuspendRedraw(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionUnsuspendRedrawAll(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionForceRedraw(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionPauseAnimations(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionUnpauseAnimations(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionAnimationsPaused(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetCurrentTime(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionSetCurrentTime(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetIntersectionList(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetEnclosureList(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCheckIntersection(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCheckEnclosure(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionDeselectAll(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGNumber(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGAngle(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGPoint(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGMatrix(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGTransform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionCreateSVGTransformFromMatrix(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetElementById(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetBBox(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetScreenCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGSVGElementPrototypeFunctionGetTransformToElement(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGSVGElementX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementContentScriptType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementContentScriptType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementContentStyleType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementContentStyleType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementViewport(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementPixelUnitToMillimeterX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementPixelUnitToMillimeterY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementScreenPixelToMillimeterX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementScreenPixelToMillimeterY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementUseCurrentView(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementUseCurrentView(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementCurrentScale(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementCurrentScale(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementCurrentTranslate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementSystemLanguage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementXmllang(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementXmlspace(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementClassName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementNearestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementFarthestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementViewBox(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementPreserveAspectRatio(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementZoomAndPan(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGSVGElementZoomAndPan(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGSVGElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsSVGSVGElementSVG_ZOOMANDPAN_UNKNOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementSVG_ZOOMANDPAN_DISABLE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGSVGElementSVG_ZOOMANDPAN_MAGNIFY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
