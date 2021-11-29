# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <bits/stdc++.h>

class Brain
{
    private:
        int iq_level;
    public:
       Brain();
        void setIQ(int iq_level);
        std::string identify() const;
        ~Brain();
};

#endif
