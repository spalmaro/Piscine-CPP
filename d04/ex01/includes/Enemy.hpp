#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include <string>

class Enemy {

    protected:
        Enemy(void);
        int                     hp;
        std::string             type;
    
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        virtual                 ~Enemy(void);

        Enemy &                 operator = (Enemy const & rhs);
        
        std::string const &     getType() const;
        int                     getHP() const;
        virtual void            takeDamage(int);           
};

#endif