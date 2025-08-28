# Building & Installation

## Build Options

mur uses CMake for configuration and Ninja for fast builds.

### Basic Build

```bash
cmake -GNinja -S . -B build
cmake --build build
```

### Build with Tests

```bash
cmake -GNinja -S . -B build -DENABLE_TESTS=ON
cmake --build build
cd build
ctest
```

### Formatting & Analysis

- Format: `clang-format -i source/*.cpp include/**/*.hpp`
- Static Analysis: `clang-tidy source/*.cpp -- -I include`

## Install

mur is a library/framework. To use in your project, add as a submodule or link to the built library in `build/mur`.
