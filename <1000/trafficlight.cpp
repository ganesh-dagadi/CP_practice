// https://codeforces.com/contest/1744/problem/C

#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s = "";
        char t;
        int n;
        cin >> n;
        cin >> t;
        cin >> s;

        int ans = 0;
        int steps = 0;
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == t) count++;
        }
        int i = 0;
        if(t == 'g'){
            cout << 0 <<endl;
            continue;
        }
        while(count > 0){
            //cout << count;
            if(s[i] == t){
                while(s[i] != 'g'){
                    steps++;
                    if(s[i] == t) count--;
                    i = (i+1)%n;
                }
                ans = max(ans , steps);
                
                steps = 0;
            }
            i = (i+1)%n;
        }
        cout << max(steps , ans) << endl;
    }
    return 0;
}