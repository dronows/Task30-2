cmake_minimum_required (VERSION 3.8)

project ("Task30_2")

set(BUILD_CPR_TEST OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG 871ed52d350214a034f6ef8a3b8f51c5ce1bd400) 
FetchContent_MakeAvailable(cpr)


# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task30_2 "main.cpp" "Task30__2.h")
target_link_libraries(Task30_2 PRIVATE cpr::cpr)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.