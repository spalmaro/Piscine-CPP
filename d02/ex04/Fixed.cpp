#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//Constructors
Fixed::Fixed(void):_value(0) {
    return ;
}

Fixed::Fixed(const int i):_value(i * (1 << Fixed::_fixed)) {
    return ;
}

Fixed::Fixed(float const f):_value(roundf(f * (1 << Fixed::_fixed)) ) {
    return ;
}

Fixed::Fixed(Fixed const & src) {
    *this = src;

    return ;
}

// Destructor
Fixed::~Fixed(void) {

    return ;
}

// Comparison operators
bool        Fixed::operator < (Fixed const & rhs) {
    if (this->_value < rhs.getRawBits())
        return true;
    else
        return false;
}

bool        Fixed::operator > (Fixed const & rhs) {
    if (this->_value > rhs.getRawBits())
        return true;
    else
        return false;
}

bool        Fixed::operator >= (Fixed const & rhs) {
    if (this->_value >= rhs.getRawBits())
        return true;
    else
        return false;
}

bool        Fixed::operator <= (Fixed const & rhs) {
    if (this->_value <= rhs.getRawBits())
        return true;
    else
        return false;
}

bool        Fixed::operator == (Fixed const & rhs) {
    if (this->_value == rhs.getRawBits())
        return true;
    else
        return false;
}

bool        Fixed::operator != (Fixed const & rhs) {
    if (this->_value != rhs.getRawBits())
        return true;
    else
        return false;
}

//Copy Operator
Fixed & Fixed::operator = (Fixed const & rhs) {
    this->_value = rhs.getRawBits();

    return *this;
}

// Arithmetic operators
Fixed       Fixed::operator + (Fixed const & rhs) {
    return Fixed(this->_value + rhs.getRawBits());
}

Fixed       Fixed::operator - (Fixed const & rhs) {
    return Fixed(this->_value - rhs.getRawBits());
}

Fixed       Fixed::operator * (Fixed const & rhs) {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed       Fixed::operator / (Fixed const & rhs) {
    return Fixed(this->toFloat() / rhs.toFloat());
}

// Prefix operators
Fixed &     Fixed::operator ++ (void) {
    this->_value++;
    return *this;
}

Fixed &     Fixed::operator -- (void) {
    this->_value--;
    return *this;
}

// Postfix operators
Fixed   Fixed::operator ++ (int) {
    Fixed   tmp(*this);
    this->_value++;
    return tmp;
}

Fixed   Fixed::operator -- (int) {
    Fixed   tmp(*this);
    this->_value--;
    return tmp;
}

// Setters and getters
int         Fixed::getRawBits(void) const {
    return this->_value;
}

void        Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float       Fixed::toFloat(void) const {
    return this->_value / (float)(1 << 8);
}

int         Fixed::toInt(void) const {
    return round(this->_value /(1 << 8));
}


// Non-member functions
Fixed &     Fixed::min(Fixed & first, Fixed & second) {
    if (first.getRawBits() < second.getRawBits())
        return first;
    else
        return second;
}

Fixed const &   Fixed::min(Fixed const & first, Fixed const &second) {
    if (first.getRawBits() < second.getRawBits())
        return first;
    else
        return second;
}


Fixed &     Fixed::max(Fixed & first, Fixed & second) {
    if (first.getRawBits() > second.getRawBits())
        return first;
    else
        return second;
}

Fixed const &   Fixed::max(Fixed const & first, Fixed const &second) {
    if (first.getRawBits() > second.getRawBits())
        return first;
    else
        return second;
}


// Outside class scope
std::ostream &  operator<<( std::ostream &o, Fixed const & rhs) {
    o << rhs.toFloat();

    return o;
}
