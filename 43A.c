#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char name[n][15];
    for(int i = 0; i<n; i++){
        scanf("%s", name[i]);
    }
    int team_a = 1;
    int team_b = 0;
    char team_a_name[15];
    strcpy(team_a_name, name[0]);
    char team_b_name[15];
    for(int i = 1; i<n ; i++){
        if(!strcmp(team_a_name, name[i])){
            team_a++;
        }else{
            if(team_b == 0){
                strcpy(team_b_name, name[i]);
            }
            team_b++;
        }
    }
    if(team_a>team_b){
        printf("%s", team_a_name);
    }else{
        printf("%s", team_b_name);
    }
    return 0;
}