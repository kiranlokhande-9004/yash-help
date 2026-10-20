#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g,h;
    int p1,p2,p3,p4,p5,p6,p7;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d%d%d%d",&e,&f,&g,&h);

    p1=a*(f-h);
    p2=(a+b)*h;
    p3=(c+d)*e;
    p4=d*(g-e);
    p5=(a+d)*(e+h);
    p6=(b-d)*(g+h);
    p7=(a-c)*(e+f);

    printf("%d %d\n%d %d",
       p5+p4-p2+p6, p1+p2,
       p3+p4, p1+p5-p3-p7);
    return 0;
}