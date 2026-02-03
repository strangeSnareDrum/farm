#include "cat.h"
#include <iostream>

int main() {
    std::cout << "Welcome to the farm" << '\n';
    const Cat myCat("Misse");
    std::cout << "Here lives " << myCat.getName() << '\n';
    return 0;
}