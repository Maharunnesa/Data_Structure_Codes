#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1,g[20],vindex=0;
void bfs(int v){
	for (i=1;i<=n;i++)
	  if(a[v][i] && !visited[i])
	   q[++r]=i;
	   
	if(f<=r) {
        g[vindex]=v;
        vindex++;
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}

void main(){
	int v;

	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		q[i]=0;
		visited[i]=0;
	}
	int edge,x,y;
	printf("Enter the number of Edges:");
    scanf("%d",&edge);
	printf("\nEnter the edges:");
    for(i=0;i<edge;i++){
    scanf("%d%d",&x,&y);
    a[x][y]=1;
    a[y][x]=1;
    }

	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);

	   printf("BFS: ");
	   for(i=0;i<vindex;i++)
	   printf("%d ",g[i]);
	getch();
}