#include <iostream>

using namespace std;


#define H 2
#define W 3

void print_matrix(int M[H][W]);

void print_matrix(int M[H][W])
    {
        for(int i=0; i<H; i++)
        {
            for(int j=0; j<W; j++)
            {
                cout << M[i][j] << " ";
            }
           cout << endl;
        }
    }

int main(int argc, char *argv[])
{
    int M1[H][W] = { {4,1,6},
                     {5,3,2} };
    
    int M2[H][W] = { {9,5,7},
                     {4,3,4} };
                            
    int M3[H][W];

    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            M3[i][j]=M1[i][j] + M2[i][j];
        }
    }

    cout << "Macierz pierwsza:" << endl;
            print_matrix(M1);

    cout << "Macierz druga:" << endl;
            print_matrix(M2);

    cout << "Macierz trzecia:" << endl;
            print_matrix(M3);


return 0;
}