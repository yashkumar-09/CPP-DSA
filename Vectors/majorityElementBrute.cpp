#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int elem : nums){
            if(elem==val){
                freq++;
            }
        }
        if(freq>(n/2)){
            return val;
        }
    }
    return 0;
}
int main(){
    vector<int> nums = {2, 2, 1, 1, 2};
    cout<<majorityElement(nums);
    return 0;
}