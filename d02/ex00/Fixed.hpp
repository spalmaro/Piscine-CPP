#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed {
    private:
        int                 _value;
        static const int    _fixed = 8;
    
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);

        Fixed & operator = (Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw); 
};

#endif