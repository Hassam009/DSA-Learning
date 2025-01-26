// PAIR SUM BRUTE FORCE APROACH

#include <iostream>
using namespace std;
#include <vector>

vector<int> pairSum(vector<int> nums, int target){
vector <int> ans;
int n=nums.size();
for(int i=0;i<n; i++){
for(int j=i+1; j<n;j++){
if(nums[i]+nums[j]==target){
ans.push_back(i);
ans.push_back(j);
return ans;
}
}
}
return ans;
}

int main() {
vector<int> nums={2,4,5,6};
int target=11;

vector<int>ans=pairSum(nums, target);
 if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
    } else {
        cout << "No pair found that adds up to the target." << endl;
    }
  return 0;
}




//MEDIUM QUESTION WITH OPTIMAL SOLUTION IT GIVES INDEXES AND VALUE
// AND ALSO PASS VALUE WITHOU REFERENCE BY USING PAIR



#include <iostream>
#include <vector>
#include <utility> // For pair
using namespace std;

pair<vector<int>, pair<int, int>> pairSum(vector<int> nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if (pairSum < target) {
            i++;
        } else if (pairSum > target) {
            j--;
        } else {
            // Return indices and actual numbers
            return {{i, j}, {nums[i], nums[j]}};
        }
    }

    return {{}, {-1, -1}}; // No pair found
}

int main() {
    vector<int> nums = {2, 4, 5, 6};
    int target = 11;

    auto result = pairSum(nums, target);
    vector<int> indices = result.first;
    pair<int, int> numbers = result.second;

    if (!indices.empty()) {
        cout << "Indices: " << indices[0] << " and " << indices[1] << endl;
        cout << "Actual Numbers are " << numbers.first << " and " << numbers.second << endl;
    } else {
        cout << "No pair found that adds up to the target." << endl;
    }

    return 0;
}

