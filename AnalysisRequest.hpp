/*
  @file AnalysisRequest.hpp

  Header for analysis requests
*/

#ifndef INCLUDE_ANALYSISREQUEST_HPP
#define INCLUDE_ANALYSISREQUEST_HPP

#include <string>

struct AnalysisRequest {
    std::string source_code;
    std::string disk_filename;
    std::string entry_filename;
    std::string option_filename;
    std::string source_url;
    std::string option_url;
    std::string option_language;
    std::string default_language;
    std::string option_hash;
    int option_loc = 0;
};

#endif
