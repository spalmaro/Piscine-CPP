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

        Fixed & operator = (Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw); 
        float   toFloat(void) const ;
        int     toInt(void) const;
};

std::ostream &  operator<<( std::ostream &o, Fixed const & rhs);

#endif