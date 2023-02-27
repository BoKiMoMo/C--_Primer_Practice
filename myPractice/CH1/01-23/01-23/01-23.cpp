#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item_1;
	if (cin>>item_1)
	{
		Sales_item item_2;
		int sum = 1;
		while (cin>>item_2)
		{			
			if (item_2.isbn() == item_1.isbn())
				sum += 1;
			else
			{
				cout << item_1.isbn() << " time " << sum << endl;
				item_1 = item_2;
				sum = 1;
			}
		}
		cout << item_2.isbn() << " time " << sum << endl;
		return 0;
	}
}