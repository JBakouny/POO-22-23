cmake_minimum_required(VERSION 3.14)

# set the project name and version
project(POOMake VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        03597a01ee50ed33e9dfd640b249b4be3799d395 # release-1.10.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_subdirectory(Person)

enable_testing()

add_executable(PooMake main.cpp)

target_link_libraries(
  PooMake
  Person
  GTest::gtest_main
)   

target_include_directories(PooMake PUBLIC
                            "${CMAKE_CURRENT_SOURCE_DIR}/Person"
                           )
                           
include(GoogleTest)
gtest_discover_tests(PooMake)