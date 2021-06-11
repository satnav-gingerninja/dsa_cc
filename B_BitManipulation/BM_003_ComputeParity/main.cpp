/* 	
	BM003 - Compute Parity of a number using the XOR method
*/

#include "Common.h"

using namespace std;

bool computeParity(int n) {
	n ^= n >> 16;
	n ^= n >> 8;
	n ^= n >> 4;
	n ^= n >> 2;
	n ^= n >> 1;
	return n & 1;
}
int main()
{
	int n = 2;	
	if (computeParity(n))
		cout << "Parity of n=" << n << " is odd\n";
	else
		cout << "Parity of n=" << n << " is even\n";
	return 0;
}