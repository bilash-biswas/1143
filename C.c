#include<stdio.h>
int main()
{
    int N,i,f,c;
    scanf("%d",&N);
    if(N>1 && N<1000)
    {
     for(i=1;i<=N;i++)
    {
        f=i*i;
        c=i*i*i;
        printf("%d %d %d\n",i,f,c);
    }
    }
    return 0;
}
