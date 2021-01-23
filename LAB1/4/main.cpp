#include <iostream>

using namespace std;

int main(int argc, char*argv[])
{

    int a, b;
    int suma_1 = 0, suma_2 = 0;

        cout << "Prosze podac liczbe a:";
        cin >> a;

        cout << "Prosze podac liczbe b:";
        cin >> b;

        for(int i=1; i<a; i++)
        {
            if(a % i == 0)
            {
                suma_1 = suma_1 + i;
            }
        }

        for(int j=1; j<a; j++)
        {
            if(b % j == 0)
            {
                suma_2 = suma_2 + j;
            }
        }

        if(suma_2 == a + 1 && suma_1 == b + 1)
            cout << "Liczby a i b sa skojarzone";

        else 
            cout << "Liczby a i b nie sa skojarzone";

return 0;
}