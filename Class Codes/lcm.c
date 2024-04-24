#include<stdio.h>
//with using recursions, and without using recursions
/*
int lcm_num(int m, int n) {
    static int lcm = 1;    
    if(lcm%m == 0 && lcm%n == 0)
    {
        return lcm;
    }
    else
    {
        lcm++;
        lcm_num(m,n);
        return lcm;
    }
}


int main() 
{
   	int m,n;
	printf("enter 2 numbers to find its lcm\n");
	scanf("%d%d",&m,&n);
    	printf("L.C.M of %d and %d is %d.", m, n, lcm_num(m, n));
    	return 0;
}
*/

/*
int lcm_num(int m,int n)
{
	int lcm=1;
	for(int i=2;i<=m ||i<=n;)
	{
		if(m%i==0 && n%i==0)
		{
			lcm=lcm*i;
			m=m/i;
			n=n/i;
		}
		else if(m%i==0)
		{
			lcm=lcm*i;
			m=m/i;
		}
		else if(n%i==0)
		{
			lcm=lcm*i;
			n=n/i;
		}
		else
			i++;
	}
	return lcm;
}

int main()
{
	int m,n;
	printf("enter 2 numbers to find its lcm\n");
	scanf("%d%d",&m,&n);
	int lcm=lcm_num(m,n);
	printf("lcm=%d\n",lcm);
	return 0;
}
*/

/*
int main()
{
	int m,n;
	printf("enter 2 numbers to find its lcm\n");
	scanf("%d%d",&m,&n);
	int min = (m<n) ? m : n;
	int hcf=1;
   	for(int i=1; i<=min; i++)
    	{
        	if(m%i==0 && n%i==0)
        	{
            		hcf = i;
        	}
    	}
    	lcm=(m*n)/hcf;
    	printf(" LCM of %d and %d = %d\n", m, n, lcm);
	return 0;
}
*/

