
long long  Armstrong(long long   n){
	long long sum = 0;
	while(n > 0)
	{
		long long last_dig  = n % 10;
		sum = sum + (last_dig*last_dig*last_dig);
		n = n / 10;
		
	
	}
	return sum ;
}
bool checkArmstrong(int n)
{
	return (n ==Armstrong(n)); 
}

