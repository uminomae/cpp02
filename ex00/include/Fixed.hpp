#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
private:
	int RawBits;
	static const int i = 8;//ゼロ初期化のあとにあらためて初期化を行えます。staticメンバ変数の型が、const な整数型か、const な enum型の場合に限っては、宣言と同時に初期化子を与えられます。
public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed &operator = (const Fixed &a);
	~Fixed();
	int getRawBits()const;
	void setRawBits(int const raw);
};


const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

#endif