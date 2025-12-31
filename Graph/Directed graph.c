#include<stdio.h>
#define MAX 10
int adjmatrix[MAX][MAX];
void addedge(int u,int v)
{
    adjmatrix[u][v]=1;
}
void printgraph(int vertices)
{
    printf("adjacency matrix:\n");
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            printf("%d ",adjmatrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int vertices,edges;
    int u,v;
    printf("enter number of vertices:");
    scanf("%d",&vertices);
    printf("enter number of edges:");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++)
    {
        printf("enter edge(u v):");
        scanf("%d %d", &u,&v);
        addedge(u,v);
    }
    printgraph(vertices);
    return 0;
}
