#include <iostream>
using namespace std;

void swap(int **x, int **y)
 {
    
    int* temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char* argv[]) 
{

    int* liczba1 = new int;
    int* liczba2 = new int;

    *liczba1 = 10;
    *liczba2 = 45;

    cout << "Przed zamiana:" << endl;

    cout << "Liczba 1: " << *liczba1 << "  " << liczba1 <<  endl;

    cout << "Liczba 2: " << *liczba2 << "  " << liczba2 <<  endl;

    
    swap(&liczba1, &liczba2);

    cout << "Po zamianie:" << endl;

    cout << "Liczba 1: " << *liczba1 << "  " << liczba1 <<  endl;

    cout << "Liczba 2: " << *liczba2 << "  " << liczba2 <<  endl;


return 0;
}