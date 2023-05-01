#include "Fixed.hpp"

// #define MY_TEST

void myPutStr(std::string s1, std::string s2, std::string color);

std::ostream &operator <<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return out;
}

int main(){
{
	//case subject
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}
#ifdef MY_TEST
{
	myPutStr("=========", "===========", PINK201);
	myPutStr("DEB      ", "           ", PINK201);
	myPutStr("=========", "===========", PINK201);

	myPutStr("\ncomparison operators:", "\n", PINK198);
	
	myPutStr("Fixed(5.05f) > Fixed(2)", "", PINK183);
	bool a = Fixed(5.05f) > Fixed(2);
	std::cout << a << std::endl;
	myPutStr("Fixed(5.05f) < Fixed(2)", "", PINK183);
	bool b = Fixed(5.05f) < Fixed(2);
	std::cout << b << std::endl;
	myPutStr("Fixed(5.05f) >= Fixed(2)", "", PINK183);
	bool c = Fixed(5.05f) >= Fixed(2);
	std::cout << c << std::endl;
	myPutStr("Fixed(5.05f) <= Fixed(2)", "", PINK183);
	bool d = Fixed(5.05f) <= Fixed(2);
	std::cout << d << std::endl;
	myPutStr("Fixed(5.05f) == Fixed(2)", "", PINK183);
	bool e = Fixed(5.05f) == Fixed(2);
	std::cout << e << std::endl;
	myPutStr("Fixed(5.05f) != Fixed(2)", "", PINK183);
	bool f = Fixed(5.05f) != Fixed(2);
	std::cout << f << std::endl;

	myPutStr("\narithmetic operators:", "\n", PINK198);

	myPutStr("Fixed(5.05f) + Fixed(2)", "", PINK183);
	Fixed const w(Fixed(5.05f) + Fixed(2));
	std::cout << w << std::endl;
	myPutStr("Fixed(5.05f) - Fixed(2)", "", PINK183);
	Fixed const x(Fixed(5.05f) - Fixed(2));
	std::cout << x << std::endl;
	myPutStr("Fixed(5.05f) * Fixed(2)", "", PINK183);
	Fixed const y(Fixed(5.05f) * Fixed(2));
	std::cout << y << std::endl;
	myPutStr("Fixed(5.05f) / Fixed(2)", "", PINK183);
	Fixed const z(Fixed(5.05f) / Fixed(2));
	std::cout << z << std::endl;

	myPutStr("\nincrement/decrement", "\n", PINK198);

	Fixed A;
	myPutStr("A.RawBits", "", PINK183);
	std::cout << A.getRawBits() << std::endl;
	myPutStr("++A", "", PINK183);
	std::cout << (++A).getRawBits() << std::endl;
	myPutStr("A.RawBits", "", PINK183);
	std::cout << A.getRawBits() << std::endl;
	myPutStr("A++", "", PINK183);
	std::cout << (A++).getRawBits() << std::endl;
	myPutStr("A.RawBits", "", PINK183);
	std::cout << A.getRawBits() << std::endl;

	Fixed B;
	myPutStr("B.RawBits", "", PINK183);
	std::cout << B.getRawBits() << std::endl;
	myPutStr("--B", "", PINK183);
	std::cout << (--B).getRawBits() << std::endl;
	myPutStr("B.RawBits", "", PINK183);
	std::cout << B.getRawBits() << std::endl;
	myPutStr("B--", "", PINK183);
	std::cout << (B--).getRawBits() << std::endl;
	myPutStr("B.RawBits", "", PINK183);
	std::cout << B.getRawBits() << std::endl;


	myPutStr("\nmin/max", "\n", PINK198);
	
	myPutStr("Fixed::max(A, B)", "", PINK183);
	std::cout << Fixed::max(A, B) << std::endl;
	myPutStr("Fixed::min(A, B)", "", PINK183);
	std::cout << Fixed::min(A, B) << std::endl;
	myPutStr("Fixed const C = A;", " Fixed const D = B;", PINK183);
	Fixed const C = A;
	Fixed const D = B;
	myPutStr("Fixed::min(C, D)", "", PINK183);
	std::cout << Fixed::min(C, D) << std::endl;

	myPutStr("", "--end--scope", PINK170);
}
#endif
	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}
