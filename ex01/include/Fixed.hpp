#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
private:
	int RawBits;
	static const int frct_bits = 8;//ゼロ初期化のあとにあらためて初期化を行えます。staticメンバ変数の型が、const な整数型か、const な enum型の場合に限っては、宣言と同時に初期化子を与えられます。
public:
	Fixed();
	Fixed(const Fixed &num);
	Fixed &operator = (const Fixed &num);
	~Fixed();
	
	Fixed(const int num);
	Fixed(const float num);
	
	int getRawBits()const;
	void setRawBits(int const raw);

	float toFloat()const;
	int toInt()const;

};

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

#endif