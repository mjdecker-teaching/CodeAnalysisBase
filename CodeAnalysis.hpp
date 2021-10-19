/*
  @file CodeAnalysis.hpp

  Header for analysis requests
*/

#ifndef INCLUDE_CODEANALYSIS_HPP
#define INCLUDE_CODEANALYSIS_HPP

#include "AnalysisRequest.hpp"

#include <string>

/** Generate source analysis XML based on the request
 * Content is wrapped with an XML element that includes the metadata
 * @param request Data that forms the request
 * @retval Source analysis request in XML format
 * @retval Empty string if invalid
 */
std::string formatAnalysisXML(const AnalysisRequest& request);

#endif
