#include <iostream>
#include <bar.hpp>
#include <foo.hpp>

void bar()
{
<<<<<<< HEAD
    constexpr int32_t LIB_VERSION{4};
=======
    constexpr int32_t LIB_VERSION{3};
>>>>>>> bfd83bea267caeffefa362e06a713c60caf7b3dd

    std::cout << "My Submodule Lib 2: " << LIB_VERSION << std::endl;

    foo();
}
