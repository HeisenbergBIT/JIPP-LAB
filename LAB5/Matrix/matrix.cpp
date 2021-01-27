#include <iostream>
#include <fstream>
#include "matrix.hpp"


Matrix::Matrix(int x, int y)
{
    wiersz = x;
    kolumna = y;

    wartosc = new double *[x];
        for(int i=0; i<x; i++)
        {
            wartosc[i] = new double [y];
        
            for(int j=0; j<y; j++)
            {
                wartosc[i][j] = 0;
            }
        }
}

Matrix::Matrix(int x)
{
    wiersz = x;
    kolumna = x;

    wartosc = new double *[x];
        for(int i=0; i<x; i++)
        {
            wartosc[i] = new double[x];
        
            for(int j=0; j<x; j++)
            {
                wartosc[i][j] = 0;
            }
        }
}

Matrix::~Matrix()
{
    for(int i=0; i< wiersz; i++)
    {
        delete wartosc[i];
    }
    delete wartosc;
}

double Matrix::set(int n, int m, double val)
{
    if ((n<0) || (n>=wiersz) || (m<0) || (m>=kolumna))
    {
        std::cout << "Zle";
    }
    return wartosc[n][m] = val;
}

double Matrix::get(int n, int m)
{
    if((n<0) || (n>=wiersz) || (m<0) || (m>=kolumna))
    {
        std::cout << "Zle";
    }
    return wartosc[n][m];
}

Matrix Matrix::operator+(Matrix &matrix2)
{
    if((wiersz != matrix2.wiersz) || kolumna != matrix2.kolumna)
    {
        std::cout << "Zle";
    }
    Matrix wynik =  Matrix(wiersz,kolumna);
        for(int i=0; i<wiersz; i++)
        {
            for(int j=0; j<kolumna; j++)
            {
                (wynik.wartosc)[i][j] = wartosc[i][j] + (matrix2.wartosc)[i][j];
            }
        }
        return wynik;
}

Matrix Matrix::operator-(Matrix &matrix2)
{
    if((wiersz!= matrix2.wiersz) || (kolumna != matrix2.kolumna))
    {
        std::cout << "Zle";
    }
    Matrix wynik = Matrix(wiersz, kolumna);
        for(int i=0; i<wiersz; i++)
        {
            for(int j=0; j<kolumna; j++)
            {
                (wynik.wartosc)[i][j] = wartosc[i][j] - (matrix2.wartosc)[i][j];
            }
        }
        return wynik;
}

Matrix Matrix:: operator*(Matrix &matrix2)
{
    if(kolumna != matrix2.wiersz)
    {
        std::cout << "Zle";
    }

    Matrix wynik = Matrix(wiersz, matrix2.kolumna);
    double suma;

        for(int i=0; i<wiersz; i++)
        {
            for(int j=0; j<matrix2.kolumna; j++)
            {
                suma =0;
                for(int k=0; k<kolumna; k++)
                {
                    suma += wartosc[i][k] * (matrix2.wartosc)[k][j];
                    (wynik.wartosc)[i][j] = suma;
                }
            }
        }
        return wynik;
}

void Matrix::operator++()
{
    for (int i = 0; i < kolumna; i++)
    {
        for (int j = 0; j < wiersz; j++)
            {
                set(i, j, (get(i, j) + 1));
            }
    }
}

void Matrix::operator--() 
{
    for (int i = 0; i < kolumna; i++)
        {
            for (int j = 0; j < wiersz; j++)
            {
                set(i, j, (get(i, j) - 1));
            }
        }
}

bool Matrix::operator==(Matrix &matrix_2) 
{
    if(wiersz == matrix_2.rows() && kolumna == matrix_2.cols())
    {
        for (int i = 0; i < kolumna; i++)
            {
                for (int j = 0; j < wiersz; j++)
               {
                    if(wartosc[i][j] != matrix_2.get(i, j))
                    return false;
               }
            }
    }
    else 
        {
            return false;
        }

return true;
}

bool Matrix::operator!=(Matrix &matrix_2)
 {
    if(wiersz == matrix_2.rows() && kolumna == matrix_2.cols()) 
    {
        for (int i = 0; i < kolumna; i++)
        {
            for (int j = 0; j < wiersz; j++)
               {
                    if(wartosc[i][j] != matrix_2.get(i, j))
                    return true;
               }
        }
    }
    else 
        {
            return true;
        }

    return false;
}

int Matrix::cols()
{
    return kolumna;
}

int Matrix::rows()
{
    return wiersz;
}

Matrix::Matrix(std::string filename)
{
    std::fstream plik;

    plik.open(filename, std::ios::in);

    if(plik.good())
    {
        plik >> wiersz;
        plik >> kolumna;

        wartosc = new double *[wiersz];
            for(int i=0; i<wiersz; i++)
            {
                wartosc[i] = new double [kolumna];
                    for(int j=0; j<kolumna; j++)
                    {
                        plik >> wartosc[i][j];
                    }
            }
            plik.close();
    }
    else
    {
        std::cout << "Zle";
    }
}


bool Matrix::store(std::string filename, std::string path)
{
    std::fstream plik;
    plik.open("plik.txt", std::ios::out);
        
        if(plik.good())
        {
            plik << wiersz << " " << kolumna << std::endl;
            for(int i=0; i<wiersz; i++)
            {
                for(int j=0; j<kolumna; j++)
                {
                    plik << wartosc[i][j] << " ";
                }
                plik << std::endl;
            }
            plik.close();
            return true;
        }
        else
        {
            return false;
        }
        
}


void Matrix::print()
{
    for(int i=0; i<wiersz; i++)
    {
        for(int j=0; j<kolumna; j++)
        {
            std::cout << wartosc[i][j] << " ";
            
        }
        std::cout << std::endl;
    }
}