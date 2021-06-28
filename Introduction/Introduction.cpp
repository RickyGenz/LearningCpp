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


    // Data Types
    // https://www.programiz.com/cpp-programming/data-types

    // Fundamental Data Types:
    //  Data Type   Meaning                 Size(in Bytes)
    //  --------------------------------------------------
    //  int         Integer                 2 or 4
    //  float       Floating-point          4
    //  double      Double Floating-point   8
    //  char        Character               1
    //  wchar_t     Wide Character          2
    //  bool        Boolean                 1
    // void         Empty                   0

    int salary = 75000; // int can store values from -2147483648 to 2147483647

    float area = 74.68; // Compiler warning: truncation from 'double' to 'float'
    double volume = 645.18253; // double has twice the precision of float
    double distance = 12E36; // 12E36 is equal to 12*10^36

    char test_r = 'r'; // an integer value is stored in a char variable rather than the character itself
    
    wchar_t test_h = L'ם'; // storing a Hebrew character

    bool cond = false;

    // We cannot declare variables of the void type. 'void' means "nothing" or "no value".

    // Modified Data Types:
    //  Data Type           Size(in Bytes)  Meaning
    //  signed int          4               used for integers (equivalent to int)
    //  unsigned int        4               can only store positive integers
    //  short               2               used for small integers (range -32768 to 32767)
    //  unsigned short      2               used for small positive integers (range 0 to 65,535)
    //  long                at least 4      used for large integers (equivalent to long int)
    //  unsigned long       4               used for large positive integers or 0 (equivalent to unsigned long int)
    //  long long           8               used for very large integers (equivalent to long long int)
    //  unsigned long long  8               used for very large positive integers or 0 (equivalent to unsigned long long int)
    //  long double         12              used for large floating-point numbers
    //  signed char         1               used for characters (guaranteed range -127 to 127)
    //  unsigned char       1               used for characters (range 0 to 255)

    long b = 4523232;
    long int c = 2345342;
    long double d = 233434.56343;
    short e = 3434233; // Compiler warning: truncation from 'int' to 'short'
    unsigned int a = -5; // No compiler message... can only store positive numbers or 0. Becomes 4294967291

    // Derived Data Types are derived from fundamental data types.
    // Some examples are arrays, pointers, function types, and structures.
}
