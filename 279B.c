#include <stdio.h>

int main(){
    int n, t;
    scanf("%d %d", &n, &t);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int max = 0;
    int f = 0, l = 0;
    int sum = 0;
    while(l<n){
        sum += a[l];
        if(sum > t){
            int temp_max;
            temp_max = l-f-1;
            if(max < temp_max){
                max = temp_max;
            }
            sum -= a[f];
            sum -= a[l];
            f++;
        }else{
            if(max < (l-f+1)){
                max = l-f+1;
            }
            l++;
        }
    }
    printf("%d", max);
    return 0;
}