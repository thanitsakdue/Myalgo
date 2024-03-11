#include <bits/stdc++.h>
using namespace std;
int memo[100]= {0};
int f(int n,int k,int memo[])
{
	if(n>=k){
	if (n ==k ||  k==0 ||  k==1)
	{
		return 1;
	}
	else if ( memo[n] !=0)
	{
		return memo[n];
	}
	else 
	{
		memo[n]=f(n-1,k,memo) +f(n-1,k-2,memo);
		return memo[n];
	}
}

}

int main(){
cout << f(6,4,memo);
}
