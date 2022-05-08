#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fracttional_bits = 8;
    
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& old_obj);
        Fixed& operator=(const Fixed& old_obj);
        int getRawBits( void ) const; //return fixed_point value
        void setRawbits( int const raw); //set fixed_point number
};

#endif