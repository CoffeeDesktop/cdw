/**********************************************************\

  Auto-generated cdwAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "cdwAPI.h"

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant cdwAPI::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant cdwAPI::echo(const FB::variant& msg)
{
    static int n(0);
    fire_echo("So far, you clicked this many times: ", n++);

    // return "foobar";
    return msg;
}

FB::variant cdwAPI::startServer(const FB::variant& msg)
{
    system("screen -dmS server http-server ~/coffeedesktop/");

    // return "foobar";
    return msg;
}
///////////////////////////////////////////////////////////////////////////////
/// @fn cdwPtr cdwAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
cdwPtr cdwAPI::getPlugin()
{
    cdwPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string cdwAPI::get_testString()
{
    return m_testString;
}

void cdwAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string cdwAPI::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void cdwAPI::testEvent()
{
    fire_test();
}
