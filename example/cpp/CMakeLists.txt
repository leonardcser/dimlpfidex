cmake_minimum_required(VERSION 3.25.2)
project(example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-O3")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

FILE(GLOB SOURCE_FILES
    src/*.cpp
)

FILE(GLOB HEADER_FILES
    src/*.hpp
)

# make variables visible to external CMakeLists.txt
set(SOURCE_FILES "${SOURCE_FILES}" CACHE INTERNAL "")
set(HEADER_FILES "${HEADER_FILES}" CACHE INTERNAL "")

add_library(examplelib SHARED ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(
    examplelib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib
)
