//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cmath>
int main()
{
long s,d,i,n;
while(scanf("%ld%ld",&s,&d)==2)
{
    n=0;
    for(i=s;; i++)
    {
        n+=i;
        if(n>d || n==d)
        {
            printf("%ld\n",i);
            break;
        }
    }
}
return 0;
}
