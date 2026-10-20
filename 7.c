#include <stdio.h>

int main() {
    int n,i,j,w[20],p[20],cap,t;
    float r[20],profit=0,temp;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d%d",&p[i],&w[i]);
    scanf("%d",&cap);

    for(i=0;i<n;i++) r[i]=(float)p[i]/w[i];

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(r[i]<r[j]) {
                temp=r[i]; r[i]=r[j]; r[j]=temp;
                t=p[i]; p[i]=p[j]; p[j]=t;
                t=w[i]; w[i]=w[j]; w[j]=t;
            }

    for(i=0;i<n && cap>0;i++) {
        if(w[i]<=cap) {
            profit+=p[i];
            cap-=w[i];
        } else {
            profit+=r[i]*cap;
            cap=0;
        }
    }

    printf("Maximum profit = %.2f",profit);
    return 0;
}