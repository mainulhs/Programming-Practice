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
    int x,y;

    while(1)
    {
        scanf("%d %d",&x,&y);
        if(x==0 && y==0)
            break;
        if(x==1 || y==1)
        {
            printf("%d knights may be placed on a %d row %d column board.\n",x*y,x,y);
        }
        else if(x==2 || y==2)
        {
            int temp=ceil(x*y/8.0)*4;
            if(x>3)
            {
                if(x%4==1)
                {
                    temp-=2;
                }
            }
            if(y>3)
            {
                if(y%4==1)
                {
                    temp-=2;
                }
            }
            printf("%d knights may be placed on a %d row %d column board.\n",temp,x,y);
        }
        else if(x%2==0 ||y%2==0)
        {
            printf("%d knights may be placed on a %d row %d column board.\n",y*x/2,x,y);
        }
        else
        {
            printf("%d knights may be placed on a %d row %d column board.\n",((y/2)+1)*((x/2)+1)+(y/2)*(x/2),x,y);
        }
    }
    return 0;
}

