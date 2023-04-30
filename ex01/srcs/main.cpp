#include "Fixed.hpp"

#define DEB

void myPutStr(std::string s1, std::string s2, std::string color);

std::ostream &operator <<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return out;
}

int main(){
		//case subject
		Fixed a;
		Fixed const b( 10 ); 
		Fixed const c( 42.42f ); 
		Fixed const d( b );
		a = Fixed( 1234.4321f );
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	

#ifdef DEB
		myPutStr("=========", "===========", PINK201);
		myPutStr("DEB      ", "           ", PINK201);
		myPutStr("=========", "===========", PINK201);
		myPutStr("", "a.getRawBits() ", PINK170);
		std::cout << a.getRawBits() << std::endl;
		myPutStr("", "b.getRawBits() ", PINK170);
		std::cout << b.getRawBits() << std::endl;
		myPutStr("", "c.getRawBits() ", PINK170);
		std::cout << c.getRawBits() << std::endl;
		myPutStr("", "d.getRawBits() ", PINK170);
		std::cout << d.getRawBits() << std::endl;
		myPutStr("", "--end--scope", PINK170);

#endif
	return 0;
	}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}
