#include "Classes.hpp"

Base* generate(void)
{
    A a;
    B b;
    C c;

    int rand_num = rand() % 3;
    if (rand_num == 1)
        return (new A());
    else if (rand_num == 0)
        return (new B());
    else 
        return (new C());
}

void identify(Base* p_base)
{
    if(dynamic_cast<A*>(p_base))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p_base))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p_base))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not Found!" << std::endl;
}

void identify(Base& r_base)
{
try
	{
		A &a = dynamic_cast<A&>(r_base);
		std::cout << "A" << std::endl;
        (void)a;
	}
	catch(...){}
	try
	{
		B &b = dynamic_cast<B&>(r_base);
		std::cout << "B" << std::endl;
        (void)b;
	}
	catch(...){}
	try
	{
		C &c = dynamic_cast<C&>(r_base);
		std::cout << "C" << std::endl;
        (void)c;
	}
	catch(...){}
       
}

int main()
{
    Base *base = generate();
    std::cout << "Base *p :: " ;
    identify(base);
    std::cout << "Base &p :: ";
    identify(*base);
}