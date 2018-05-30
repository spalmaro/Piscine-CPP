#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void):_value(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int i):_value(i * (1 << Fixed::_fixed)) {
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const f):_value(roundf(f * (1 << Fixed::_fixed)) ) {
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;

    return ;
}

Fixed & Fixed::operator = (Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();

    return *this;
}


int     Fixed::getRawBits(void) const {
    // std::cout << "getRawBits function called" << std::endl;
    
    return this->_value;
}

void    Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float   Fixed::toFloat(void) const {
    return this->_value / (float)(1 << 8);
}

int     Fixed::toInt(void) const {
    return round(this->_value /(1 << 8));
}

std::ostream &  operator<<( std::ostream &o, Fixed const & rhs) {
    o << rhs.toFloat();

    return o;
}
