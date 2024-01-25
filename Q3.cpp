#include <iostream>
using namespace std;

void input(int a[][100], int x, int y) 
{
      cout << "Enter the elements of the matrix:" <<   endl;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j) 
        {
              cout << "Enter element at position [" << i << "][" << j << "]: ";
              cin >> a[i][j];
        }
    }
}


void display(const int a[][100], int x, int y)
{
      cout << "Matrix elements:" <<   endl;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j) 
        {
              cout << a[i][j] << " ";
        }
          cout <<   endl;
    }
}


int sum(const int a[][100], int x, int y)
{
    int sum = 0;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j)
        {
            sum =sum + a[i][j];
        }
    }
    return sum;
}

void rowsum(const int a[][100], int x, int y)
{
      cout << "Row-wise sum:" <<   endl;
    for (int i = 0; i < x; ++i) 
    {
        int rowSum = 0;
        for (int j = 0; j < y; ++j) 
        {
            rowSum += a[i][j];
        }
          cout << "Row " << i << ": " << rowSum <<   endl;
    }
}


void colsum(const int a[][100], int x, int y) {
      cout << "Column-wise sum:" <<   endl;
    for (int j = 0; j < y; ++j) {
        int colSum = 0;
        for (int i = 0; i < x; ++i) {
            colSum += a[i][j];
        }
          cout << "Column " << j << ": " << colSum <<   endl;
    }
}

void transpose(const int a[][100], int x, int y) 
{
    int transpose[100][100];
      cout << "Transpose of the matrix:" <<   endl;
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j) 
        {
            transpose[i][j] = a[j][i];
              cout << transpose[i][j] << " ";
        }
          cout <<   endl;
    }
}

int main() 
{
    int x, y;
    int a[100][100];

    cout << "Enter the number of rows (x): " << endl;
      cin >> x;
      cout << "Enter the number of columns (y): " << endl;
      cin >> y;

    input(a, x, y);

    int type;
    do
    {
          cout << "\nMenu:\y";
          cout << "1. display matrix elements"<<endl;
          cout << "2. sum of all elements"<<endl;
          cout << "3. row-wise sum"<<endl;
          cout << "4. column-wise sum"<<endl;
          cout << "5. transpose of the matrix" << endl;
          cout << "6. exit"<<endl;
          cout << "enter your choice: " << endl;
          cin >> type;

        switch (type)
        {
        case 1:
            display(a, x, y);
            break;
        case 2:
              cout << "Sum of all elements: " << sum(a, x, y) << endl;
            break;
        case 3:
            rowsum(a, x, y);
            break;
        case 4:
            colsum(a, x, y);
            break;
        case 5:
            transpose(a, x, y);
            break;
        case 6:
              cout << "Exiting program"<<endl;
            break;
        default:
              cout << "Invalid choice"<<endl;
            break;
        }
    } while (type != 6);

    return 0;
}