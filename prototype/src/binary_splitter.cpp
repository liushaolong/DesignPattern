#include "binary_splitter.hpp"

binary_splitter::binary_splitter()
{
}

binary_splitter::binary_splitter(const binary_splitter &b)
{
}

splitter *binary_splitter::clone()
{

    std::cout << "new, binary_splitter!\n";
    return new binary_splitter(*this);
}