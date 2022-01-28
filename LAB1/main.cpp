#include <iostream>

using namespace std;

int main()
{
	int a[] = { 0,1,2,3 };

    cout << "First arr: ";
    for (int i = 0; i < 4; i = i++)
    {
        cout << a[i] << "   ";
    }

    for (int i = 0; i < 4; i = i + 2) {
        int x = a[i];
        a[i] = a[i + 1];
        a[i + 1] = x;
    }
    cout << "Second arr: ";
    for (int i = 0; i < 4; i++)
        cout << a[i] << "  ";
    
    system("pause");

	return 0;
}