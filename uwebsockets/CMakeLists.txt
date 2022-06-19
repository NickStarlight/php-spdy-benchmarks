cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "spdy-c++-benchmarks")
set(PROJECT_VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB SOURCES
	src/*.h
	src/*.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})