#include "Errors.h"

void xen::Errors::fatal(const std::string& msg) {
	std::cerr << "Fatal Error: " << msg << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	std::cin.get();
	std::exit(EXIT_FAILURE);
}

void xen::Errors::warning(const std::string& msg) {
	std::cout << "Warning: " << msg << std::endl;
}