#include <iostream>

using namespace std;


void insertion_sort(int array[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = array[i];  
        j = i - 1;  
  
        while (j >= 0 && array[j] > key) 
        {  
            array[j + 1] = array[j];  
            j = j - 1;  
        }  
        array[j + 1] = key;  
    }  
}  

void print_array(int array[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << array[i] << " ";  
    cout << endl; 
}


int main(int argc, char *argv[])
{
    int *tablica = new int[argc - 1];

    for(int i=0; i<argc -1; i++)
    {
        tablica[i] = atoi(argv[i + 1]);
    }

    cout << "Liczby:";
        print_array(tablica, argc - 1);

    insertion_sort(tablica, argc - 1);

    cout << "Out:";
        print_array(tablica, argc - 1);

return 0;
}