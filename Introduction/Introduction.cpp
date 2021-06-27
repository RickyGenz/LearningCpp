// Introduction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";


    // Variables, Literals and Constants
    // https://www.programiz.com/cpp-programming/variables-literals

    int age = 12; // age is 14
    age = 19;     // age is now 19

    // Rules for naming a variable:
    //   - A variable name can only have alphabets, numbers, and the underscore '_'.
    //   - A variable name cannot begin with a number.
    //   - Variable names should not begin with an uppercase character.
    //   - A variable name cannot be a keyword. For example, 'int' is a keyword that is used to denote integers.
    //   - A variable name can start with an underscore. However, it's not considered a good practice.
    //   - We should try to give meaningful names to variables. For example, 'first_name' is a better variable name than 'fn'.

    double precise_age = 12.98; // data type, variable, assignment, floating-point literal

    // Literals:
    //   - Integers:
    //       - decimal (base 10)
    //       - octal (base 8)
    //       - hexadecimal (base 16)
    //   - Floating-point Literals
    //       - fractional form (.)
    //       - exponent form (E)
    //   - Characters (')
    //   - Escape Sequences (\)
    //   - String Literals (")

    const int LIGHT_SPEED = 299792458;
    // LIGHT_SPEED = 2500; // Complier error: "you cannot assign to a variable that is const"
}
