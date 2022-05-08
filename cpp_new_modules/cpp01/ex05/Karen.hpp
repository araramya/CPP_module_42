#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
    private:
        void Debug(void);
        void Info(void);
        void Warrning(void);
        void Error(void);
    
    public:
        void complain(std::string level);
};
#endif