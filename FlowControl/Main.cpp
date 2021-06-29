#include <iostream>

int main() {

	// if, if...else and Nested if...else Statements
	// https://www.programiz.com/cpp-programming/if-else
	// very similar to C#


	// for Loop
	// https://www.programiz.com/cpp-programming/for-loop
	// very similar to C#
	//   - one difference does seem to be preference to prefix the iterator increment (++i)
	// Syntax: for (initialization; condition; update) { }
	// be cautious of conditions that are always true because they will run forever (until memory is full)

	for (int i = 1; i <= 5; ++i) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	// Ranged Based for Loop (C++11 feature)
	// similar to C# foreach
	// Syntax: for (variable : collection) { }
	int num_array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int n : num_array) {
		std::cout << n << " ";
	}


	// while and do...while Loops
	// https://www.programiz.com/cpp-programming/do-while-loop
	// very similar to C#
	// Syntax (while): while (condition) { }
	// Syntax (do...while): do { } while (condition);
	// do...while has one key difference being the body is executed once before the condition is checked
	// Contrasted to for loops, while and do...while loops are usually used when the number of iterations is unknown


	// break Statement
	// https://www.programiz.com/cpp-programming/break-statement
	// very similar to C#
	// for nested loops, break only terminates the loop it is contained within


	// continue Statement
	// https://www.programiz.com/cpp-programming/continue-statement
	// very similar to C#
	// the continue statement only skips the current iteration (returning control to the loop's update expression)
	// as opposed to the break statement which terminates the loop entirely


	// switch...case Statement
	// https://www.programiz.com/cpp-programming/switch-case
	// similar to C#
	// using the break statement inside each case block terminates the switch statement
	// switch...case allows fall-through behavior; if the break statement is not used, all cases after the correct case are executed


	// goto Statement
	// https://www.programiz.com/cpp-programming/goto
	// used for altering the normal sequence of program execution by transferring control to some other part of the program
	// generally considered a bad construct and should be avoided as goto makes the logic of the program complex and tangled
	// break and continue statements should cover most use cases


	return 0;
}