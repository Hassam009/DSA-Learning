//KADANE'S ALGORITHM

#include <iostream>
using namespace std;
#include <climits>
#include <vector>

int main() {
vector<int> nums = {2,1,-3,4,-1,2,1,-5,4};
int currSum=0, maxSum=INT_MIN;
for(int val: nums){
currSum +=val;
maxSum=max(currSum, maxSum);
if(currSum<0){
currSum=0;
}
}
cout<<"The sum is "<<maxSum<<endl;
 return 0;
}



//FIND Maximum sum and indces

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int, pair<int, int>> maxSubarraySumWithIndices(const vector<int>& nums) {
    int currSum = 0, maxSum = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];

        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        if (currSum < 0) {
            currSum = 0;
            tempStart = i + 1;
        }
    }

    return {maxSum, {start, end}};
}

int main() {
    vector<int> nums = {1, 2, 3,-8, -2, 5};
    auto result = maxSubarraySumWithIndices(nums);

    cout << "Maximum Sum: " << result.first << endl;
    cout << "Indices: (" << result.second.first << ", " << result.second.second << ")" << endl;

    return 0;
}



