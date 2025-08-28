#pragma once

#include <string>

class Context final {
public:
	explicit Context(std::string str) noexcept;
	~Context() noexcept;

	void SayHello() const;

private:
	std::string str_;
};
