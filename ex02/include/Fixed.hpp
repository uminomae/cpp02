#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
private:
	int RawBits;
	static const int frct_bits = 8;
public:
//ex00
	Fixed();
	Fixed(const Fixed &num);
	Fixed &operator =(const Fixed &num);
	~Fixed();
	int getRawBits()const;
	void setRawBits(int const raw);
//ex01
	Fixed(const int num);
	Fixed(const float num);
	float toFloat()const;
	int toInt()const;
//ex02
	bool operator >(const Fixed &f_rhs)const;
	bool operator <(const Fixed &f_rhs)const;
	bool operator >=(const Fixed &f_rhs)const;
	bool operator <=(const Fixed &f_rhs)const;
	bool operator ==(const Fixed &f_rhs)const;
	bool operator !=(const Fixed &f_rhs)const;

	Fixed operator +(const Fixed &f_rhs)const;
	Fixed operator -(const Fixed &num)const;
	Fixed operator *(const Fixed &num)const;
	Fixed operator /(const Fixed &num)const;

	Fixed operator ++();
	Fixed operator ++(int);
	Fixed operator --();
	Fixed operator --(int i);

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

#endif