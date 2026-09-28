#include <iterator>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> sum(2);

        bool encountered = false;

        for (int i = 0; i < std::size(nums); i++) {
            for (int j = i + 1; j < std::size(nums); j++) {
                if (nums[i]+nums[j] == target) {
                   sum[0] = i;
                   sum[1] = j;

                   encountered = true;
                }
            }

            if (encountered == true) {
                break;
            }
        }

        return sum;
    }
};