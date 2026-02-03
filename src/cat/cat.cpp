#include "cat.h"

Cat::Cat(std::string name, int numLegs) : m_name(std::move(name)), m_numLegs(numLegs) {
}

void Cat::setNumLegs(const int numLegs) {
    m_numLegs = numLegs;
}

int Cat::getNumLegs() const {
    return m_numLegs;
}

std::string Cat::getName() const {
    return m_name;
}
