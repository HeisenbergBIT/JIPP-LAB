#include <iostream>

using namespace std;

int funkcja(int x, int y, int *wynik)
{
    *wynik = x + y;

    return x * y;
}

int main(int argc, char *argv[])
{
    int a, b;
    int wynik;

    cout << "Prosze podac liczbe a:";
    cin >> a;

    cout << "Prosze podac liczbe b:";
    cin >> b;

    cout << "Iloczyn:" << funkcja(a,b,&wynik) << endl;

    cout <<  "Suma:" << wynik;

return 0;
}