#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);

    int arr[t+5][5];

    for(int i=0;i<t;i++){
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }

    for(int i=0;i<t;i++){
        float d = ceil(arr[i][0]/6.0);
        int s = d*arr[i][1];

        printf("%d\n",s);
    }

    return 0;
    //ahnaf47
}
