#include <iostream>
#include <algorithm>
#include <string>


int main()
{

	std::cout << "Enter an integers to be sorted: ";
	int length{};
	std::cin >> length;

	auto* integers{ new int[length] };

	for (int i = 0; i < length; i++)
	{
		std::cout << "Integer #" << i + 1 << ": ";
		std::cin >> integers[i];
	}

	std::cout << '\n';
	std::cout << "How you want your array to be sorted by ascending or descending.\n";
	std::cout << "Enter 1 for ascending / Enter 2 for descending: ";
	std::cout << '\n';
	int way{};
	std::cin >> way; 

	if (way == 1)
	{
		std::cout << "Here is your sorted list by ascending: \n";
		std::sort(integers, integers + length);
	}
	else if (way == 2)
	{
		std::cout << "Here is your sorted list by descending: \n";
		std::sort(integers, integers + length ,std::greater<int>());
	}
	else
		std::cout << "Try again later :) \n";

	for (int i = 0; i < length; i++)
	{
		std::cout << "Integer #" << i + 1 << ": " << integers[i] << '\n';
	}

	delete[] integers;
	return 0;
}

