#include "Human.hpp"

Human::Human()
{
 std::cout << "Human constructed "<< std::endl;
}
const Brain &Human::getBrain()
{
    return (this->brain);
}

const std::string Human::identify()
{
    return (this->brain.identify());
}

Human::~Human()
{
    std::cout << "Human deconstructed" <<std::endl;
}
