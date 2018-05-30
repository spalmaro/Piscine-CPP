#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {
    private:
        int                 _value;
        static const int    _fixed = 8;
    
    public:
        Fixed(void);
        Fixed(int const i);
        Fixed(float const f);
        Fixed(Fixed const & src);
        ~Fixed(void);

        // Comparison operators
        bool        operator < (Fixed const & rhs);
        bool        operator > (Fixed const & rhs);
        bool        operator >= (Fixed const & rhs);
        bool        operator <= (Fixed const & rhs);
        bool        operator == (Fixed const & rhs);
        bool        operator != (Fixed const & rhs);

        // Copy operator
        Fixed &     operator = (Fixed const & rhs);
        
        // Arithmetic operators
        Fixed       operator + (Fixed const & rhs);
        Fixed       operator - (Fixed const & rhs);
        Fixed       operator * (Fixed const & rhs);
        Fixed       operator / (Fixed const & rhs);

        // Pre operators
        Fixed &     operator ++ (void);
        Fixed &     operator -- (void);

        // Post operators
        Fixed       operator ++ (int);
        Fixed       operator -- (int);

        int         getRawBits(void) const;
        void        setRawBits(int const raw); 
        float       toFloat(void) const ;
        int         toInt(void) const;

        static  Fixed & min(Fixed & first, Fixed & second);
        static  Fixed const & min(Fixed const & first, Fixed const &second);

        static  Fixed & max(Fixed & first, Fixed & second);
        static  Fixed const & max(Fixed const & first, Fixed const &second);
};

std::ostream &  operator<<( std::ostream &o, Fixed const & rhs);


#endif