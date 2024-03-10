//Implement CreditCard class declaration in CreditCard.h

#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <string>

class CreditCard {
private:
    std::string number;
public:
    CreditCard(std::string num);
    std::string getNumber();
};

#endif
