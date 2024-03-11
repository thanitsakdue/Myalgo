#include <bits/stdc++.h>
int memo[100];
int s=1 ;
using namespace std;
int path(int m , int n)
{
	
	
	if (m == 0 || n==0)
	{
//		s++;
		return 0;
	}
	else
	{
		s++;
		return path(m-1,n) + path(m,n-1);	
	}
	
	
	
	
	
}


int main(){
	int m,n;
	cin >> m >> n;
	path(m-1,n-1);
	cout <<s;

}
