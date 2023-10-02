#include "Fixed.hpp"
#include <iostream>
#include <cstdio>


const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(x << 8);
}

Fixed::Fixed(const float y)
{
	int	int_part;
	float	fract_part;

	std::cout << "Float constructor called" << std::endl;
	int_part = (int)roundf(y) << 8;
	fract_part = y - roundf(y);
	int_part += (int)roundf(fract_part * 256.0);
	this->setRawBits((int)int_part) ;
}

Fixed::Fixed(const Fixed& b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& b)
{
	 std::cout << "Copy assignment operator called" << std::endl;
	 if (this != &b)
	 {
	 	this->setRawBits(b.getRawBits());
	 }
	 return (*this);
}

void	Fixed::setRawBits(const int fract)
{
	this->_integer = fract;
}

int	Fixed::getRawBits() const
{		
	return (this->_integer);
}

float	Fixed::toFloat() const
{
	int 	tmp;
	float	final_num;	

	tmp = this->getRawBits();
	final_num = tmp >> 8;
	tmp -= ((int)final_num << 8);
	final_num += (float)tmp / 256;
	return (final_num);
}

int	Fixed::toInt() const
{
	return (this->getRawBits() >> 8);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
