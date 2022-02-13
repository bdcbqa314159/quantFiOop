#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;

namespace algebra
{
    class Matrix
    {

    private:
        int r, c;
        double *d;

    public:
        Matrix(int r, int c, double init = 0.);
        Matrix(const Matrix &m);
        ~Matrix();

        inline int rows() const { return r; }
        inline int columns() const { return c; }

        inline double operator()(int i, int j) const;

        inline double &operator()(int i, int j);

        friend Matrix operator+(const Matrix &A, const Matrix &B);
        friend Matrix operator+(const Matrix &A, double x);
        friend Matrix operator*(const Matrix &A, const Matrix &B);
        friend Matrix operator*(const Matrix &A, double x);
    };

    ostream &operator<<(ostream &os, const Matrix &mat);

    inline double Matrix::operator()(int i, int j) const
    {
        return d[i * c + j];
    }

    inline double &Matrix::operator()(int i, int j)
    {
        return d[i * c + j];
    }
}

namespace algebra1
{

    class Matrix
    {
    public:
        virtual int rows() const = 0;
        virtual int columns() const = 0;

        virtual double operator()(int i, int j) const = 0;

        virtual double &operator()(int i, int j) = 0;
    };

    class SquareMatrix : public virtual Matrix
    {
    public:
        double determinant() const;
    };

    class DenseMatrix : public virtual Matrix
    {
    private:
        int r, c;
        double *d;

    public:
        DenseMatrix(int r, int c, double init = 0.);
        DenseMatrix(const DenseMatrix &mat);
        DenseMatrix(const Matrix &mat);
        DenseMatrix &operator=(const Matrix &mat);
        inline DenseMatrix &operator=(const DenseMatrix &mat) { return operator=((const Matrix &)mat); }
        virtual ~DenseMatrix();
        virtual int rows() const;
        virtual int columns() const;
        virtual double operator()(int i, int j) const;
        virtual double &operator()(int i, int j);
    };

    class DenseSquareMatrix : public DenseMatrix, public SquareMatrix
    {
    public:
        inline DenseSquareMatrix(int rows, double init = 0.) : DenseMatrix(rows, rows, init){};
    };

    class DiagonalMatrix : public SquareMatrix
    {
    private:
        int r;
        double *d;

    public:
        DiagonalMatrix(int rows, double init = 0.);
        virtual ~DiagonalMatrix();
        virtual int rows() const;
        virtual int columns() const;
        virtual double operator()(int i, int j) const;
        virtual double &operator()(int i, int j);
    };

    DenseMatrix operator+(const Matrix &A, const Matrix &B);

    ostream &operator<<(ostream &os, const Matrix &A);
}

namespace algebra2
{

    template <class T>
    class Matrix
    {
    public:
        virtual ~Matrix();
        virtual T operator()(int i, int j) const = 0;
        virtual T &operator()(int i, int j) = 0;
    };

    template <class T>
    Matrix<T>::~Matrix() {}

    template <class T>
    class DenseMatrix : public Matrix<T>
    {
    private:
        int r, c;
        T *d;

    public:
        DenseMatrix(int r, int c, T init = 0);
        virtual ~DenseMatrix();
        virtual T operator()(int i, int j) const;
        virtual T &operator()(int i, int j);
    };

    template <class T>
    DenseMatrix<T>::~DenseMatrix()
    {
        delete[] d;
    }

    template <class T>
    DenseMatrix<T>::DenseMatrix(int r, int c, T init) : r(r), c(c)
    {
        d = new T[r * c];
        int i{};
        for (i = 0; i < r * c; i++)
        {
            d[i] = init;
        }
    }

    template <class T>
    T DenseMatrix<T>::operator()(int i, int j) const
    {
        return d[i * c + j];
    }

    template <class T>
    T &DenseMatrix<T>::operator()(int i, int j)
    {
        return d[i * c + j];
    }

}

#endif