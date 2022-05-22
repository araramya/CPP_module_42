#include "Serialization.hpp"

uintptr_t serialize(t_data *ptr)
{
    uintptr_t ret_val;

    ret_val = reinterpret_cast<uintptr_t>(ptr);
    return ret_val;
}

t_data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<t_data*>(raw));
}

int main()
{
    t_data* ptr = new t_data();
    ptr->x = 42;
    ptr->y = 24;
    uintptr_t srl = serialize(ptr);
    printf("%ld\n", srl);

    t_data* ptr1 = deserialize(srl);
    printf("%d\n", ptr1->x);

    delete ptr;
    return (0);
}