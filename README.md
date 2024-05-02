# Credit Card Validator
This is a simple C++ application to validate credit card numbers.

## Files
- main.cpp - Contains the entry point for the application and instantiates the UserInterface
- credit_card.hpp - Declares the CreditCard, CardValidator, and UserInterface classes
- credit_card.cpp - Implements the methods declared in credit_card.h
## Features
- UserInterface prompts user for card number and displays validation result
- CardValidator performs validation:
  - Luhn algorithm checksum
  - Card number length check
  - Card number format/content check
- Identifies card type based on number prefixes
- CreditCard encapsulates card number
## Usage
To use the application:

1. Compile the source files: g++ main.cpp credit_card.cpp
2. Run the executable: ./a.out
3. Enter a credit card number when prompted
4. Application will validate and identify the card type
5. Enter 'quit' to exit
## Future Enhancements
- Add unit tests for validation logic
- More robust card type identification
- Ability to validate multiple card numbers in one run
