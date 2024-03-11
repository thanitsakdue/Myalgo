#include <bits/stdc++.h>
using namespace std;
int memo[100] = {};
double avg(int a[], int n)
{
	if(n == 1){
		return a[0];
	}
//	else if(memo[n] !=0){
//		return memo[n];
//	}
	else{
		return (avg(a, n-1)*(n-1) + a[n-1])/n;;
	}
}
//int fsum(int a[],int n)
//{
//	int sum;
//		for(int i =0 ;i<n ;i++){
//		sum+= a[i];
//	}
//	return sum;
//}
//
//double b_avg(int a[], int n){
//	int sum;
//	sum =fsum(a,n);
//	memo[0]=sum;    xbarold*n-1   +xnew /n
//	
//}

int main()
{
	int data[] ={2,3,5,6};
	int size = sizeof(data)/sizeof(data[0]);  //n*xbarn + xn  /n+1
	double avg =data[0];
	for (int i=1;i<size;i++)
	{
		avg=(i*avg+data[i])/(i+1) ;
	}
	cout<<avg;
//	cout<<avg(data,size);
}
