#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item first_item;
	if (std::cin >> first_item)
	{
		Sales_item second_item;
		while (std::cin>> second_item)
		{
			if (first_item.isbn()==second_item.isbn())
				first_item += second_item;
			else
			{
				std::cout << first_item<< std::endl;
				first_item = second_item;
			}
		}
		std::cout << first_item << std::endl;
	}
	else
	{		
		std::cerr << "Not the input" << std::endl;
		return -1;
	}
	return 0;
}