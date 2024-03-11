#include <bits/stdc++.h>
using namespace std;
int memo[100]= {0};
int g(int n)
{
	if (n ==0)
	{
		return 0;
	}
	else if ( n==1 || n==2)
	{
		return 1;
	}
	else if(memo[n] !=0)
	{
		return memo[n];
	}
	else 
	{
		memo[n]=g(n-1) +g(n-2) - g(n-3);
		return memo[n];
	}
	
}

int main(){
cout << g(7);	
}
