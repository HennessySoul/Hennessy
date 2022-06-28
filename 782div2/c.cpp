#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
const int maxn=2e5+10;
long long city[maxn];
long long pre[maxn];
long long ans[maxn];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,b;
        long long mn=1e18;
        scanf("%lld%lld%lld",&n,&a,&b);
        for(int i=1;i<=n;i++)scanf("%lld",&city[i]);
        for(int i=1;i<=n;i++)pre[i]=pre[i-1]+city[i];
        for(int i=0;i<=n;i++){
            ans[i]=city[i]*(a+b)+((pre[n]-pre[i])-(n-i)*city[i])*b;
            mn=min(ans[i],mn);

        }
        printf("%lld\n",mn);
        for(int i=1;i<=n;i++){
            city[i]=0;
            pre[i]=0;
            ans[i]=0;
        }
    }
}
