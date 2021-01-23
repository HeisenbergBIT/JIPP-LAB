#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float height;
    float weight;
    float BMI;

    cout << "Prosze podac wage [kg]:";
    cin >> weight;

    cout << "Prosze podac wzrost [m]:";
    cin >> height;

    BMI = (weight)/(height * height);

    if(BMI < 16)
        cout << "BMI: " << BMI << "- wyglodzenie";
    else if(BMI >= 16 && BMI < 17)
        cout << "BMI: " << BMI << "- wychudzenie";
    else if(BMI >= 17 && BMI < 18.5)
        cout << "BMI: " << BMI << "- niedowaga";
    else if(BMI >= 18.5 && BMI < 25)
        cout << "BMI: " << BMI << "- wartosc prawidlowa";
    else if(BMI >=25 && BMI < 30)
        cout << "BMI: " << BMI << "- nadwaga";
    else if(BMI >=30 && BMI < 35)
        cout << "BMI: " << BMI << "- 1 stopien otylosci";
    else if(BMI >=35 && BMI < 40)
        cout << "BMI: " << BMI << "- 2 stopien otylosci";
    else if(BMI >=40)
        cout << "BMI: " << BMI << "- otylosc skrajna";


return 0;
}