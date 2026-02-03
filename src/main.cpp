#include "cat.h"
#include <iostream>

int main() {
    std::cout << "Welcome to the farm" << '\n';
    const Cat myCat("Misse");
    const Cat myOtherCat("Majsan");
    std::cout << "Here lives " << myCat.getName() << " and "
              << myOtherCat.getName() << '\n';
    return 0;
}