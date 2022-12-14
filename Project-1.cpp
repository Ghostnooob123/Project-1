#include <iostream>
#include <algorithm>
#include <string>


int main()
{

	std::cout << "Enter a integers lenght: ";
	int length{};
	std::cin >> length;

	auto* integers{ new int[length] };

	for (int i = 0; i < length; i++)
	{
		std::cout << "Integer #" << i + 1 << ": ";
		std::cin >> integers[i];
	}

	std::cout << "How you want your array to be sorted by descending or ascending.";
	int way{};
	std::cin >> way;

	if (way == 1)
	{
		std::sort(integers, integers + length);
	}
	else if (way == 2)
	{
		std::sort(integers, integers + length ,std::greater<int>());
	}
	else
	{
		std::cout << "Try again later :) ";
	}

	for (int i = 0; i < length; i++)
	{
		std::cout << "Integer #" << i + 1 << ": " << integers[i] << '\n';
	}
}

