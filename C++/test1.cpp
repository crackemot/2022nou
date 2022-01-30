#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    clock_t tstart = clock();
        for(int i=0; i<8000; i++)
        {
            cout<<255.234113*i<<256.876383*i<<endl;
        }
    clock_t tend = clock();
    double seconds = (double)(tend - tstart) / CLOCKS_PER_SEC;
    cout<<endl;
    cout<<"C++ cycle duration is: "<<seconds<<endl;
}
