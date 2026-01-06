#include<stdio.h>
int main(){
int n,W;
printf("enter number of items: ");
scanf("%d",&n);
int val[n],wt[n];
for(int i=0;i<n;i++){
    printf("enter value and weight of item %d:",i+1);
    scanf("%d %d",&val[i],&wt[i]);
}
printf("enter knapsack capacity: ");
scanf("%d",&W);
int dp[W+1];
for(int i=0;i<=W;i++)
dp[i]=0;
for(int i=0;i<n;i++){
    for(int w=W;w>=wt[i];w--){
        if(dp[w-wt[i]]+val[i]>dp[w])
        dp[w]=dp[w-wt[i]]+val[i];
    }
}
printf("maximum value in knapsack=%d\n",dp[W]);
return 0;
}
