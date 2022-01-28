#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    auto tstart = chrono::high_resolution_clock::now();
        for(int i=0; i<8000; i++)
        {
            cout<<255.234113*i<<256.876383*i<<endl;
        }
    auto tend = chrono::high_resolution_clock::now();
    chrono::duration<float> duration = tend - tstart;
    cout<<endl;
    cout<<"C++ cycle duration is: "<<duration.count()<<endl;
}
