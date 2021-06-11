/* 
	LC136 - SingleNumber https://leetcode.com/problems/single-number/	
*/

#include "Common.h"

using namespace std;

int singleNumber(vector<int>& nums) {
	int result{};
	for (auto e : nums)
	{
		result = result ^ e;
	}
	return result;
}
int main()
{
	vector<int> nums{ 4,4,2,2,1,1,3 };
	Print(nums);
	int result = singleNumber(nums);
	cout << "Single number is " << result << endl;
	return 0;
}