 #include<stdio.h>
 
int gcdCalc(int x, int y)
{
	if(y==0)
		return x;
	else
	  return gcdCalc(y, x%y);
	
}
int main()
{
	int gcd, t;
    int  length, breadth;
	scanf("%d", &t);
	while(t--)
	{
        scanf("%d %d", &length, &breadth);
        gcd = gcdCalc(length, breadth);
        printf("%d\n", (length/gcd) * (breadth/gcd));
	}
	return 0;
}  