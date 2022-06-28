#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,r,b;
        scanf("%d%d%d",&n,&r,&b);
        if(r%(b+1)==0){
            int k=r/(b+1);
            for(int i=1;i<=b;i++){
                for(int j=1;j<=k;j++)printf("R");
                printf("B");
            }
            for(int j=1;j<=k;j++)printf("R");
            printf("\n");
        }
        else{
            int k=r/(b+1);
            int yu=r-k*(b+1);
            for(int i=1;i<=b;i++){
                for(int j=1;j<=k;j++)printf("R");
                if(yu){
                    printf("R");
                    yu--;
                }
                printf("B");
            }
            for(int i=1;i<=k;i++)printf("R");
            printf("\n");
        }
    }
}
