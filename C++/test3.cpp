#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    clock_t tstart = clock();
    int a[100][100]={0};
    int b[100][100]={0};
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            a[i][j] = i*j*13.26673;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            b[i][j] = i*j*17.36934;
        }
    }
    int c[100][100];
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    clock_t tend = clock();
    double seconds = (double)(tend - tstart) / CLOCKS_PER_SEC;
    cout<<seconds;
}
