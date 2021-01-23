#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    
    temp = x;
         x = y;
         y = temp;
    
}

int main(int argc, char *argv[])
{

    int a, b;

    cout << "Prosze podac licze a:";
    cin >> a;

    cout << "Prosze podac liczbe b:";
    cin >> b;

    swap(a,b);

    cout << "a:" << a << endl << "b:" << b;

return 0;
}