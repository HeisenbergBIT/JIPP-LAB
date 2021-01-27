#include <iostream>
#include <string>


class Matrix
{
    private:
        int wiersz;
        int kolumna;
        double **wartosc;

    public:
        double set(int n, int m, double val) noexcept(false);
        double get(int n, int m) noexcept(false);

        Matrix add(Matrix &matrix2) noexcept(false);
        Matrix substract(Matrix &matrix2) noexcept(false);
        Matrix multiply(Matrix &matrix2) noexcept(false);

        int cols();
        int rows();
        void print();

        bool store(std::string filename, std::string path) noexcept(false);

        Matrix(int w, int k);
        Matrix (int w);
        Matrix(std::string filename) noexcept(false);
        ~Matrix();

};