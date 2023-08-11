// https://codeforces.com/problemset/problem/1841/B

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int prevMax = INT_MIN;
        int first = INT_MIN;
        bool filledFirst = false;
        bool broken = false;
        int temp;
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            if(temp >= prevMax){
                if(broken && temp > first){
                    cout << 0;
                    continue;
                }
                if(!filledFirst){
                    filledFirst = true;
                    first = temp;
                }
                prevMax = temp;
                cout << 1;
                continue;
            }else if(temp <= first && !broken){
                broken = true;
                prevMax = temp;
                cout << 1;
                continue;
            }
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}