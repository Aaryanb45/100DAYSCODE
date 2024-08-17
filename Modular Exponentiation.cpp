Problem statement
You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.


solution:
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int result=1;
	while(n>0)
	{
		if(n&1)//odd number
		{
			//TYPE CASTED INTO FLOAT SO THAT IT WONT OVERFLOW;
			result=( 1LL * (result) * (x)%m)%m; 


		}
		x=( 1LL * (x)%m * (x)%m)%m;
		n=n>>1; // divide by 2 using left shift

	}
	return result;
}
