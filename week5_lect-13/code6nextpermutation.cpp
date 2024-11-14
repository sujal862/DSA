#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextp(vector<int> &nums)
{
    int n = nums.size();
    // 1)finding pivot index (jis element ko change krna ha to get output)
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    { // if array is already the greatest(last) one
        reverse(nums.begin(), nums.end());
        return;
    }
    // 2) sorting(using reverse)elements after pivot index
    reverse(nums.begin() + idx + 1, nums.end());
    // 3)finding just greater value than idx
    int j = -1;
    for (int i = idx + 1; i < n; i++)
    {
        if (nums[i] > nums[idx])
        {
            j = i;
            break;
        }
    }
    // 4) swapping idx and j;
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nextp(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}