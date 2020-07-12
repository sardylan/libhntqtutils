set(HNTQTUTILS_SOURCES
        service.cpp)

set(HNTQTUTILS_HEADERS_PUBLIC
        service.hpp)

set(HNTQTUTILS_HEADERS_PRIVATE
        "")

find_package(Qt5 REQUIRED
        COMPONENTS Core)

add_library(hntqtutils
        ${HNTQTUTILS_SOURCES}
        ${HNTQTUTILS_HEADERS_PUBLIC}
        ${HNTQTUTILS_HEADERS_PRIVATE})

set_target_properties(hntqtutils PROPERTIES
        VERSION ${HNTQTUTILS_VERSION}
        SOVERSION ${HNTQTUTILS_SO_VERSION}
        PUBLIC_HEADER ${HNTQTUTILS_HEADERS_PUBLIC})

target_include_directories(hntqtutils PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

target_include_directories(hntqtutils PRIVATE
        .)

target_link_libraries(hntqtutils
        Qt5::Core)

target_compile_options(hntqtutils
        PRIVATE
        -Wall)
