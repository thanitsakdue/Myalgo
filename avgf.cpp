#include <bits/stdc++.h>
using namespace std;
double memo[100] = {0};
double avg(int a[], int n)
{
	if(n == 1){
		return a[0];
	}
	else if(memo[n] !=0){
		return memo[n];
	}
	else{
		memo[n]=(avg(a, n-1)*(n-1) + a[n-1])/n;
		return  memo[n];
	}
}

int main()
{
	int data[] ={2,3,5,6};
	int size = sizeof(data)/sizeof(data[0]); 
	cout << avg(data,size);
}
