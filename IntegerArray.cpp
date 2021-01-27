#include "IntegerArray.h"
using namespace std;

IntegerArray::IntegerArray(int size)
{
    this->data = new int[size];
    this->size = size;
    indice =0;
} 

IntegerArray::IntegerArray(IntegerArray &o) 
{
    this->data = new int[o.size];
    size = o.size;
    for( int i = 0; i < size; i++)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray()
{
    delete[] data;
}

void IntegerArray::push_back(int num)
{
	if (indice<size)
	{
		data[indice]=num;
		indice++;
	}
}

void IntegerArray::remove()
{	
	if (indice>0)
		indice--;
	
}

void IntegerArray::print()
{
	for(int i=0; i<indice; i++)
		cout<<data[i]<<" ";
}
