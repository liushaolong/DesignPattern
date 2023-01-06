#include "txt_splitter.hpp"

txt_splitter::txt_splitter()
{
}

txt_splitter::txt_splitter(const txt_splitter &t)
{
}

splitter *txt_splitter::clone()
{
    std::cout << "new, txt_splitter!\n";
    return new txt_splitter(*this);
}