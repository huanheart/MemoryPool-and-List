#include<iostream>
#include<cassert>
#include<ctime>

#include"memory_pool.hpp"
#include"map.hpp"

using namespace std;


int main()
{
    FindCache<string,std::allocator<string> > f1;
    FindCache<string,MemoryPool<string> > f2;
    auto start=clock();
    for(int i=0;i<1000000;i++)
    {
        f1.push("root","123");
        f1.pop("root","123");
    }
    cout<<"Default time :"<<( ( (double)clock()-start  )/CLOCKS_PER_SEC)<<endl;
    start=clock();
    for(int i=0;i<1000000;i++)
    {
        f2.push("root","123");
        f2.pop("root","123");
    }
     f2.push("root","123");
    cout<<"MemoryPool time :"<<( ( (double)clock()-start  )/CLOCKS_PER_SEC)<<endl;
    return 0;
}