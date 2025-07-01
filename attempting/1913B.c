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
        int ans = 0;
        if(ones == zeros){
            printf("%d\n", ans);
        }else{
            int fixed;
            if(ones<zeros){
                fixed = ones;
                ans = ans + zeros-ones;
            }else{
                fixed = zeros;
                ans = ans + ones-zeros;
            }
            
            int ones_str = 0;
            int zeros_str = 0;
            for(int i = 0; i<(fixed*2); i++){
                if(str[i] == '1'){
                    ones_str++;
                }else{
                    zeros_str++;
                }
            }
            if(ones_str != zeros_str){
                if(ones_str>zeros_str){
                    ans = ans + ones_str - fixed;
                }else{
                    ans = ans + zeros_str-fixed;
                }
            }
            printf("%d\n", ans);
        }
        
    }
    return 0;
}