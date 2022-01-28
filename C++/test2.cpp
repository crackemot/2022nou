#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    clock_t tstart = clock();
    int a[500][500]={0};
    int atr[500][500]={0};
    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            a[i][j] = i*j*13.26673;
        }
    }
    for(int i=0; i<500; i++)
    {
        for(int j=0;j<500; j++)
        {
            atr[j][i] = a[j][i];
        }
    }
    clock_t tend = clock();
    double seconds = (double)(tend - tstart) / CLOCKS_PER_SEC;
    cout<<seconds;
    delete a, atr;
}
