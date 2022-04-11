/*
  @file CodeAnalysisTest.cpp

  Test program for analysis requests
*/

#include "CodeAnalysis.hpp"

#include <string>
#include <cassert>

int main() {

    // option language
    {
        AnalysisRequest request;
        request.source_code = R"(
if (a < b) a = b;
)";
        request.disk_filename    = "";
        request.entry_filename   = "";
        request.option_filename  = "";
        request.source_url       = "";
        request.option_url       = "";
        request.option_language  = "C++";
        request.default_language = "";
        request.option_hash      = "";
        request.option_loc       = -1;

        assert(formatAnalysisXML(request) ==
            R"(<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<src:unit xmlns:src="http://srcML.org/src" language="C++">
if (a &lt; b) a = b;
</src:unit>
)");
    }

    return 0;
}
