#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(vector<int>&a){
    int n = a.size() - 1;
    if(a[0] == -1 && a[n] == -1){
        a[0] = 0;
        a[n]=0;
    }
    else if(a[0] == -1){
        a[0] = a[n];
    }
    else if(a[n]== -1){
        a[n] = a[0];
    }
    for(int i =0; i<=n; i++){
        if(a[i] == -1){
            a[i] = 0;
        }
    }
    cout <<abs(a[n] - a[0]) << "\n";
    for(int i=0; i<=n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t{};
    cin >> t;
    while(t--){
        int n{};
        cin >> n;
        vector<int>nums(n);
        for(int i = 0 ; i<n; i++){
            cin >> nums[i];
        }
        solve(nums);
    }
     return 0;
}





