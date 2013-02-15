#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for CoffeeDesktop-wrapper
#
#\**********************************************************/

set(PLUGIN_NAME "cdw")
set(PLUGIN_PREFIX "CDE")
set(COMPANY_NAME "CoffeeDesktop")

# ActiveX constants:
set(FBTYPELIB_NAME cdwLib)
set(FBTYPELIB_DESC "cdw 1.0 Type Library")
set(IFBControl_DESC "cdw Control Interface")
set(FBControl_DESC "cdw Control Class")
set(IFBComJavascriptObject_DESC "cdw IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "cdw ComJavascriptObject Class")
set(IFBComEventSource_DESC "cdw IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID 049ecc42-172b-58d1-9729-e6ef60d35aac)
set(IFBControl_GUID 1ba478eb-ecf9-53b6-bf04-c07d7f2b8e93)
set(FBControl_GUID b3c05954-6353-5544-a089-ac2997c68007)
set(IFBComJavascriptObject_GUID 5ee602bc-9cf3-543e-a44d-24019cd6d131)
set(FBComJavascriptObject_GUID 88f5ad98-b72b-5cbd-9c17-c782eeed064f)
set(IFBComEventSource_GUID f1397a07-c4df-545e-865f-fe0dba14664b)
if ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 5009c676-5ab4-5f2a-8bf8-faa887a737c4)
else ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 30407795-13a1-54f5-8c83-17a87f091494)
endif ( FB_PLATFORM_ARCH_32 )

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "CoffeeDesktop.cdw")
set(MOZILLA_PLUGINID "coffeedesktop.com/cdw")

# strings
set(FBSTRING_CompanyName "CoffeeDesktop")
set(FBSTRING_PluginDescription "CoffeeDesktop server wrapper")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2013 CoffeeDesktop")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "CoffeeDesktop-wrapper")
set(FBSTRING_FileExtents "")
if ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "CoffeeDesktop-wrapper")  # No 32bit postfix to maintain backward compatability.
else ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "CoffeeDesktop-wrapper_${FB_PLATFORM_ARCH_NAME}")
endif ( FB_PLATFORM_ARCH_32 )
set(FBSTRING_MIMEType "application/x-cdw")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

#set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
