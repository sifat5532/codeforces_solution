#include<stdio.h>
#include<string.h>
#define total 8
int main(){
    char evee[total][15] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    int n;
    scanf("%d", &n);
    char chk[15];
    scanf("%s", chk);
    int ans_chk[total] = {0};
    int how_many_changed=0;
    for(int i = 0; i<n; i++){
        if(chk[i] != '.'){
            for(int j = 0; j<total; j++){
                if(ans_chk[j] == 0){
                    if(chk[i] != evee[j][i]){
                        ans_chk[j] = 1;
                        how_many_changed++;
                    }
                }
            }
        }
    }
    int ans;
    if(how_many_changed == total-1){
        for(int i = 0; i<total; i++){
        if(ans_chk[i] == 0){
            ans = i;
            break;
        }   
        }
    }else{
        for(int i = 0; i<total; i++){
            if(strlen(evee[i]) == n){
                ans = i;
                break;
            }
        }
    }
    printf("%s", evee[ans]);
    return 0;
}