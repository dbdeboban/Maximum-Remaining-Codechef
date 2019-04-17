#include <stdio.h>
int main()
{
    long long int n,max=0,secondMax=0,cur;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&cur);
		if(cur > max)
		    {
		        secondMax=max;
		        max=cur;
		    }
		else if(cur>secondMax && cur!=max)
		    secondMax=cur;
	}
	printf("%lld\n",secondMax);
    return 0;
}
