#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    vector<int> dp(n+1,-1);
    
    dp[1] = 1;
    dp[0] = 0;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
}

//Memoisation method
// int fib(int n, vector<int> &dparr){
//     if(n <= 1)
//         return n;

//     if(dparr[n] != -1) 
//         return dparr[n];
    
//     dparr[n] = fib(n-1, dparr) + fib(n-2, dparr);
//     return dparr[n];
// }

int main(){
    int n = 10;
    cin >> n;

    vector<int> dparr(n+1,-1);

    // cout << fib(n,dparr) << endl;
    fib(n) 

    return 0;
}