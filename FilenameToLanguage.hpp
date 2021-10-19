/*
  @file FilenameToLanguage.hpp

  Declaration of filenameToLanguage()
*/

#ifndef INCLUDE_FILENAMETOLANGUAGE_HPP
#define INCLUDE_FILENAMETOLANGUAGE_HPP

#include <string>

/** Language based on the filename
 * @param  filename Name of a source-code file
 * @retval language Programming language, empty string if no associated language
 */
std::string filenameToLanguage(const std::string& filename);

#endif
