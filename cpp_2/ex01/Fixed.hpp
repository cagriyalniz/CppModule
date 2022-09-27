#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    public:
        // constr
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int i_param);
        Fixed(const float f_param);
        // destru
        ~Fixed();

        // operators
        Fixed & operator=(const Fixed &assign);//bu nedir hocam???
        float toFloat( void ) const;
        int toInt( void ) const;
        // getter setter
  /*       int getFixed_point_nmbr() const;
        void setFixed_point_nmbr(int fixed_point_nmbr);
        int getStore_nmbr_fractional_bits() const; */
        //void setstore_nmbr_fractional_bits(static const int store_nmbr_fractional_bits);
        //setter ı olamaz bence

        // other funcs
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _fixed_point_nmbr;
        static const int _store_nmbr_fractional_bits = 8;
};

# endif