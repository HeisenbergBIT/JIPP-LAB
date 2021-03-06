#include <iostream>
#include "matrix.hpp"


int main(int argc, char *argv[])
{
    std::cout << "Tworzy sie macierz o wymiarze 7x5" << std::endl;

    Matrix matrix = Matrix(7,5);

     matrix.print();

    try
    {
        matrix.set(3, 2, 99);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    

    std::cout << "Wartosc w (4,3) zostaje ustawiona na " << matrix.get(3,2) << " w matrix1" << std::endl;

    matrix.print();

    std::cout << "Tworzy sie macierzA kwadratowa 4x4" << std::endl;

    Matrix matrixA = Matrix(4);
    matrixA.print();

    std::cout << "Tworzy sie macierzB kwadratowa 4x4" << std::endl;

    Matrix matrixB = Matrix(4);
    matrixB.print();

    std::cout << "Wartosc w (1,3) zostaje ustawiona na 3,  w (3,1)->2 oraz (4,4)-> 5 wartosc w macierzyA" <<  std::endl;

    try
    {
        matrixA.set(0, 2, 3);
        matrixA.set(2, 0, 2);
        matrixA.set(3, 3, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
   
    matrixA.print();


    std::cout << "Wartosc w (1,2) zostaje ustawiona na 12, (4,1)-> 6 oraz (3,4)-> 1 w macierzyB" <<  std::endl;

    try
    {
        matrixB.set(0, 1, 12);
        matrixB.set(3, 0, 6);
        matrixB.set(2, 3, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    matrixB.print();

    std::cout << "Suma macierzyA oraz macierzyB zapisana w macierzC i do pliku" << std::endl;

    Matrix matrixC = matrixA.add(matrixB);

    try
    {
        Matrix matrixC = matrixA.add(matrixB);

        matrixC.store("plik.txt", "./Files/");

        matrixC.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    std::cout << "Roznica macierzyA oraz maceirzyB zapisana w macierzD" << std::endl;

    try
    {
        Matrix matrixD = matrixA.substract(matrixB);

        matrixD.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    std::cout << "Iloczyn macierzA oraz macierzB zapisana w macierzE" << std::endl;

    try
    {
         Matrix matrixE = matrixA.multiply(matrixB);
         
         matrixE.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
   
    std::cout << "MacierzC ilosc wierszy:" << matrixC.rows() << " ilosc kolumn:" << matrixC.cols();
    
return 0;
}