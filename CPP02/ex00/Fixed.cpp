#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _fp_num(0)
{
	std::cout << "Default constructor called" << std::endl;
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

void	Fixed::setRawBits(const int raw)
{
	this->_fp_num = raw;	
}

int	Fixed::getRawBits() const
{	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_num);
}

