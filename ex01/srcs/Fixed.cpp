#include "Fixed.hpp"

//ex00
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	RawBits = 0;
}

Fixed::Fixed(const Fixed &f_num){
	std::cout << "Copy constructor called" << std::endl;
	*this = f_num;
}

Fixed &Fixed::operator = (const Fixed &f_num){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f_num){
		RawBits = f_num.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const{
	// std::cout << "getRawBits member function called" << std::endl;
	return RawBits;
}

void Fixed::setRawBits(int const raw){
	RawBits = raw;
}


//ex01
Fixed::Fixed(const int i_num){
	std::cout << "Int constructor called" << std::endl;
	RawBits = i_num << frct_bits;
}

Fixed::Fixed(const float fp_num){
	std::cout << "Float constructor called" << std::endl;
	RawBits = (int)(roundf(fp_num * (1 << frct_bits)));
}

float Fixed::toFloat()const{
	return (float)RawBits / (1 << frct_bits);
}

int Fixed::toInt()const{
	return RawBits >> frct_bits;
}