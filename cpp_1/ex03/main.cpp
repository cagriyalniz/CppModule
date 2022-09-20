#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    /* Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    std::cout<<bob.get_weapon().get_type()<<std::endl;
    bob.attack();
    club.set_type("some other type of club");
    std::cout<<bob.get_weapon().get_type()<<std::endl;
    bob.attack(); */

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.set_type("some other type of club");
    jim.attack();

    

}