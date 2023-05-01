#include "Fixed.hpp"

//ex00
Fixed::Fixed(){
	RawBits = 0;
}

Fixed::Fixed(const Fixed &f_num){
	*this = f_num;
}

Fixed &Fixed::operator =(const Fixed &f_num){
	if (this != &f_num){
		RawBits = f_num.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits()const{
	return RawBits;
}

void Fixed::setRawBits(int const raw){
	RawBits = raw;
}


//ex01
Fixed::Fixed(const int i_num){
	RawBits = i_num << frct_bits;
}

Fixed::Fixed(const float fp_num){
	RawBits = (int)(roundf(fp_num * (1 << frct_bits)));
}

float Fixed::toFloat()const{
	return (float)RawBits / (1 << frct_bits);
}

int Fixed::toInt()const{
	return RawBits >> frct_bits;
}

//ex02

bool Fixed::operator >(const Fixed &f_rhs)const{
		return RawBits > f_rhs.getRawBits();
}

bool Fixed::operator <(const Fixed &f_rhs)const{
		return RawBits < f_rhs.getRawBits();
}

bool Fixed::operator >=(const Fixed &f_rhs)const{
		return RawBits >= f_rhs.getRawBits();
}

bool Fixed::operator <=(const Fixed &f_rhs)const{
		return RawBits <= f_rhs.getRawBits();
}

bool Fixed::operator ==(const Fixed &f_rhs)const{
		return RawBits == f_rhs.getRawBits();
}

bool Fixed::operator !=(const Fixed &f_rhs)const{
		return RawBits != f_rhs.getRawBits();
}


Fixed Fixed::operator +(const Fixed &f_rhs)const{
		int const raw = getRawBits() + f_rhs.getRawBits();
		float fp_num = (float)raw / (1 << frct_bits);
		return Fixed(fp_num);
}

Fixed Fixed::operator -(const Fixed &f_rhs)const{
		int const raw = getRawBits() - f_rhs.getRawBits();
		float fp_num = (float)raw / (1 << frct_bits);
		return Fixed(fp_num);
}

Fixed Fixed::operator *(const Fixed &f_rhs)const{
		long long const raw = (long long)getRawBits() * f_rhs.getRawBits() >> frct_bits;
		float fp_num = (float)raw / (1 << frct_bits);
		return Fixed(fp_num);
}

Fixed Fixed::operator /(const Fixed &f_rhs)const{
		int const raw = getRawBits() / f_rhs.getRawBits() << frct_bits;
		float fp_num = (float)raw / (1 << frct_bits);
		return Fixed(fp_num);
}


Fixed Fixed::operator ++(){
		++RawBits;
		return *this;
}

Fixed Fixed::operator ++(int){
		Fixed old = *this;
		++RawBits;
		return old;
}

Fixed Fixed::operator --(){
		--RawBits;
		return *this;
}

Fixed Fixed::operator --(int){
		Fixed old = *this;
		--RawBits;
		return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return a <= b? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b){
	return a <= b? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return a >= b? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
	return a >= b? a : b;
}