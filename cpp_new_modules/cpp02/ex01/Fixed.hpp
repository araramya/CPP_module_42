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
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
        Fixed(const Fixed& old_obj);
        Fixed& operator=(const Fixed& old_obj);
        int    getRawBits( void ) const; //return fixed_point value
        void   setRawBits( int const raw); //set fixed_point number
        float  toFloat( void ) const;
        int    toInt( void ) const;
};
    std::ostream& operator<<(std::ostream& os, const Fixed& val);
#endif