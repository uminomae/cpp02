#include "Fixed.hpp"

// #define DEB

void myPutStr(std::string s1, std::string s2, std::string color);

int main(){
	{
		Fixed a;
		Fixed b(a);
		Fixed c;
		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
#ifdef DEB
	{
		myPutStr("=========", "===========", PINK201);
		myPutStr("DEB      ", "           ", PINK201);
		myPutStr("=========", "===========", PINK201);
		myPutStr("\n----start", " Fixed a;", PINK170);
		Fixed a;
		myPutStr("\n----start", " Fixed b(a);", PINK170);
		Fixed b(a);
		myPutStr("\n----start", " Fixed c;", PINK170);
		Fixed c;
		myPutStr("\n----start", " Fixed c = b;", PINK170);
		c = b;
		myPutStr("\n----start", " a.getRawBits()", PINK170);
		std::cout << a.getRawBits() << std::endl;
		myPutStr("\n----start", " b.getRawBits()", PINK170);
		std::cout << b.getRawBits() << std::endl;
		myPutStr("\n----start", " c.getRawBits()", PINK170);
		std::cout << c.getRawBits() << std::endl;
		myPutStr("----end", " scope", PINK170);
	}
#endif
	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}
