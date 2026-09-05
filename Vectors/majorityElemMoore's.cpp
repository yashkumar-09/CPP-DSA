#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> nums){
    int freq=0, ans=0, n=nums.size();
    for(int i=0; i<n; i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {3, 2, 2, 1, 1, 3, 3, 2, 3};
    cout<<majorityElement(nums);
}