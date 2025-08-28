#include <spdlog/spdlog.h>
#include <mur/context/context.hpp>
#include <string>

Context::Context(std::string str) noexcept : str_(std::move(str)) {
}

void Context::SayHello() const {
	if (str_.empty()) {
		spdlog::info("Hello from Context: (empty string)");
		return;
	}

	spdlog::info("Hello from Context: {}", str_);
}

Context::~Context() noexcept {
}
