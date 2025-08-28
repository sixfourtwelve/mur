cmake_minimum_required(VERSION 3.16)
project(mur VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Fetch Catch2
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.4.0
)
FetchContent_MakeAvailable(Catch2)

# Include directories
include_directories(include)

# Source files
file(GLOB_RECURSE SOURCES "source/*.cpp")

# Main executable
add_executable(mur ${SOURCES})

# Fetch fmt
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.2.1
)
FetchContent_MakeAvailable(fmt)

# Fetch spdlog
FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG v1.13.0
)
FetchContent_MakeAvailable(spdlog)

# Link fmt and spdlog to mur
target_link_libraries(mur PRIVATE fmt::fmt spdlog::spdlog)

# Test files
file(GLOB_RECURSE TEST_SOURCES "test/*.cpp" "test/*.hpp")

# Test executable
add_executable(mur_tests ${TEST_SOURCES})
target_link_libraries(mur_tests PRIVATE Catch2::Catch2WithMain)

# Enable testing
enable_testing()
add_test(NAME mur_tests COMMAND mur_tests)
