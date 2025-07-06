#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string, int>> id;
    int n, size, i;
    cin >> n;
    while(n--){
        string x;
        cin >> x;
        size = id.size();
        int status = 0;
        for(i=0;i<size;i++){
            if(id[i].first == x){
                status = 1;
                break;
            }
        }
        if(status == 0){
            id.push_back({x, 0});
            cout << "OK" << endl;
        }else{
            id[i].second++;
            cout << id[i].first << id[i].second << endl;
        }
    }
    return 0;
}