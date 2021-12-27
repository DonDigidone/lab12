#include <iostream>
#include "stack.h"
#include "wrap.h"
#include "stack.cpp"
#include "wrap.cpp"

using namespace std;

int main()
{
	int size = 5;
	Stack<int> s(size);

	for (int i = 0; i < size; i++)
	{
		s.Push(i);
	}

	s.printStack();

	cout << endl;
	cout << "POPPED--------------------------------" << endl;
	cout << endl;

	s.Pop(0);
	s.printStack();

	system("pause");
}
