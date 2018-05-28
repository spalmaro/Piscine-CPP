#include "Human.hpp"

int main(void) {
    Human bob;

    bob.action("meleeAttack" , "a grizzly bear");
    bob.action("rangedAttack" , "a unicorn");
    bob.action("intimidatingShout" , "a chipmunk");
    return 1;
}