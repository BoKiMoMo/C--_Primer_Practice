#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item_1, item_2;
	std::cout << "Please Enter the ISBN,Sales volume,Selling price" << std::endl;
	std::cin >> item_1 >> item_2;
	if (item_1.isbn() == item_2.isbn())
		std::cout << "\nSum of two Book¡G" << item_1 + item_2 << std::endl;
	else
		std::cerr << "Not the same ISBN." << std::endl;
	return 0;
}