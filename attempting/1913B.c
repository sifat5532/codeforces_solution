#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d%*c", &t);
    while(t--){
        char str[200002];
        fgets(str, 200001, stdin);
        int n = strlen(str)-1;
        int ones = 0, zeros = 0;
        for(int i = 0; i<n; i++){
            if(str[i] == '1'){
                ones++;
            }else{
                zeros++;
            }
        }
        int ans;
        if(ones>zeros){
            ans = ones-zeros;
        }else{
            ans = zeros-ones;
        }
        printf("%d\n", ans);
    }
    return 0;
}