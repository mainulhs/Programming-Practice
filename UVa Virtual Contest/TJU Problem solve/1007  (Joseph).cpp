#include <iostream>
using namespace std;
int main()
{
    int m[]={2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    int k;
    while( cin>>k )
    {
        if(k == 0)
            break;
        cout<<m[k-1]<<endl;
    }
}
