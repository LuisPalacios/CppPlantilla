/**
 *
 */

#include <iostream>
#include "my_lib.h"

/**
 * @brief Prints out hello world and tests the program
 *
 * @return
 */
int print_hello_world()
{
    std::cout << "Cout: Hello World" << '\n';
    return 1;
}

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
