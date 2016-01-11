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

#if ENABLE(DATABASE)

#include "JSSQLTransactionSync.h"

#include "SQLResultSet.h"
#include "SQLTransactionSync.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSQLTransactionSync);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLTransactionSyncPrototypeTableValues[] =
{
    { "executeSql", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSQLTransactionSyncPrototypeFunctionExecuteSql), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLTransactionSyncPrototypeTable = { 2, 1, JSSQLTransactionSyncPrototypeTableValues, 0 };
static const HashTable* getJSSQLTransactionSyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSQLTransactionSyncPrototypeTable);
}

const ClassInfo JSSQLTransactionSyncPrototype::s_info = { "SQLTransactionSyncPrototype", &JSC::JSNonFinalObject::s_info, 0, getJSSQLTransactionSyncPrototypeTable };

JSObject* JSSQLTransactionSyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLTransactionSync>(exec, globalObject);
}

bool JSSQLTransactionSyncPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSSQLTransactionSyncPrototypeTable(exec), this, propertyName, slot);
}

bool JSSQLTransactionSyncPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSSQLTransactionSyncPrototypeTable(exec), this, propertyName, descriptor);
}

const ClassInfo JSSQLTransactionSync::s_info = { "SQLTransactionSync", &JSDOMWrapper::s_info, 0, 0 };

JSSQLTransactionSync::JSSQLTransactionSync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLTransactionSync> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSQLTransactionSync::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLTransactionSync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSQLTransactionSyncPrototype::create(exec->globalData(), globalObject, JSSQLTransactionSyncPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

EncodedJSValue JSC_HOST_CALL jsSQLTransactionSyncPrototypeFunctionExecuteSql(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSQLTransactionSync::s_info))
        return throwVMTypeError(exec);
    JSSQLTransactionSync* castedThis = static_cast<JSSQLTransactionSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSQLTransactionSync::s_info);
    return JSValue::encode(castedThis->executeSql(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLTransactionSync* impl)
{
    return wrap<JSSQLTransactionSync>(exec, globalObject, impl);
}

SQLTransactionSync* toSQLTransactionSync(JSC::JSValue value)
{
    return value.inherits(&JSSQLTransactionSync::s_info) ? static_cast<JSSQLTransactionSync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATABASE)
