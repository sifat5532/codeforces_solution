#include<stdio.h>

int main(){
    char a[110];
    fgets(a, 109, stdin);
    int c = 0;
    while(a[c+1] != '\0'){
        if(a[c] == 'a' || a[c] == 'e' || a[c] == 'i' || a[c] == 'o' || a[c] == 'u' || a[c] == 'y' || a[c] == 'A' || a[c] == 'E' || a[c] == 'I' || a[c] == 'O' || a[c] == 'U' || a[c] == 'Y'){

        }else{
            if(a[c]>= 'A' && a[c]<='Z'){
                printf(".%c", (a[c] + 32));
            }else{
                printf(".%c", a[c]);
            }
        }
        c++;
    }
    return 0;
}