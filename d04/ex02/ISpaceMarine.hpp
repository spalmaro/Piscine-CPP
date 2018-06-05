#ifndef SPACEMARINE_INTERFACE_H
# define SPACEMARINE_INTERFACE_H

class ISpaceMarine {
    public:
        virtual ~ISpaceMarine() {}
        virtual ISpaceMarine* clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

#endif