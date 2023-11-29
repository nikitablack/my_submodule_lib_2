#include <iostream>
#include <bar.hpp>
#include <foo.hpp>

void bar()
{
    constexpr int32_t LIB_VERSION{1};

    std::cout << "My Submodule Lib 2: " << LIB_VERSION << std::endl;

    foo();
}