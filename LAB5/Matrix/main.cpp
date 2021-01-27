#include <iostream>
#include "matrix.cpp"

int main(int argc, char *argv[])
{
    Matrix matrixA = Matrix(5);
    Matrix matrixB = Matrix(5);

    matrixA.set(1, 2, 4);
    matrixA.set(2, 1, 8);
    matrixA.set(3, 3, 5);

    matrixB.set(2, 2, 2);
    matrixB.set(0, 0, 7);
    matrixB.set(1, 3, 3);

    std::cout << "MacierzA:" << std::endl;
    matrixA.print();

    std::cout << "MacierzB:" << std::endl;
    matrixB.print();

    std::cout << "Odejmowanie maceirzyA oraz macierzyB:" << std::endl;

    Matrix matrixC = matrixA + matrixB;
    matrixC.print();
    std::cout << std::endl;

    std::cout << "Dodawanie macierzyA oraz macierzyB" << std::endl;

    Matrix matrixD = matrixA + matrixB;
    matrixD.print();
    std::cout << std::endl;

    std::cout << "Mnozenie macierzyA oraz macierzyB" << std::endl;

    Matrix matrixE = matrixA * matrixB;
    matrixE.print();
    std::cout << std::endl;

    ++matrixA;
    matrixA.print();
    std::cout << std::endl;

    --matrixB;
    matrixB.print();
    std::cout << std::endl;



return 0;
}