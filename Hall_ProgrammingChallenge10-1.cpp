#include <iostream>
using namespace std;

int doSomething(int *, int *);

int main()
{
    int a = 4;
    int b = 7;
    int c;
    int *x = &a;
    int *y = &b;

    c = doSomething(x, y);

    cout << "c = " << c << endl;

    x = nullptr;
    y = nullptr;

    return 0;
}

int doSomething(int *x, int *y) {
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	return *x + *y;
}
