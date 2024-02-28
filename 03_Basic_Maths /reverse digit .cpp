#include<iostream>
using namespace std;

long long int reverse(int n)
{
	long long int rev = 0 ;
	while( n > 0)
	{
		int last_digit = n % 10;
		rev = rev * 10 + last_digit;
		n = n / 10;
	}
	return rev;
}
int main ()
{
	int n ; 
	cin>>n;
	long long int reversedNumber = reverse(n);

    cout  << reversedNumber << endl;

}