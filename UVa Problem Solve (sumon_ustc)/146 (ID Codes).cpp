//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    char A [100],
         Len;
    while ( scanf( "%s" , A ))
    {
        if ( A [0] == '#' )
            break;
        Len =strlen (A);
        if (next_permutation (A, A + Len) )
            printf ( "%s\n" , A);
        else
            printf ( "No Successor\n" );
    }
    return 0;
}
