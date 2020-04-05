//#include "lib.hxx"

#include <string>

namespace my::lib {
  std::string makeGreeting(const std::string& name) {
	std::string result = "Hello, ";
	if (name == "") {
	  result.append("World!");
	} else {
	  result.append(name);
	  result.append("!");
	}

	return result;
  }
}
