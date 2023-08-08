#include <iostream>
#include <vector>
using namespace std;

class Mat
{
private:
    int m; // Number of rows
    int n; // Number of columns
    vector<vector<int>> data;

public:
    Mat(int rows, int cols)
    {
        m = rows;
        n = cols;
        data.resize(m, vector<int>(n, 0));
    }

    void set(int row, int col, int val)
    {
        if (row >= 0 && row < m && col >= 0 && col < n)
        {
            data[row][col] = val;
        }
        else
        {
            cout << "Invalid row or column index." << endl;
        }
    }

    int get(int row, int col) const
    {
        if (row >= 0 && row < m && col >= 0 && col < n)
        {
            return data[row][col];
        }
        else
        {
            cout << "Invalid row or column index." << endl;
            return 0;
        }
    }

    void display() const
    {
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Mat operator+(const Mat &m1, const Mat &m2);
    friend Mat operator*(const Mat &m1, const Mat &m2);
};

Mat operator+(const Mat &m1, const Mat &m2)
{
    if (m1.m == m2.m && m1.n == m2.n)
    {
        Mat result(m1.m, m1.n);
        for (int i = 0; i < m1.m; ++i)
        {
            for (int j = 0; j < m1.n; ++j)
            {
                result.data[i][j] = m1.data[i][j] + m2.data[i][j];
            }
        }
        return result;
    }
    else
    {
        cout << "Matrix dimensions mismatch for addition." << endl;
        return Mat(0, 0);
    }
}

Mat operator*(const Mat &m1, const Mat &m2)
{
    if (m1.n == m2.m)
    {
        Mat result(m1.m, m2.n);
        for (int i = 0; i < m1.m; ++i)
        {
            for (int j = 0; j < m2.n; ++j)
            {
                for (int k = 0; k < m1.n; ++k)
                {
                    result.data[i][j] += m1.data[i][k] * m2.data[k][j];
                }
            }
        }
        return result;
    }
    else
    {
        cout << "Matrix dimensions mismatch for multiplication." << endl;
        return Mat(0, 0);
    }
}

int main()
{
    Mat mat1(2, 3);
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);

    Mat mat2(3, 2);
    mat2.set(0, 0, 7);
    mat2.set(0, 1, 8);
    mat2.set(1, 0, 9);
    mat2.set(1, 1, 10);
    mat2.set(2, 0, 11);
    mat2.set(2, 1, 12);

    Mat sum = mat1 + mat2;
    Mat product = mat1 * mat2;

    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();

    cout << "Sum:" << endl;
    sum.display();

    cout << "Product:" << endl;
    product.display();

    return 0;
}
