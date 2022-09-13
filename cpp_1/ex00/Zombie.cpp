#include "Zombie.hpp"

class Zombie{
    public:
        std::string _name;
        Zombie();
        Zombie(std::string name){
            _name = name;
        }

    public:
        void set_name(std::string name)
        {
            _name = name;
        }

        std::string get_name()
        {
            return _name;
        }

        void announce(void)
        {
            std::cout<<get_name()<<": BraiiiiiiinnnzzzZ...";
        }
};

