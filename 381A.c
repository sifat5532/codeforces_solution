#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int sereja = 0;
    int dima = 0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int f=0, l=n-1, taken = 0;
    while(taken<n){
        int max;
        if(a[f] > a[l]){
            max = a[f];
            f++;
        }else{
            max = a[l];
            l--;
        }
        if(taken%2==0){
            sereja = sereja + max;
        }else{
            dima = dima + max;
        }
        taken++;
    }
    printf("%d %d", sereja, dima);
    return 0;
}