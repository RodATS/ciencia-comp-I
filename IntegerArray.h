#ifndef __INTEGER_ARRAY__
#define __INTEGER_ARRAY__


class IntegerArray
{
	private:
		int *data;
		int size;
		int indice;
	public:
		IntegerArray(int size);
		
		IntegerArray(IntegerArray &o);	
		~IntegerArray();
		void push_back(int num);
		void remove();
		void print();
		
};

#endif
