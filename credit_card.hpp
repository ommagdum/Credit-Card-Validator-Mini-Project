// Contains declarations of classes, functions and variables for functionality
// of the CreditCard class.
#include <string>


class CreditCard {
private:
    std::string number;
public:
    CreditCard(std::string num);
    std::string getNumber();
};


class CardValidator {
public:
    static bool validate(const std::string& number);
    static std::string identifyCardType(const std::string& number);
    static bool checkFormatting(const std::string& number);
    static void saveValidNumber(const std::string& number, const std::string& cardType);
    static bool isNumberVerified(const std::string& number);
};

class UserInterface {
public:
    void start();
};