# mur

A modern C++ project with CMake, unit testing, and code quality tools.

## Building

```bash
cmake -GNinja -S . -B ./build
cmake --build build
```

## Testing

```bash
cd build
ctest
```

## Code Formatting

Uses clang-format with Linux style. To format:

```bash
clang-format -i source/*.cpp include/**/*.hpp
```

## Static Analysis

Uses clang-tidy. To run:

```bash
clang-tidy source/*.cpp -- -I include
```
