/*
  @file CodeAnalysis.cpp

  Implementation of analysis requests
*/

#include "CodeAnalysis.hpp"
#include "FilenameToLanguage.hpp"
#include "xmlWrapper.hpp"

#include <string>

/** Generate source analysis XML based on the request
 * Content is wrapped with an XML element that includes the metadata
 * @param request Data that forms the request
 * @retval Source analysis request in XML format
 * @retval Empty string if invalid
 */
std::string formatAnalysisXML(const AnalysisRequest& request) {

    // wrap the content with a unit element
    xmlWrapper wrap("src", "http://srcML.org/src");
    wrap.startElement("unit");
    wrap.addAttribute("language", request.option_language);
    wrap.addContent(request.source_code);
    wrap.endElement();

    return wrap.xml();
}
