///https://www.youtube.com/watch?v=kaBX2s3pYO4&t=8s


#include<bits/stdc++.h>

#define ll                      long long

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int N=500005;


ll a[N];
ll par[N],sum[N];

ll fnd(ll x)
{
    if(par[x]==x) return x;
    else return par[x]=fnd(par[x]); ///path compresssion
    ///dui dike duita forest vable buja jabe alwayz step hoy na etar jonno
}

void tie(ll x,ll y)
{
   ll px=fnd(x);
   ll py=fnd(y);
   if(px==py) return;
   par[py]=px;
   //sum[px]+=sum[py];
}

int main()
{
    ll i,j,t,cas=0,k;
    ll n;cin>>n;
    for(i=1;i<=n;i++) par[i]=i;
   // for(i=1;i<=n;i++) { cin>>a[i]; sum[i]=a[i]; }

   //tie(1,2);
   //tie(2,1);

   // cout<<par[1]<<" "<<par[2]<<endl;
   // cout<<sum[par[1]]<<" "<<sum[par[2]]<<endl;



}

 /*for(ll i=1;i<=n;i++)
    {
        //cout<<pr[i]<<" ";
        if(pr[i]==i)   ///no of connected component
        {
           c++;
        }
    }*/
