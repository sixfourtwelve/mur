# Getting Started

Welcome to mur! This guide will help you set up and run your first mur project.

## Prerequisites

- C++20 compatible compiler (GCC, Clang, MSVC)
- CMake >= 3.16
- Ninja (recommended)

## Clone & Build

```bash
git clone https://github.com/sixfourtwelve/mur.git
cd mur
cmake -GNinja -S . -B build
cmake --build build
```

## Run Tests

```bash
cd build
ctest
```

## Next Steps

- Explore the [API Reference](api.md)
- Read the [Contributing Guide](contributing.md)
