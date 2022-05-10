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

        //overloading of > < >= <= == !=
        bool operator>(const Fixed& other) const; 
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        //overloading of + - * /
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);

        //overloading of pre past ++ --
        Fixed operator++(); //pre
        Fixed operator++(int); //past
        Fixed operator--();
        Fixed operator--(int);

        //min max
        static Fixed& min(Fixed& val1, Fixed& val2);
        static Fixed& max(Fixed& val1, Fixed& val2);
        static const Fixed& min(const Fixed& val1, const Fixed& val2);
        static const Fixed& max(const Fixed& val1, const Fixed& val2);
};
    std::ostream& operator<<(std::ostream& os, const Fixed& val);
#endif