#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int num;
    int ans;
   while(n){
       cin >> num;
       if(num==1){
           ans = 2;
       }else{
           if(num%3 == 0){
               ans=num/3;
           }else if(num%3 == 1){
                ans = ((num/3)-1) + ((num-3*((num/3)-1))/2);
           }else if(num%3 == 2){
                    ans = 1+(num-2)/3;
           }
       }
       cout << ans << "\n";
       n--;
   }
   
   
  
    
    return 0;
}
