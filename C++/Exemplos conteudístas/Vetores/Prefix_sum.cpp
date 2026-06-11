#include <iostream>
#include <vector>

std::vector<int> prefix_sum(const std::vector<int>& nums) {
    std::vector<int> prefix(nums.size());
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        prefix[i] = sum;
    }

    return prefix;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums[i] = num;
    }

    prefix_sum(nums);

    return 0;
}