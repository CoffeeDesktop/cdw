/**********************************************************\

  Auto-generated cdwAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "cdw.h"

#ifndef H_cdwAPI
#define H_cdwAPI

class cdwAPI : public FB::JSAPIAuto
{
public:
    ////////////////////////////////////////////////////////////////////////////
    /// @fn cdwAPI::cdwAPI(const cdwPtr& plugin, const FB::BrowserHostPtr host)
    ///
    /// @brief  Constructor for your JSAPI object.
    ///         You should register your methods, properties, and events
    ///         that should be accessible to Javascript from here.
    ///
    /// @see FB::JSAPIAuto::registerMethod
    /// @see FB::JSAPIAuto::registerProperty
    /// @see FB::JSAPIAuto::registerEvent
    ////////////////////////////////////////////////////////////////////////////
    cdwAPI(const cdwPtr& plugin, const FB::BrowserHostPtr& host) :
        m_plugin(plugin), m_host(host)
    {
        registerMethod("echo",      make_method(this, &cdwAPI::echo));
        registerMethod("startServer",      make_method(this, &cdwAPI::startServer));
        registerMethod("testEvent", make_method(this, &cdwAPI::testEvent));
        
        // Read-write property
        registerProperty("testString",
                         make_property(this,
                                       &cdwAPI::get_testString,
                                       &cdwAPI::set_testString));
        
        // Read-only property
        registerProperty("version",
                         make_property(this,
                                       &cdwAPI::get_version));
    }

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn cdwAPI::~cdwAPI()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~cdwAPI() {};

    cdwPtr getPlugin();

    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    FB::variant startServer(const FB::variant& msg);
    
    // Event helpers
    FB_JSAPI_EVENT(test, 0, ());
    FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));
    FB_JSAPI_EVENT(startServer, 2, (const FB::variant&, const int));

    // Method test-event
    void testEvent();

private:
    cdwWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;
};

#endif // H_cdwAPI

