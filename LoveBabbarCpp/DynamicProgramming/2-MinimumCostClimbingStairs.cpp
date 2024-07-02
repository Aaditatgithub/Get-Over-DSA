#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Given integer array cost, where cost[i] is cost of ith step on a staircase.
// Once you pay the cost, you can climb either one or 2 steps
// Start from 0th step or 1st step

// int minCostWay(int step_count, vector<int> &costSteps, vector<int> &pathCost){
//     if(step_count == 1 || step_count == 0)
//         return costSteps[step_count];
    
//     if(pathCost[step_count] == -1)
//         pathCost[step_count] = costSteps[step_count] + min(minCostWay(step_count - 1, costSteps, pathCost),
//                      minCostWay(step_count - 2, costSteps, pathCost));
//         return pathCost[step_count];

//     return costSteps[step_count] + min(pathCost[step_count - 1], pathCost[step_count - 1]);
// }

int minCostWay(int step_count, vector<int> &costSteps){
    int prev1 = costSteps[1];
    int prev2 = costSteps[0];

    for(int i = 2; i < step_count; i++){
        int curr = costSteps[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }

    return min(prev1,prev2);
}

int main(){

    int n;
    cin >> n;
    vector<int> cost(n+1,0);

    for(int i = 0; i < n+1; i++){
        cin >> cost[i];
    }

    // vector<int> pathCost(n+1,-1);

    int minCost = minCostWay(n, cost);
    cout << minCost << endl;
   
}

