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
      ~Fixed();
      int getRawBits( void ) const;
      void setRawBits(int const raw);
      Fixed(const int ival);
      Fixed(const float fval);
      Fixed(const Fixed &old);
      float toFloat( void ) const;
      int toInt( void ) const;
      Fixed &operator=(const Fixed &old);
};

    std::ostream& operator<<(std::ostream& os, const Fixed& value);

#endif