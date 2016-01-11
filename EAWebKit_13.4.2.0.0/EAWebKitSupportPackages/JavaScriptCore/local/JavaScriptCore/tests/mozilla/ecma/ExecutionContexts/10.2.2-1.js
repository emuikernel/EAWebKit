/* The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is Mozilla Communicator client code, released March
 * 31, 1998.
 *
 * The Initial Developer of the Original Code is Netscape Communications
 * Corporation. Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s): 
 * 
 */
/**
    File Name:          10.2.2-1.js
    ECMA Section:       10.2.2 Eval Code
    Description:

    When control enters an execution context for eval code, the previous
    active execution context, referred to as the calling context, is used to
    determine the scope chain, the variable object, and the this value. If
    there is no calling context, then initializing the scope chain, variable
    instantiation, and determination of the this value are performed just as
    for global code.

    The scope chain is initialized to contain the same objects, in the same
    order, as the calling context's scope chain.  This includes objects added
    to the calling context's scope chain by WithStatement.

    Variable instantiation is performed using the calling context's variable
    object and using empty property attributes.

    The this value is the same as the this value of the calling context.

    Author:             christine@netscape.com
    Date:               12 november 1997
*/

    var SECTION = "10.2.2-1";
    var VERSION = "ECMA_1";
    startTest();
    var TITLE   = "Eval Code";

    writeHeaderToLog( SECTION + " "+ TITLE);

    var testcases = new Array();

    var THIS = eval("this");

    testcases[tc++] = new TestCase( SECTION,
                                    "this +''",
                                    GLOBAL,
                                    THIS + "" );

    var GLOBAL_PROPERTIES = new Array();
    var i = 0;

    for ( p in THIS ) {
        GLOBAL_PROPERTIES[i++] = p;
    }

    for ( i = 0; i < GLOBAL_PROPERTIES.length; i++ ) {
        testcases[tc++] = new TestCase( SECTION,
                                        GLOBAL_PROPERTIES[i] +" == THIS["+GLOBAL_PROPERTIES[i]+"]",
                                        true,
                                        eval(GLOBAL_PROPERTIES[i]) == eval( "THIS[GLOBAL_PROPERTIES[i]]") );
    }

    //  this in eval statements is the same as this value of the calling context

    var RESULT = THIS == this;

    testcases[tc++] = new TestCase( SECTION,
                                    "eval( 'this == THIS' )",
                                    true,
                                    RESULT );

    var RESULT = THIS +'';

    testcases[tc++] = new TestCase( SECTION,
                                    "eval( 'this + \"\"' )",
                                    GLOBAL,
                                    RESULT );


    testcases[tc++] = new TestCase( SECTION,
                                    "eval( 'this == THIS' )",
                                    true,
                                    eval( "this == THIS" ) );

    testcases[tc++] = new TestCase( SECTION,
                                    "eval( 'this + \"\"' )",
                                    GLOBAL,
                                    eval( "this +''") );


    test();

function test() {
    for ( tc=0; tc < testcases.length; tc++ ) {
        testcases[tc].passed = writeTestCaseResult(
                            testcases[tc].expect,
                            testcases[tc].actual,
                            testcases[tc].description +" = "+
                            testcases[tc].actual );

        testcases[tc].reason += ( testcases[tc].passed ) ? "" : "wrong value ";
    }
    stopTest();
    return ( testcases );
}
