// Defination for CardValidator
#ifndef CARDVALIDATOR_H
#define CARDVALIDATOR_H

#include <string>

class CardValidator {
public:
    static bool validate(const std::string& number);
    static std::string identifyCardType(const std::string& number);
    static bool checkFormatting(const std::string& number);
};

#endif
