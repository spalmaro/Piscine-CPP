#include "Human.hpp"
#include <iostream>
#include <string>

void Human::meleeAttack(std::string const & target) {
    std::cout << "Human used melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "Intimidating shout on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    typedef         void (Human::*Action) (std::string const & target);

    Action          action[3] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };
    std::string     action_names[3] = { "meleeAttack", "rangedAttack", "intimidatingShout" };

    for (int i = 0; i < 3; i++ ) {
        if (action_name == action_names[i]) {
            (this->*(action[i]))(target);
            break ;
        }
    }

}
