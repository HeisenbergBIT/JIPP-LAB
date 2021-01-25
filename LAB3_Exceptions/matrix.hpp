#include <iostream>
#include <string>


class Matrix
{
    private:
        int wiersz;
        int kolumna;
        double **wartosc;

    public:
        double set(int n, int m, double val);
        double get(int n, int m);

        Matrix add(Matrix &matrix2);
        Matrix substract(Matrix &matrix2);
        Matrix multiply(Matrix &matrix2);

        int cols();
        int rows();
        void print();

        bool store(std::string filename, std::string path);

        Matrix(int w, int k);
        Matrix (int w);
        Matrix(std::string filename);
        ~Matrix();

};