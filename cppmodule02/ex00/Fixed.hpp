#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private: 
        int fixed_point;
        static const int fract_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &old);
        Fixed  &operator=(const Fixed &old);
        int getRawBits( void ) const;
        void setRawBits(int const raw);

};
#endif