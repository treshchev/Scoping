// Program Scoping
// Describes work with scope

#include <iostream>

void Func();

int main()
{
	int var = 5; // local variable in function main()
	std::cout << "In main() var is: " << var << "\n\n";
	Func();
	std::cout << "Back in main() var is: " << var << "\n\n";
	{
		std::cout << "In main() in a new scope var is: " << var << "\n\n";
		std::cout << "Creating new var in new scope.\n";

		int var = 10; // variable in new scope
		              // hide another variable, named "var"

		std::cout << "In main() in a new scope var is: " << var << "\n\n";
	}
	std::cout << "At the end of main() var created in new scope no longer exists.\n";
	std::cout << "At the end of main() var is: " << var << "\n";
	
	return 0;
}
void Func()
{
	int var = 5; // local variable in function Func()
	std::cout << "In Func() var is: " << var << "\n\n";

}