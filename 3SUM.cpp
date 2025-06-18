#include <bits/stdc++.h>
using namespace std;

bool threeSum(vector<int>& nums, int target) {
    int n = nums.size();

    vector<tuple<int, int, int>> pairSums;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = nums[i] + nums[j];
            pairSums.push_back({sum, i, j});
        }
    }

    for (auto [sum, i, j] : pairSums) {
        for (int k = 0; k < n; k++) {
            if (k != i && k != j && sum + nums[k] == target) {
                cout << "Triplet: " << nums[i] << ", " << nums[j] << ", " << nums[k] << endl;
                return true;
            }
        }
    }

    return false;
}

int main() {
    vector<int> nums = {2, -1, 1, 4, -2, 3};
    int target = 5;

    if (threeSum(nums, target)) {
        cout << "Triplet found." << endl;
    } else {
        cout << "No triplet found." << endl;
    }

    return 0;
}
