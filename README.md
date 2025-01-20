# Credit Card Validator

This is a simple C++ application to validate credit card numbers. It supports various card types, including Visa, Mastercard, American Express, JCB, Diners Club, and Maestro.

## Workflow And Dependency Graph
![Workflow](https://github.com/ommagdum/Credit-Card-Validator-Mini-Project/blob/main/Workflow.png) ![Dependency Graph](https://github.com/ommagdum/Credit-Card-Validator-Mini-Project/blob/main/DependencyGrpah.png)


## Features

- Validates credit card numbers using the Luhn algorithm
- Checks the length and formatting of the card number
- Identifies the card type based on the number prefix
- Saves valid card numbers and types to a file (`valid_cards.txt`)
- Displays a fancy ASCII art output for valid and invalid cards

## Files

- `main.cpp`: Entry point for the application, instantiates the `UserInterface` class.
- `credit_card.hpp`: Declares the `CreditCard`, `CardValidator`, and `UserInterface` classes.
- `credit_card.cpp`: Implements the methods declared in `credit_card.hpp`.

## Usage

1. Compile the source files:
   ```console
   ommagdum@Oms-MacBook-Air Credit-Card-Validator-Mini-Project-main % g++ main.cpp credit_card.cpp
   ```

2. Run the executable:
   ```console
   ommagdum@Oms-MacBook-Air Credit-Card-Validator-Mini-Project-main % ./a.out
   ```

3. Enter a credit card number when prompted.
4. The application will validate the card number and identify the card type.
5. If the card is valid, it will be saved to the `valid_cards.txt` file.
6. Enter 'quit' to exit the application.

## Example Output
```console
__| |______________________________________________________________________| |__
__   ______________________________________________________________________   __
  | |                                                                      | |  
  | | ██████╗██████╗ ███████╗██████╗ ██╗████████╗                          | |  
  | |██╔════╝██╔══██╗██╔════╝██╔══██╗██║╚══██╔══╝                          | |  
  | |██║     ██████╔╝█████╗  ██║  ██║██║   ██║                             | |  
  | |██║     ██╔══██╗██╔══╝  ██║  ██║██║   ██║                             | |  
  | |╚██████╗██║  ██║███████╗██████╔╝██║   ██║                             | |  
  | | ╚═════╝╚═╝  ╚═╝╚══════╝╚═════╝ ╚═╝   ╚═╝                             | |  
  | |                                                                      | |  
  | | ██████╗ █████╗ ██████╗ ██████╗                                       | |  
  | |██╔════╝██╔══██╗██╔══██╗██╔══██╗                                      | |  
  | |██║     ███████║██████╔╝██║  ██║                                      | |  
  | |██║     ██╔══██║██╔══██╗██║  ██║                                      | |  
  | |╚██████╗██║  ██║██║  ██║██████╔╝                                      | |  
  | | ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝                                       | |  
  | |                                                                      | |  
  | |██╗   ██╗ █████╗ ██╗     ██╗██████╗  █████╗ ████████╗ ██████╗ ██████╗ | |  
  | |██║   ██║██╔══██╗██║     ██║██╔══██╗██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗| |  
  | |██║   ██║███████║██║     ██║██║  ██║███████║   ██║   ██║   ██║██████╔╝| |  
  | |╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║██╔══██║   ██║   ██║   ██║██╔══██╗| |  
  | | ╚████╔╝ ██║  ██║███████╗██║██████╔╝██║  ██║   ██║   ╚██████╔╝██║  ██║| |  
  | |  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝ ╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝| |  
__| |____________________Efficient and Secure : C++ Credit Card Validator__| |__
__| |______________________________________________________________________| |__
__   ______________________________________________________________________   __
  | |                                                                      | |  
Welcome to Credit Card Validator!
Enter a credit card number (or 'quit' to exit): 5105105105105100
 _____                                                                                          _____ 
( ___ )                                                                                        ( ___ )
 |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   | 
 |   |           __    __)           )   ___                     )   ___                        |   |
 |   |          (, )  /     /) ,   /(__/_____)          /) ,    (__/_____)          /)          |   |
 |   |             | / _   //    _(/  /       __   _  _(/   _/_   /       _   __  _(/           |   |
 |   |             |/ (_(_(/__(_(_(_ /       / (__(/_(_(__(_(__  /       (_(_/ (_(_(_           |   |
 |   |             |                (______)                    (______)                        |   |
 |   |                                                                                          |   |
 |   |            Credit Card Number : 5105105105105100                                         |   |
 |   |                                                                                          |   |
 |   |            Credit Card Type : Mastercard                                                 |   |
 |   |                                                                                          |   |
 |   |            Card Saved To File.                                                           |   |
 |   |                                                                                          |   |
 |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___|
(_____)                                                                                        (_____)
Enter a credit card number (or 'quit' to exit): 
```

## Future Enhancements

- Add unit tests for validation logic
- More robust card type identification
- Ability to validate multiple card numbers in one run


