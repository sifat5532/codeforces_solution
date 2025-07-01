#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i< n; i++){
            a[i] = 1;
        }
        int who_is_moving = 1;
        for(int i = 0; i<n; i++){
            if(a[i] != 0){
                a[i] = 0;
                who_is_moving = 1;
                int j;
                for(j = 0; j<n; j++){
                    if(a[j] !=0){
                        if((i+j)%4 == 3){
                            who_is_moving = 0;
                            a[j] = 0;
                            break;
                        }
                    }
                }
                if(j==n){
                    break;
                }
            }
            
        }
        if(who_is_moving == 1){
            printf("Alice\n");
        }else{
            printf("Bob\n");
        }
    }
    return 0;
}