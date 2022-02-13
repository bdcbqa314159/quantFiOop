#include "../include/quantFiOop_bits/matrix.hpp"

namespace algebra
{
    Matrix::Matrix(int nrows, int ncols, double ini) : r(nrows), c(ncols)
    {
        int i{};
        d = new double[nrows * ncols];
        double *p = d;
        for (i = 0; i < nrows * ncols; i++)
            *p++ = ini;
    }

    Matrix::Matrix(const Matrix &mat)
    {

        int i;
        r = mat.r;
        c = mat.c;

        d = new double[r * c];

        double *p = d;
        double *pm = mat.d;

        for (int i = 0; i < r; i++)
        {
            *p++ = *pm++;
        }
    }

    Matrix::~Matrix()
    {
        delete[] d;
    }

    Matrix operator+(const Matrix &A, const Matrix &B)
    {
        int i;
        Matrix result(A);
        double *p = result.d;
        double *pB = B.d;

        for (int i = 0; i < A.r * A.c; i++)
        {
            *p++ += *pB++;
        }

        return result;
    }

    ostream &operator<<(ostream &os, const Matrix &A)
    {
        int i{}, j{};

        for (i = 0; i < A.rows(); i++)
        {
            for (j = 0; j < A.columns() - 1; j++)
            {
                os << A(i, j) << ',';
            }

            os << A(i, j) << endl;
        }
        return os;
    }

}

namespace algebra1
{

    DenseMatrix::DenseMatrix(int r, int c, double init) : r(r), c(c)
    {
        int i;
        d = new double[r * c];
        double *p = d;
        for (i = 0; i < r * c; i++)
        {
            *p++ = init;
        }
    }

    DenseMatrix::DenseMatrix(const DenseMatrix &mat)
    {
        int i;
        r = mat.r;
        c = mat.c;
        d = new double[r * c];
        double *p = d;
        double *pm = mat.d;
        for (i = 0; i < r * c; i++)
        {
            *p++ = *pm++;
        }
    }

    DenseMatrix::DenseMatrix(const Matrix &mat)
    {
        int i, j;
        r = mat.rows();
        c = mat.columns();
        d = new double[r * c];
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                d[i * c + j] = mat(i, j);
            }
        }
    }

    DenseMatrix &DenseMatrix::operator=(const Matrix &mat)
    {
        int i, j;
        if (this != &mat)
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    d[i * c + j] = mat(i, j);
                }
            }
        }
        return *this;
    }

    DenseMatrix::~DenseMatrix()
    {
        delete[] d;
    }

    double DenseMatrix::operator()(int i, int j) const
    {
        return d[i * c + j];
    }

    double &DenseMatrix::operator()(int i, int j)
    {
        return d[i * c + j];
    }

    int DenseMatrix::rows() const
    {
        return r;
    }

    int DenseMatrix::columns() const
    {
        return c;
    }

    DenseMatrix operator+(const Matrix &A, const Matrix &B)
    {
        int i, j;
        DenseMatrix result(A);
        for (i = 0; i < A.rows(); i++)
        {
            for (j = 0; j < A.columns(); j++)
            {
                result(i, j) = A(i, j) + B(i, j);
            }
        }

        return result;
    }

    ostream &operator<<(ostream &os, const Matrix &A)
    {
        int i, j;

        for (i = 0; i < A.rows(); i++)
        {
            for (j = 0; j < A.columns(); j++)
            {
                os << A(i, j) << ',';
            }
            os << endl;
        }
        return os;
    }

    DiagonalMatrix::DiagonalMatrix(int rows, double init)
    {
        int i;
        r = rows;
        d = new double[rows];
        double *p = d;
        for (i = 0; i < rows; i++)
        {
            *p++ = init;
        }
    }

    DiagonalMatrix::~DiagonalMatrix()
    {
        delete[] d;
    }

    double DiagonalMatrix::operator()(int i, int j) const
    {
        return (i == j) ? d[i] : 0.;
    }

    double &DiagonalMatrix::operator()(int i, int j)
    {
        if (i != j)
            throw logic_error("Write access to off_diagonal elements of DiagonalMatrix not permitted.");

        return d[i];
    }

    int DiagonalMatrix::rows() const
    {
        return r;
    }

    int DiagonalMatrix::columns() const
    {
        return r;
    }

}