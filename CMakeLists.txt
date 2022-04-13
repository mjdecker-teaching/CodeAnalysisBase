# @file CMakeLists.txt
# 
# CMake files for CodeAnalysis program

cmake_minimum_required(VERSION 2.8)

# Project info
project(CodeAnalysis)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Turn on all warnings
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic -std=c++17)
endif()

# Test CodeAnalysis
add_executable(CodeAnalysisTest CodeAnalysisTest.cpp CodeAnalysis.cpp xmlWrapper.cpp FilenameToLanguage.cpp)

# Test FilenameToLanguage
add_executable(FilenameToLanguageTest FilenameToLanguageTest.cpp FilenameToLanguage.cpp)

# Run tests
add_custom_target(test COMMENT "Test code analysis functions"
                       COMMAND ./FilenameToLanguageTest
                       COMMAND ./CodeAnalysisTest
                       DEPENDS CodeAnalysisTest FilenameToLanguageTest)
