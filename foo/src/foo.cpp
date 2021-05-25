#include <iostream>
#include "foo/foo.hpp"

void foo(int d) {
  std::cerr << "foo() -> " << std::to_string(d) << std::endl;
}
