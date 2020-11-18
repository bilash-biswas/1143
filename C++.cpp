#include<iostream>
using namespace std;
int main()
{
    int N,i,f,c;
    cin>>N;
    if(N>1 && N<1000)
    {
     for(i=1;i<=N;i++)
    {
        f=i*i;
        c=i*i*i;
       cout<<i<<" "<<f<<" "<<c<<endl;
    }
    }
    return 0;
}
