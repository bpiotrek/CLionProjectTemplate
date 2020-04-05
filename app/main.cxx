#include <string>

#include "libMain.hxx"

int main(int argc, char** argv) {
  std::string name;

  if (argc >= 2)
	name = argv[1];

  my::app::greetUser(name);
}
