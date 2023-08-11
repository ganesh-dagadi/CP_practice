// 7
// 5 3 3 11
// 5 4 14 18 2
// 2 9 5 6
// 11 9
// 10 50 3 11
// 43 44 74 98 62 60 99 4 11 73
// 4 8 8 49
// 68 58 82 73
// 7 1 4 66
// 18 66 39 83 48 99 79
// 9 1 1 13
// 26 23 84 6 60 87 40 41 25
// 6 13 3 28
// 30 70 85 13 1 55
// https://codeforces.com/problemset/problem/1851/A
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool hasDecimal(float num, float tolerance = 1e-6) {
    float fractionalPart = abs(num - floor(num));
    return fractionalPart > tolerance;
}
int main(){
    int T ;
    cin >> T;
    while(T--){
        int n;
        int m;
        int k;
        int H;
        int temp;
        vector<int> heights;
        cin >> n;
        cin >> m;
        cin >> k;
        cin >> H;
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            heights.push_back(temp);
        }
        //solve
        int soln = 0;
        for(int i = 0 ; i < n ; i++){
            float diff = (float) (H - heights[i]) / k;
            diff = abs(diff);
            if(hasDecimal(diff)) continue;
            if(diff < m && diff >= 1) soln++;
        }
        cout << soln << endl;
        heights.clear();
    }
}