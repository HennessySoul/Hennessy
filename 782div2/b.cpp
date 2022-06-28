#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
const int maxn=2e5+10;
char str[maxn];
int ans[maxn];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        scanf("%s",str+1);
        if(k%2==0){
            for(int i=1;i<=n;i++){
                if(!k)break;
                if(str[i]=='0'){
                    str[i]='1';
                    ans[i]++;
                    k--; 
                }
                              
            }
            if(k%2==1){
                str[n]='0';
                if(ans[n]){
                ans[1]+=k+1;
                ans[n]--;
                }
                else{
                    ans[n]++;
                    ans[1]+=(k-1);
                }
            }
            else{
                ans[1]+=k;
            }
        }
        else{
                int pos=1;
                for(;pos<=n;pos++)if(str[pos]=='1')break;
                pos=min(pos,n);
                ans[pos]++;
                k--;
                for(int i=1;i<=n;i++){
                    if(i==pos)continue;
                    if(str[i]=='1')str[i]='0';
                    else str[i]='1';
                }
                for(int i=1;i<=n;i++){
                if(!k)break;
                if(str[i]=='0'){
                    str[i]='1';
                    ans[i]++;
                    k--; 
                }
                                
            }
                 if(k%2==1){
                str[n]='0';
                if(ans[n]){
                ans[1]+=k+1;
                ans[n]--;
                }
                else{
                    ans[n]++;
                    ans[1]+=(k-1);
                }
            }
            else{
                ans[1]+=k;
            }
            
        }
        printf("%s",str+1);
        printf("\n");
        for(int i=1;i<=n;i++)printf("%d ",ans[i]);
        printf("\n");
        for(int i=1;i<=n;i++){
            str[i]='\0';
            ans[i]=0;
        }
    }
}
