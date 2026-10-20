#include <stdio.h>
#define INF 99999

int main() {
    int a[10][10], n, i, j, k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][k]!=INF && a[k][j]!=INF &&
                   a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][j];

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            if(a[i][j]==INF) printf("INF ");
            else printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}