/*
  @file AnalysisRequest.hpp

  Header for analysis requests
*/

#ifndef INCLUDE_ANALYSISREQUEST_HPP
#define INCLUDE_ANALYSISREQUEST_HPP

#include <string>

/**
 * source_code      - read in source code
 * disk_filename    - name of file on disk
 * entry_filename   - current file entry in source archive
 * option_filename  - user specified filename attribute
 * source_url       - url of source code file/archive
 * option_url       - user specified url attribute
 * option_language  - user specified language
 * default_language - default language to use
 * option_hash      - user specified hash
 */
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
