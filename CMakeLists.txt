# @file CMakeLists.txt
# 
# CMake files for CodeAnalysis program

cmake_minimum_required(VERSION 3.20)

# project info
project(CodeAnalysis)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Test CodeAnalysis
add_executable(CodeAnalysisTest CodeAnalysisTest.cpp CodeAnalysis.cpp xmlWrapper.cpp FilenameToLanguage.cpp)

# Test FilenameToLanguage
add_executable(FilenameToLanguageTest FilenameToLanguageTest.cpp FilenameToLanguage.cpp)

# Turn on all warnings, and make warnings errors
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

# Run tests
add_custom_target(test COMMENT "Test code analysis functions"
                       COMMAND ./FilenameToLanguageTest
                       COMMAND ./CodeAnalysisTest
                       DEPENDS CodeAnalysisTest FilenameToLanguageTest)
