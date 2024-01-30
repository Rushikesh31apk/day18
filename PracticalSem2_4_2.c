 #include <stdio.h>
int main() {
    int m[10][10],in,out, n,i, j;
    printf("How many vertices: ");
    scanf("%d", &n);
    for (i =1; i <=n; i++){
        for (j =1; j <=n; j++) {
        	 m[i][j] = 0;
            if (i != j) {
                printf("Is there an edge between %d and %d (1/0): ",i,j);
                scanf("%d",&m[i][j]);
            }
        }
    }
    printf("\nVertex\tIndegree\tOutdegree\tTotal Degree\n");
    for (i= 1; i<=n; i++) {
        in=out=0;
        for (j=1; j<=n; j++) {
            in += m[j][i]; 
            out += m[i][j];
       }
       printf("%d\t%d\t\t%d\t\t%d\n",i,in,out,in+out);
    }

    return 0;
}
/*
How many vertices: 5
Is there an edge between 1 and 2 (1/0): 1
Is there an edge between 1 and 3 (1/0): 1
Is there an edge between 1 and 4 (1/0): 1
Is there an edge between 1 and 5 (1/0): 0
Is there an edge between 2 and 1 (1/0): 0
Is there an edge between 2 and 3 (1/0): 1
Is there an edge between 2 and 4 (1/0): 0
Is there an edge between 2 and 5 (1/0): 0
Is there an edge between 3 and 1 (1/0): 0
Is there an edge between 3 and 2 (1/0): 0
Is there an edge between 3 and 4 (1/0): 1
Is there an edge between 3 and 5 (1/0): 1
Is there an edge between 4 and 1 (1/0): 0
Is there an edge between 4 and 2 (1/0): 0
Is there an edge between 4 and 3 (1/0): 0
Is there an edge between 4 and 5 (1/0): 1
Is there an edge between 5 and 1 (1/0): 0
Is there an edge between 5 and 2 (1/0): 0
Is there an edge between 5 and 3 (1/0): 0
Is there an edge between 5 and 4 (1/0): 0

Vertex  Indegree        Outdegree       Total Degree
1       0               3               3
2       1               1               2
3       2               2               4
4       2               1               3
5       2               0               2

--------------------------------*/
