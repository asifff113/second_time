#include<stdio.h>
long long int sum=0;
long long int factorial(int number)
{
if(number != 0)
return number*factorial(number-1);
else return 1;
}
long long int ncr(int n , int r)
{
     return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    long long int n,r,in,arr[25],k=0;
    scanf("%lld",&in);
    for(int i=2;i<100;i++)
    {
        if(i==2 || i==3 || i==5 || i==7 || (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0))
        {
            arr[k]=i;
            k++;
        }
    }
    for(int i=0;i<in;i++)
    {
      r=arr[i];
      n=arr[i+1];
      sum+= ncr(n,r);
    }
    printf("%lld",sum);
}
