#include<stdio.h>
#include<math.h>
int main(){

    int n,sq,cube;

    scanf("%d",&n);

    sq = (n*n);

    cube = (n*n*n);

    double sq_root = sqrt(n);

    printf("%d\n %d\n %.2lf\n",sq,cube,sq_root);

    return 0;


}
