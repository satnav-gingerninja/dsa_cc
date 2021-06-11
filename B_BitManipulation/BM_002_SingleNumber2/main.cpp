/* 	
	LC137 - SingleNumber2 https://leetcode.com/problems/single-number-ii/
*/

#include "Common.h"

using namespace std;

int singleNumber2(vector<int>& nums) {
	int result = 0;
	for (int i = 0; i < 32; i++)
	{
		int count = 0;
		for (auto n : nums)
		{
			if (n & (1 << i))
				count++;
		}
		if (count % 3)
		{			
			result |= (1 << i);
		}
	}
	return result;
}
int main()
{
	vector<int> nums{ 0,1,2,0,1,2,0,1,2,3 };
	Print(nums);	
	int result = singleNumber2(nums);
	cout << "Single number II is " << result << endl;
	return 0;
}