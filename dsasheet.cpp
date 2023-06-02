//two sum 
/*#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int first=0; first<nums.size(); first++)
        {
            for(int second= first+1; second<nums.size(); second++)
            {
                if(nums [first] + nums [second]== target)
                {
                return {first,second};
                }
            }

        }
       return {}; 
    }
    
};

int main() 
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    if (result.empty()) 
    {
        cout << "No solution found:";
    } 
    
    else 
    {
        cout << "Indices: " << result[0] << ", " << result[1];
    }

    return 0;
}*/
//Best Time to Buy and Sell Stock
/*#include<bits/stdc++.h>
using namespace std;



class Solution
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        if (n == 0)
            return 0;
        
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < n; i++) 
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            } 
            else 
            {
                int currentProfit = prices[i] - minPrice;
                maxProfit = max(maxProfit, currentProfit);
            }
        }
        
        return maxProfit;
    }
};


 ;
int main() 
{
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = solution.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}*/
//move zeoes
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        int nonZeroIndex = 0;

        // Move all non-zero elements to the front of the array
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] != 0) 
            {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // Fill the remaining elements with zeros
        for (int i = nonZeroIndex; i < n; i++) 
        {
            nums[i] = 0;
        }
    }
};

int main() 
{
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original Array: ";
    for (int num : nums) 
    {
        cout << num << " ";
    }
    cout << endl;

    solution.moveZeroes(nums);

    cout << "Modified Array: ";
    for (int num : nums) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
