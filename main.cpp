#include "stack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	Stack <int> *st = new Stack<int>;
	st->push2(7);
	cout << st->head() << endl;
	int a = 2;
	st->push1(a);
	cout << st->head() << endl;
	st->pop();
	cout << st->head() << endl;
	//system("pause");
	return 0;
}
