/* 
	BM_002_SingleNumber2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	vector<int> nums{ 5,5,5,3,3,3,8,8,-845,8 };
	Print(nums);
	int result = singleNumber2(nums);
	cout << "Single number II is " << result << endl;
	return 0;
}