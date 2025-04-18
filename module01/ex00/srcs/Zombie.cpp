#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << GREEN << name << ": Created !" << END << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << _name << ": Destroyed !" << END << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
