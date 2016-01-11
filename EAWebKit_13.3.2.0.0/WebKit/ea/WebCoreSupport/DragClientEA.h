/*
 * Copyright (C) 2007 Apple Inc.  All rights reserved.
 * Copyright (C) 2011 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "DragClient.h"
namespace EA
{
namespace WebKit
{
class WebPage;
}
}
namespace WebCore {

class DragClientEA : public DragClient {
public:
	DragClientEA(EA::WebKit::WebPage* webPage) : m_webPage(webPage) {};
    virtual void willPerformDragDestinationAction(DragDestinationAction,
                                                  DragData*);
    virtual WebCore::DragDestinationAction actionMaskForDrag(DragData*);
    virtual void dragControllerDestroyed();
    virtual DragSourceAction dragSourceActionMaskForPoint(const IntPoint&);
    virtual void willPerformDragSourceAction(DragSourceAction, const IntPoint&, Clipboard*);    
    virtual void startDrag(DragImageRef dragImage, const IntPoint& dragImageOrigin, const IntPoint& eventPos, Clipboard*, Frame*, bool linkDrag = false);
    virtual DragImageRef createDragImageForLink(KURL&, const String& label, Frame*);
private:
	EA::WebKit::WebPage* m_webPage;
};

}
