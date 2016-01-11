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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8TestSerializedScriptValueInterface.h"

#if ENABLE(Condition1) || ENABLE(Condition2)

#include "RuntimeEnabledFeatures.h"
#include "SerializedScriptValue.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TestSerializedScriptValueInterface::info = { V8TestSerializedScriptValueInterface::GetTemplate, V8TestSerializedScriptValueInterface::derefObject, 0, 0 };

namespace TestSerializedScriptValueInterfaceInternal {

template <typename T> void V8_USE(T) { }

} // namespace TestSerializedScriptValueInterfaceInternal

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TestSerializedScriptValueInterfaceTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "TestSerializedScriptValueInterface", v8::Persistent<v8::FunctionTemplate>(), V8TestSerializedScriptValueInterface::internalFieldCount,
        0, 0,
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TestSerializedScriptValueInterface::GetRawTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->rawTemplateMap().find(&info);
    if (result != data->rawTemplateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ = createRawTemplate();
    data->rawTemplateMap().add(&info, templ);
    return templ;
}

v8::Persistent<v8::FunctionTemplate> V8TestSerializedScriptValueInterface::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TestSerializedScriptValueInterfaceTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TestSerializedScriptValueInterface::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TestSerializedScriptValueInterface::wrapSlow(TestSerializedScriptValueInterface* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    SerializedScriptValue::deserializeAndSetProperty(wrapper, "value", static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), impl->value());
    v8::Persistent<v8::Object> wrapperHandle = v8::Persistent<v8::Object>::New(wrapper);

    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    getDOMObjectMap().set(impl, wrapperHandle);
    return wrapper;
}

void V8TestSerializedScriptValueInterface::derefObject(void* object)
{
    static_cast<TestSerializedScriptValueInterface*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(Condition1) || ENABLE(Condition2)
