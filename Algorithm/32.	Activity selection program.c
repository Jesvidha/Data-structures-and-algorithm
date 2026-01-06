#include<stdio.h>
int main(){
    int n;
    printf("enter number of activities: ");
    scanf("%d",&n);
    int start[n],finish[n];
    for(int i=0;i<n;i++){
        printf("enter start and finish time for activity %d: ",i);
        scanf("%d %d",&start[i],&finish[i]);
    }
    int lastfinish=finish[0];
    printf("\nselected activities:\n");
    printf("activity 0 (start=%d,finish=%d)",start[0],finish[0]);
    for(int i=1;i<n;i++){
        if(start[i]>=lastfinish){
            printf("activity %d (start=%d,finish=%d)\n",start[i],finish[i]);
            lastfinish=finish[i];
        }
    }
    return 0;   
}
