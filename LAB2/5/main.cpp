#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char*argv[])
{
    int liczba1 = 10;
    int liczba2 = 15;

    cout << "Liczby przed zmiana: " << endl;

    cout << "Liczba1: " << liczba1 << endl;

    cout << "Liczba2: " << liczba2 << endl;

    swap(&liczba1,&liczba2);

    cout << "Liczby po zmianie: " << endl;

    cout << "Liczba1: " << liczba1 << endl;

    cout << "Liczba2: " << liczba2 << endl;

return 0;
}