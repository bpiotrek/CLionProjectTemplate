//#include "libMain.hxx"

#include <string>
#include <iostream>

#include "lib.hxx"

namespace my::app {
  void greetUser(const std::string& name) {
	std::cout << lib::makeGreeting(name) << std::endl;
  }
}
