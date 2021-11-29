 #include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}
void Brain::setIQ(int iq_level)
{
    this->iq_level = iq_level;
}

std::string Brain::identify() const
{
    std::stringstream stream;
    long addr = (long)this;
    stream << "Ox" << std::uppercase <<std::hex << addr;
    return(stream.str());
}

Brain::~Brain()
{
    std::cout << "Brain deconstucted" << std::endl;
}
// Brain::Brain(void)
// {
// 	this->_semisphere = "left";
// 	std::cout << "Hi, I'm " << this->_semisphere << " semisphere and I'm alone after lobotomy. It's boring now" << std::endl;
// 	return ;
// }

// std::string	Brain::identify(void) const
// {
// 	std::ostringstream oStream;
// 	oStream << (this);
// 	return (oStream.str());

// }

// Brain::~Brain(void)
// {
// 	std::cout << "I'm sour" << std::endl;
// 	return ;
// }