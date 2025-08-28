<p align="center">
	<img src="https://raw.githubusercontent.com/sixfourtwelve/mur/main/docs/assets/logo.png" alt="mur logo" width="200"/>
</p>

# mur

A modern C++ framework for context-driven applications. Fast, modular, and developer-friendly.

[![Build Status](https://img.shields.io/github/actions/workflow/status/sixfourtwelve/mur/ci.yml?branch=main)](https://github.com/sixfourtwelve/mur/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## 🚀 Features

- Modern C++ (C++20)
- CMake build system
- Unit testing with Catch2
- Code formatting (clang-format)
- Static analysis (clang-tidy)
- Modular context system

---

## 📦 Quickstart

```bash
git clone https://github.com/sixfourtwelve/mur.git
cd mur
cmake -GNinja -S . -B build
cmake --build build
cd build
ctest
```

---

## 📚 Documentation

- [Getting Started](docs/getting_started.md)
- [Building & Installation](docs/building.md)
- [Contributing Guide](docs/contributing.md)
- [API Reference](docs/api.md)

---

## 🛠️ Development

### Code Formatting

Uses clang-format (Linux style):

```bash
clang-format -i source/*.cpp include/**/*.hpp
```

### Static Analysis

Uses clang-tidy:

```bash
clang-tidy source/*.cpp -- -I include
```

---

## 🤝 Contributing

We welcome contributions! Please see [CONTRIBUTING.md](docs/contributing.md) for guidelines.

---

## 📄 License

mur is licensed under the MIT License. See [LICENSE](LICENSE) for details.

---

## 💬 Community & Support

- [Discussions](https://github.com/sixfourtwelve/mur/discussions)
- [Issues](https://github.com/sixfourtwelve/mur/issues)

---

## 📈 Project Structure

- `source/` - Main source code
- `include/` - Public headers
- `test/` - Unit tests
- `docs/` - Documentation

---

## 📢 Acknowledgements

mur uses [Catch2](https://github.com/catchorg/Catch2), [fmt](https://github.com/fmtlib/fmt), and [spdlog](https://github.com/gabime/spdlog).
