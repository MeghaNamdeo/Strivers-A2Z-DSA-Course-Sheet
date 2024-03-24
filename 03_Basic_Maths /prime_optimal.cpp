bool isPrime(int n)
{
	int c = 0 ;
    //running the for loop from 2 to the square root of the number 
    //because repetition ocuure so if we ruN square root of n then only we get all the factor 
    //every factor was the other corresponding number which in order to multiply to get the number 

    for(int i = 1 ; i*i<=n ; i++)
	{
		if(n%i==0)
		{
			c++;
			if(n/i!=i)
			c++;
		}

	}
	if(c==2)
	return true;
	else
	return false;
}
time complexity = O(sqrt(n))