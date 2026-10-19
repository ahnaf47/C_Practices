#include<stdio.h>
#include<math.h>
int main(){

    double h,w,d,v,v_cm,t;

    scanf("%lf%lf%lf",&h,&w,&d);

    v = (h*w*d);

    v_cm = (v*1000000);

    t = (v_cm/100);

    printf("%.0f\n",ceil(t));


    return 0;
}
