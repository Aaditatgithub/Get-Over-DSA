#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &nums, const int target){

    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size() - 2; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums.size() - 1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == target){
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while(left < right && nums[left] == nums[left - 1]) left++;
                while(left < right && nums[right] == nums[right + 1]) right--;
            }
            else if(sum < target) ++left;
            else --right;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {12, 3, 6, 1, 6, 9};
    int target = 24;

    vector<vector<int>> triplets = findTriplets(nums, target);
    for(const vector<int> &triplet: triplets){
        cout << "( ";
        for(int num: triplet){
            cout << num << " ";
        }
        cout << " )" << endl; 
    }
}