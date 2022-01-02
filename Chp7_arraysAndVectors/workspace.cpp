#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    for(int i = 0; i < 10; i++)
    {
        nums.push_back(i + 1);
    };
    for(int val : nums)
    {
        cout << nums[val];
    };
   return 0;
}