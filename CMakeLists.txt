cmake_minimum_required(VERSION 3.0)

set (HNTQTUTILS_VERSION "0.0.0")
set (HNTQTUTILS_SO_VERSION "1")

project(libhntqtutils
        VERSION "${HNTQTUTILS_VERSION}"
        DESCRIPTION "Various Qt Utilities")

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

option(BUILD_SHARED_LIBS "Enable building as a Shared library" TRUE)

add_subdirectory(src)
