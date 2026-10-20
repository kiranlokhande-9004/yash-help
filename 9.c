#include <stdio.h>
#include <string.h>

int max(int a,int b) {
    return a>b?a:b;
}

int main() {
    char x[100],y[100];
    int dp[100][100],i,j,m,n;

    scanf("%s%s",x,y);
    m=strlen(x);
    n=strlen(y);

    for(i=0;i<=m;i++)
        for(j=0;j<=n;j++) {
            if(i==0 || j==0) dp[i][j]=0;
            else if(x[i-1]==y[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }

    printf("LCS length = %d",dp[m][n]);
    return 0;
}