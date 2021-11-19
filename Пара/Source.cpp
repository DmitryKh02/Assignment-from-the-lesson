#include <iostream>
#include "stack.h"

int main()
{
	TStack task = new Node;

	int value = 1;
	int max = -1;

	std::cout << "Plese, enter numbers: ";

	while (value != 0)
	{
		std::cin >> value;

		if (max < value) max = value;

		push(task, value);
	}

	if (!isEmpty(task))
	{
		std::cout << "\n_______________________________________";
		std::cout << "\nRecursion numbers between high and low: ";

		while (value != max)
		{
			value = pop(task);

			if ((value != 0) && (value != max)) std::cout << value << " ";
		}
	}
	else std::cout << "\nSequence only consists of zero!";

	std::cin.ignore().get();

	return 0;
}

