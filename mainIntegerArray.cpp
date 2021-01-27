#include <iostream>
#include "IntegerArray.h"
#include "IntegerArray.cpp"
using namespace std;

int main()
{
	IntegerArray arr(3);

	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(2);
	
	arr.print();
	arr.remove();
	cout<<endl;
	arr.print();
	
	return 0;
}
