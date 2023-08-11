// https://codeforces.com/problemset/problem/1850/B
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        pair<int , int> p;
        cin >> n;
        int ans = 0;
        int maxQu = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> p.first >> p.second;
            if(p.first <= 10 && p.second > maxQu){
                maxQu = p.second;
                ans = i;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}