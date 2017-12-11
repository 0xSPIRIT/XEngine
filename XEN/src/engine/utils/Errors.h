#pragma once

#include <iostream>
#include <string>

namespace xen {
	class Errors {
	public:
		static void fatal(const std::string& msg);
		static void warning(const std::string& msg);
	};
}