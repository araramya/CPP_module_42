# include "Pony.hpp"

void ponyOnTheStack()
{
    Pony stack_pony("Stackopoyan", "Green");
    stack_pony.intro();
    stack_pony.magic();
}

void ponyOnTheHeap()
{
    Pony *heap_pony = new Pony("Heapoyan", "Blue");
    heap_pony->intro();
    heap_pony->magic();
    delete heap_pony;
}
int main()
{
    ponyOnTheStack();
    std::cout << std::endl;
    ponyOnTheHeap();
    std::cout << std::endl;
}