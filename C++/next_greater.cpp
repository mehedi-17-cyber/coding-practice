#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> next_greater(vector<int>& nums) {
    stack<int> waiting;
    vector<int> result(nums.size(),-1);
    for(int i = 0; i < nums.size(); i++) {
        while(!waiting.empty() && nums[waiting.top()] < nums[i]) {
            result[waiting.top()] = nums[i];
            waiting.pop();
        }    
        waiting.push(i);
    }
    return result;
}        

int main()
{
    vector<int> nums = {4,5,2,25};
    for(int i : next_greater(nums)) {
        cout << i << " ";
    }
        
    return 0;
}