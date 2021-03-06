#include <bits/stdc++.h>
using namespace std;
//{ Loops
#define forab(i,a,b) for (__typeof(b) i = (a); i <= (b); ++i)
#define rep(i,n) forab (i, 0, (n) - 1)
#define For(i,n) forab (i, 1, n)
#define rofba(i,a,b) for (__typeof(b) i = (b); i >= (a); --i)
#define per(i,n) rofba (i, 0, (n) - 1)
#define rof(i,n) rofba (i, 1, n)
#define forstl(i,s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
//}
//{ Floating-points
#define EPS 1e-7
#define abs(x) (((x) < 0) ? - (x) : (x))
#define zero(x) (abs (x) < EPS)
#define equal(a,b) (zero ((a) - (b)))
#define PI 2*acos (0.0)
//}
typedef long long int64;
typedef unsigned long long int64u;
#define memo(a,v) memset(a,v,sizeof(a))
#define all(a) a.begin(),a.end()
#define db double
#define pb push_back
#define pii pair<int ,int >
#define NL puts("")
//{
//Intput_Output
#define II ({ int a; scanf("%d",&a); a;})
#define IL ({ int64 a; scanf("%lld",&a); a;})
#define ID ({ db a; scanf("%lf",&a); a;})
#define IC ({ char a; scanf("%c",&a); a;})
#define IS ({ string a; cin >> a; a;})
#define ICA(n) ({ char a[n]; scanf("%s",&a); a;})
#define OC printf("Case %d:",cs);
//}
//}
template <class T, class U> inline T max (T &a, U &b)
{
    return a > b ? a : b;
}
template <class T, class U> inline T min (T &a, U &b)
{
    return a < b ? a : b;
}
template <class T, class U> inline T swap (T &a, U &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[6]={2,1,-1,-2,-1,1};int dy[6]={0,1,1,0,-1,-1}; //Hexagonal Direction
const int64 INF = (1ll)<<50;
const int mx = 1e5 + 7;
const int mod = 1000000007 ;
const db pi = PI;
int EQ(double d)
{
    if ( fabs(d) < EPS ) return 0;
    return d > EPS ? 1 : -1 ;
}
struct router
{
    int x,y,r;
    router(int _x,int _y,int _r)
    {
        x = _x;
        y = _y;
        r = _r;
    }
};
vector<router>v;
bool inCover(router a,router b)
{
    int x = a.x - b.x,y = a.y - b.y;
    int dis = (x*x) + (y*y);
    return dis<=a.r;
}
int main()
{
#ifdef Sanim
    freopen ("in.txt", "r", stdin);
// freopen ("output.txt", "w", stdout);
#endif
    int t = II;
    For(cs,t)
    {
        v.clear();
        int n = II,Y = II;
        rep(i,n)
        {
            int x = II,y = II,r = II;
            v.pb(router(x,y,r*r));
        }
        OC;
        NL;
        rep(i,Y)
        {
            int x = II,y = II;
            bool flag = false;
            rep(j,n)
            {
                if(inCover(v[j],router(x,y,0)))
                {
                    flag = true;
                    break;
                }
            }
            if(flag) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
