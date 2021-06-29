// Introduction.cpp : This file contains the 'main' function. Program execution begins and ends there.

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
    //  void        Empty                   0

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
    //  ---------------------------------------------------------------------------------------------------------------------
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

    long long_val = 4523232;
    long int long_int_val = 2345342;
    long double long_double_val = 233434.56343;
    short short_val = 3434233; // Compiler warning: truncation from 'int' to 'short'
    unsigned int unsigned_int_val = -5; // No compiler message... can only store positive numbers or 0. Becomes 4294967291

    // Derived Data Types are derived from fundamental data types.
    // Some examples are arrays, pointers, function types, and structures.


    // Basic Input/Output (IO)
    // https://www.programiz.com/cpp-programming/input-output

    // prints the string enclosed in double quotes
    std::cout << "This is C++ Programming" << std::endl;

    int num1 = 70;
    double num2 = 256.783;
    char ch = 'A';

    std::cout << num1 << std::endl; // print integer
    std::cout << num2 << std::endl; // print double
    std::cout << "character: " << ch << std::endl; // print char

    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num; // taking input
    std::cout << "The number is: " << num << std:: endl;

    char in_a;
    int in_num;
    std::cout << "Enter a character and an integer: ";
    std::cin >> in_a >> in_num;
    std::cout << "Character: " << in_a << std::endl;
    std::cout << "Number: " << in_num << std::endl;
    

    // Type Conversion
    // https://www.programiz.com/cpp-programming/type-conversion

    // Implicit Type Conversion or automatic conversion is done automatically by the compiler
    int num_int = 9; // assigning an int value to num_int
    double num_double; // declaring a double type variable
    num_double = num_int; // implicit conversion by assigning int value to a double variable
    std::cout << "num_int = " << num_int << std::endl;
    std::cout << "num_double = " << num_double << std::endl;

    int num_int_2; // declaring an int type variable
    double num_double_2 = 7.77; // assigning a double value to num_double_2
    num_int_2 = num_double_2; // implicit conversion by assigning a double value to an int variable
    std::cout << "num_int_2 = " << num_int_2 << std::endl; // since int cannot have a decimal part, the digits after the decimal point are truncated
    std::cout << "num_double_2 = " << num_double_2 << std::endl;

    // Explicit Type Conversion or type casting is when we manually change data from one type to another
    //   - C-style type casting (also known as cast notation) | (data_type)expression;
    //   - Function notation (also known as old C++ style type casting) | data_type(expression);
    //   - Type conversion operators | static_cast, dynamic_cast, const_cast, reinterpret_cast

    int num_int_3 = 26; // initializing int variable
    double num_double_3; // declaring double variable
    num_double_3 = (double)num_int_3; // explicitly converting from int to double using cast notation
    std::cout << "num_int_3 = " << num_int_3 << std::endl;
    std::cout << "num_double_3 = " << num_double_3 << std::endl;

    int num_int_4 = 43;
    double num_double_4;
    num_double_4 = double(num_int_4); // explicitly converting from int to double using function notation
    std::cout << "num_int_4 = " << num_int_4 << std::endl;
    std::cout << "num_double_4 = " << num_double_4 << std::endl;

    double num_double_5 = 3.56;
    std::cout << "num_double_5 = " << num_double_5 << std::endl;
    int num_int_5 = (int)num_double_5; // C-style conversion from double to int
    std::cout << "num_int_5 = " << num_int_5 << std::endl;    
    int num_int_6 = int(num_double_5); // function-style conversion from double to int
    std::cout << "num_int_6 = " << num_int_6 << std::endl;

    
    // Operators
    // https://www.programiz.com/cpp-programming/operators

    // Arithmetic Operators
    int a, b;
    a = 7;
    b = 2;
    std::cout << "a + b = " << (a + b) << std::endl; // printing the sum of a and b
    std::cout << "a - b = " << (a - b) << std::endl; // printing the difference of a and b
    std::cout << "a * b = " << (a * b) << std::endl; // printing the product of a and b
    std::cout << "a / b = " << (a / b) << std::endl; // printing the division of a by b
    std::cout << "a % b = " << (a % b) << std::endl; // printing the modulo of a by b

    // Increment and Decrement
    int result_a, result_b;
    result_a = ++a; // incrementing a by 1 and storing the result in result_a
    std::cout << "result_a = " << result_a << std::endl;
    result_b = --b; // decrementing b by 1 and storing the result in result_b
    std::cout << "result_b = " << result_b << std::endl;
    // Above the '++' and '--' operators are used as prefixes (++a and --b);
    // however, these operators can also be used as postfixes (a++ and b--).

    // Assignment Operators:
    //  Operator    Example     Equivalent to
    //  -------------------------------------
    //  =           a = b;      a = b;
    //  +=          a += b;     a = a + b;
    //  -=          a -= b;     a = a - b;
    //  *=          a *= b;     a = a * b;
    //  /=          a /= b;     a = a / b;
    //  %=          a %= b;     a = a % b;

    // Relational Operators:
    // If the relation is true, 1 is returned. If the relation is false, 0 is returned.
    //  Operator    Meaning                     Example
    //  -------------------------------------------------------------------
    //  ==          Is Equal To                 3 == 5  | returns false (0)
    //  !=          Not Equal To                3 != 5  | returns true  (1)
    //  >           Greater Than                3 > 5   | returns false (0)
    //  <           Less Than                   3 < 5   | returns true  (1)
    //  >=          Greater Than or Equal To    3 >= 5  | returns false (0)
    //  <=          Less Than or Equal To       3 <= 5  | returns true  (1)

    // Logical Operators
    bool result;

    result = (3 != 5) && (3 < 5); // true 1
    std::cout << "(3 != 5) && (3 < 5) is " << result << std::endl;

    result = (3 == 5) && (3 < 5); // false 0
    std::cout << "(3 == 5) && (3 < 5) is " << result << std::endl;

    result = (3 == 5) && (3 > 5); // false 0
    std::cout << "(3 == 5) && (3 > 5) is " << result << std::endl;

    result = (3 != 5) || (3 < 5); // true 1
    std::cout << "(3 != 5) || (3 < 5) is " << result << std::endl;

    result = (3 != 5) || (3 > 5); // true 1
    std::cout << "(3 != 5) || (3 > 5) is " << result << std::endl;

    result = (3 == 5) || (3 > 5); // false 0
    std::cout << "(3 == 5) || (3 > 5) is " << result << std::endl;

    result = !(5 == 2); // true 1
    std::cout << "!(5 == 2) is " << result << std::endl;

    result = !(5 == 5); // false 0
    std::cout << "!(5 == 5) is " << result << std::endl;

    // Bitwise Operators:
    // Used to perform operations on individual bits and can only be used alongside char and int data types.
    //  Operator    Description
    //  -----------------------------------
    //  &           Binary AND
    //  |           Binary OR
    //  ^           Binary XOR
    //  ~           Binary One's Complement
    //  <<          Binary Shift Left
    //  >>          Binary Shift Right


    // The "exit status" of the main() function. The program ends with this statement; however, this statement is not mandatory.
    return 0;
}
