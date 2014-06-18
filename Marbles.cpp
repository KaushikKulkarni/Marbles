/**
*Trying out my second problem of the medium category .
**/
#include<iostream>/**For the basic input output functions .*/

using namespace std ;

long long int nCr(int n , int r)/**The main working function for the code .*/
{
	long long int Res = 1 ; 
	if ( n-r > r)/**Trying to reduce the number of steps .*/
	{
		r = n -r ;
	}
	for ( int i = r+1 ; i <= n ; i++)
	{
		Res = Res * i ;
	}
	for ( int i =1 ; i <= n-r ; i++)
	{
		Res = Res / i ;
	}
	return Res ;
}

int main()
{
	int n ;
	int k ;
	int r ;
	cout << "Enter the number of test cases .\n" ;
	scanf("%d",&r) ;
	for(int i = 1 ; i <= r ; i++)
	{
		cout << "Enter n \n" ;
		scanf("%d",&n);
		cout << "Enter k \n" ;
		scanf("%d",&k);
		printf("%d \n",nCr(n-1,k-1)) ;	/**Printing out the results .*/
	}
}

