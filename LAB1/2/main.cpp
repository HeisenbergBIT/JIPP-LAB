#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string slowo;
    int i;
    int j;
 
    cout << "Prosze podac slowo:";
    cin >> slowo;

    j = slowo.length() - 1;

    for(i=0;i < j; i++)
    {
        if(slowo[i] != slowo[j])
        break;

        j--;
    }

    if(i==j)
    {
        cout << "To slowo to palindrom";
    }

    else 
    {
        cout << "To slowo to nie jest palindrom";
    }

return 0;
}