#pragma once

#include <string>

class Cat {
   public:
    Cat(std::string name, int numLegs = 4);
    void setNumLegs(int numLegs);
    int getNumLegs() const;
    std::string getName() const;

   private:
    int m_numLegs;
    std::string m_name;
};