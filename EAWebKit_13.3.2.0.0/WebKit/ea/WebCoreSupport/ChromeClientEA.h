/*
 * Copyright (C) 2006 Zack Rusin <zack@kde.org>
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 * Copyright (C) 2011, 2012 Electronic Arts, Inc. All rights reserved.
 * 
 * All rights reserved.
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

#ifndef ChromeClientEA_H
#define ChromeClientEA_H

#include "ChromeClient.h"
#include "FloatRect.h"
#include "KURL.h"
#include "PlatformString.h"
#include <wtf/PassOwnPtr.h>
#include <wtf/RefCounted.h>

namespace EA
{
namespace WebKit
{
class WebPage;
}
}

namespace WebCore {

    class FileChooser;
    class FloatRect;
    class Page;
    struct FrameLoadRequest;
    struct ViewportArguments;

    class ChromeClientEA : public ChromeClient
    {
    public:
		ChromeClientEA(EA::WebKit::WebPage* webPage);
        virtual ~ChromeClientEA();
        virtual void chromeDestroyed();

    	virtual void* webView() const { return 0; }
        virtual void setWindowRect(const FloatRect&);
        virtual FloatRect windowRect();

        virtual FloatRect pageRect();

        virtual void focus();
        virtual void unfocus();

        virtual bool canTakeFocus(FocusDirection);
        virtual void takeFocus(FocusDirection);

        virtual void focusedNodeChanged(Node*);
        virtual void focusedFrameChanged(Frame*);

        virtual Page* createWindow(Frame*, const FrameLoadRequest&, const WindowFeatures&, const NavigationAction&);
        virtual void show();

        virtual bool canRunModal();
        virtual void runModal();

        virtual void setToolbarsVisible(bool);
        virtual bool toolbarsVisible();

        virtual void setStatusbarVisible(bool);
        virtual bool statusbarVisible();

        virtual void setScrollbarsVisible(bool);
        virtual bool scrollbarsVisible();

        virtual void setMenubarVisible(bool);
        virtual bool menubarVisible();

        virtual void setResizable(bool);

        virtual void addMessageToConsole(MessageSource, MessageType, MessageLevel, const String& message,
                                         unsigned int lineNumber, const String& sourceID);

        virtual bool canRunBeforeUnloadConfirmPanel();
        virtual bool runBeforeUnloadConfirmPanel(const String& message, Frame* frame);

        virtual void closeWindowSoon();

        virtual void runJavaScriptAlert(Frame*, const String&);
        virtual bool runJavaScriptConfirm(Frame*, const String&);
        virtual bool runJavaScriptPrompt(Frame*, const String& message, const String& defaultValue, String& result);
        virtual bool shouldInterruptJavaScript();

        virtual void setStatusbarText(const String&);

    	virtual KeyboardUIMode keyboardUIMode();
        virtual IntRect windowResizerRect() const;

        virtual void invalidateWindow(const IntRect&, bool);
        virtual void invalidateContentsAndWindow(const IntRect&, bool);
        virtual void invalidateContentsForSlowScroll(const IntRect&, bool);
        virtual void scroll(const IntSize& scrollDelta, const IntRect& rectToScroll, const IntRect& clipRect);
#if ENABLE(TILED_BACKING_STORE)
    	virtual void delegatedScrollRequested(const IntPoint& scrollPoint);
#endif

        virtual IntPoint screenToWindow(const IntPoint&) const;
        virtual IntRect windowToScreen(const IntRect&) const;
        virtual PlatformPageClient platformPageClient() const;
        virtual void contentsSizeChanged(Frame*, const IntSize&) const;

        virtual void scrollbarsModeDidChange() const { }
        virtual void mouseDidMoveOverElement(const HitTestResult&, unsigned modifierFlags);

        virtual void setToolTip(const String&, TextDirection);

        virtual void print(Frame*);
#if ENABLE(DATABASE)
        virtual void exceededDatabaseQuota(Frame*, const String&);
#endif
#if ENABLE(OFFLINE_WEB_APPLICATIONS)
        virtual void reachedMaxAppCacheSize(int64_t spaceNeeded);
    	virtual void reachedApplicationCacheOriginQuota(SecurityOrigin*, int64_t totalSpaceNeeded);
#endif
#if ENABLE(CONTEXT_MENUS)
    virtual void showContextMenu() { }
#endif

#if ENABLE(NOTIFICATIONS)
        virtual NotificationPresenter* notificationPresenter() const;
#endif

#if USE(ACCELERATED_COMPOSITING)
    // This is a hook for WebCore to tell us what we need to do with the GraphicsLayers.
    virtual void attachRootGraphicsLayer(Frame*, GraphicsLayer*);
    virtual void setNeedsOneShotDrawingSynchronization();
    virtual void scheduleCompositingLayerSync();
	virtual CompositingTriggerFlags allowedCompositingTriggers() const;
	virtual bool allowsAcceleratedCompositing() const;
#endif

#if ENABLE(TILED_BACKING_STORE)
        virtual IntRect visibleRectForTiledBackingStore() const;
#endif

#if ENABLE(TOUCH_EVENTS)
        virtual void needTouchEvents(bool) { }
#endif

#if ENABLE(REQUEST_ANIMATION_FRAME)
        virtual void scheduleAnimation(void);
#endif

        virtual void runOpenPanel(Frame*, PassRefPtr<FileChooser>);
     	virtual void loadIconForFiles(const Vector<String>&, FileIconLoader*);

        virtual void formStateDidChange(const Node*) { }

        virtual void setCursor(const Cursor&);
        virtual void setCursorHiddenUntilMouseMoves(bool) { }
    
        virtual void scrollRectIntoView(const IntRect&) const { }
    
        virtual void requestGeolocationPermissionForFrame(Frame*, Geolocation*) { }
        virtual void cancelGeolocationPermissionRequestForFrame(Frame*, Geolocation*) { }

        virtual bool selectItemWritingDirectionIsNatural();
    	virtual bool selectItemAlignmentFollowsMenuWritingDirection();
        virtual PassRefPtr<PopupMenu> createPopupMenu(PopupMenuClient*) const;
        virtual PassRefPtr<SearchPopupMenu> createSearchPopupMenu(PopupMenuClient*) const;
        virtual void populateVisitedLinks();

        virtual void dispatchViewportDataDidChange(const ViewportArguments&) const;

    	virtual bool shouldRubberBandInDirection(WebCore::ScrollDirection) const { return true; }
	    virtual void numWheelEventHandlersChanged(unsigned) { }
        virtual bool supportsFullscreenForNode(const Node* node);

		EA::WebKit::WebPage* m_webPage;
        WebCore::KURL lastHoverURL;
        WTF::String lastHoverTitle;
        WTF::String lastHoverContent;

        bool toolBarsVisible;
        bool statusBarVisible;
        bool menuBarVisible;

        static bool dumpVisitedLinksCallbacks;
    };
}

#endif
