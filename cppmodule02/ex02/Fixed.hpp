#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int fixed_point;
        static const int fract_bits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &old);
        ~Fixed();

        Fixed &operator=(const Fixed &old);
        bool operator>(const Fixed &old) const;
        bool operator<(const Fixed &old) const;
        bool operator>=(const Fixed &old) const;
        bool operator<=(const Fixed &old) const;
        bool operator==(const Fixed &old) const;
        bool operator!=(const Fixed &old) const;
        Fixed operator+(const Fixed &old);
        Fixed operator-(const Fixed &old);
        Fixed operator*(const Fixed &old);
        Fixed operator/(const Fixed &old);
        Fixed operator++(); //pre
        Fixed operator++(int); //past;
        Fixed operator--();
        Fixed operator--(int);

        int getRawBits(void);
        void setRawBits(int const Raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &obj1, Fixed &obj2);
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
        static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& value);
// Fixed &min(Fixed &obj1, Fixed &obj2);
// Fixed &max(Fixed &obj1, Fixed &obj2);
// const Fixed &min(const Fixed &obj1, const Fixed &obj2);
// const Fixed &max(const Fixed &obj1, const Fixed &obj2);
#endif