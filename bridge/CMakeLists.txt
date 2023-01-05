cmake_minimum_required(VERSION 3.0.0)
project(bridge VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/include)
aux_source_directory(${CMAKE_SOURCE_DIR}/src srcFiles)

add_executable(bridge ${srcFiles})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
