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

double Matrix::set(int n, int m, double val) noexcept(false)
{
    
        if ((n<0) || (n>=wiersz) || (m<0) || (m>=kolumna))
        {
        throw "Zle";
        }
        return wartosc[n][m] = val;
       
}
    


double Matrix::get(int n, int m) noexcept(false)
{
       if((n<0) || (n>=wiersz) || (m<0) || (m>=kolumna))
        {
        throw "Zle";
        }
        return wartosc[n][m];
}

Matrix Matrix::add(Matrix &matrix2) noexcept(false)
{

       if((wiersz != matrix2.wiersz) || kolumna != matrix2.kolumna)
        {
        throw "Zle";
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
   

Matrix Matrix::substract(Matrix &matrix2) noexcept(false)
{
    
        if((wiersz!= matrix2.wiersz) || (kolumna != matrix2.kolumna))
        {
            throw "Zle";
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

Matrix Matrix::multiply(Matrix &matrix2) noexcept(false)
{
    
        if(kolumna != matrix2.wiersz)
        {   
            throw "Zle";
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


int Matrix::cols()
{
    return kolumna;
}

int Matrix::rows()
{
    return wiersz;
}

Matrix::Matrix(std::string filename) noexcept(false)
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
            throw "Zle";
        }
    
}


bool Matrix::store(std::string filename, std::string path)
{
    
        std::fstream plik;
        plik.open ("plik.txt", std::ios::out);
        
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