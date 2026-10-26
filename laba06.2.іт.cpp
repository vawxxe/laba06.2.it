
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// 1. Створення масиву
void Create(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 101 - 50;
    }
}

// 2. Виведення масиву
void Print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

// 3. Пошук індексів найменшого та найбільшого елементів
void FindMinMaxIndices(const int a[], int n, int& minIndex, int& maxIndex)
{
    minIndex = 0;
    maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minIndex])
        {
            minIndex = i;
        }

        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
    }
}

int main()
{
    const int n = 10;
    int a[n];

    srand(static_cast<unsigned int>(time(nullptr)));

    Create(a, n);

    cout << "Original array:" << endl;
    Print(a, n);

    int minIndex, maxIndex;
    FindMinMaxIndices(a, n, minIndex, maxIndex);

    cout << "Minimum element = " << a[minIndex]
        << ", index = " << minIndex << endl;

    cout << "Maximum element = " << a[maxIndex]
        << ", index = " << maxIndex << endl;

    return 0;
}
