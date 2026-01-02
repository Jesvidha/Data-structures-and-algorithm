#include <stdio.h>
#define MAX 3
int adjmatrix[MAX][MAX];
int visited[MAX];
int n;
void BFS(int start)
{
    int queue[MAX],front=0,rear=0;
    printf("%d ",start);
    visited[start]=1;
    queue[rear++]=start;
    while(front<rear)
    {
        int current = queue[front++];
        for(int i=0;i<n;i++)
        {
            if(adjmatrix[current][i]==1 && !visited[i])
            {
                printf("%d",i);
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}
int main()
{
    int edges,u,v;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("enter number of edges");
    scanf("%d",&edges);
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        {
            adjmatrix[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++)
    {
        printf("enter edge(u,v):");
        scanf("%d %d",&u,&v);
        adjmatrix[u][v]=1;
        adjmatrix[v][u]=1;
    }
    printf("BFS traversal starting from vertex 0:");
    BFS(0);
    return 0;
