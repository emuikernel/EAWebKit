Building EA WebKit
------------------

This version supports the Win32 platform.

EA WebKit requires that you have proper development tools installed.  Contact your platform providers to install the proper SDKs.

It is recomended to unzip these files to as shallow a location on your hard-drive as possible. EAWebKit has a deep directory structure and you may run into OS path-size limits that prevent a successful build if it is installed in too deep a directory. 

Developer Requirements
----------------------

*Windows 32-bit*
 1. Install developer tools
	EA WebKit requires Visual Studio and Windows SDK to build.  
		
 2. Open the \Projects\Win32\EAWebKit\<EA WebKit Version No>\EAWebKit.sln
 3. Execute Build.

 This version was tested with VS2010 and Windows SDK version 6.1.6001.18000.
