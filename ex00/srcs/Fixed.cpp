#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	RawBits = 0;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed &Fixed::operator = (const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a){
		RawBits = a.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const{
	std::cout << "getRawBits member function called" << std::endl;
	return RawBits;
}

void Fixed::setRawBits(int const raw){
	RawBits = raw;
}