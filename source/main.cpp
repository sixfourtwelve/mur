#include <fmt/core.h>
#include "mur/context/context.hpp"

int main() {
	fmt::print("Hello from fmt!\n");
	Context context("");
	context.SayHello();
	return 0;
}
