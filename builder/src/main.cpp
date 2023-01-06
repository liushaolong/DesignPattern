#include "house_director.hpp"
#include "stone_house.hpp"
#include "stone_house_builder.hpp"
int main(int, char **)
{
    house_builder *hb =new stone_house_builder(new stone_house());
    house_director *hd=new house_director(hb);
    house *h=hd->construct();
    
}
