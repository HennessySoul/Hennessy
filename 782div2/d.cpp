#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
const int maxn=2e5+10;
int num[maxn];
int ans[maxn];
int sum1[maxn];
int sum2[maxn];
int n;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long add=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&num[i]);
            add+=num[i];
        }
        int number=add/n;
        int num0=0;
        int cnt=0;
        int s=0;
        //printf("%d",number);
        for(int i=n;i>=1;i--){
            num[i]-=s;
            //printf("%d %d",num[i],s);
            if(num[i]==i){
                ans[i]=1;
                sum1[i-number+1]++;
                if(number)s++;
                number--;
            }
            else{
                ans[i]=0;
                sum1[i-number+1]++;
                if(number)s++;
            }
            if(sum1[i])s-=sum1[i];
        }
        for(int i=1;i<=n;i++)printf("%d ",ans[i]);
        printf("\n");
        for(int i=0;i<=n+1;i++){
            ans[i]=0;
            sum1[i]=0;
            num[i]=0;
        }
    }
}