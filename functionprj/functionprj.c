#include <stdio.h>

int gcd (int a, int b)  
{
    if (a==0)
    {
    printf("The gcd is: %d\n",b);
    return b;
    }
    
    else if (b==0)
    {
    printf("The gcd is: %d\n",a);
    return a;
    }

    while(b!=0 || a!=0)
        {
            if (a > b)
            {
            a %= b;
                if (a ==0)
                {
                printf("The gcd is: %d\n",b);
                return b;
                }
            }

           else if (b > a)
            {
            b %= a;
                if (b ==0)
                {
                printf("The gcd is: %d\n",a);
                return a;
                }
            }

            else if (a==b)
            {
            printf("The gcd is: %d\n",a);
            return a;
            }
        }
return b;
}

float absv (float a)
{  
    if (a<0)
    {
        a=(a*-1);
        printf("Absolute value is:%.3f\n",a);
        return a;
    }
printf("Absolute value is:%.3f\n",a);
return a;
}

float sqroot (float a)
{
    if(a<0)
    {
        printf("imaginary number\n");
        return 0;
    }
    return a;
}
int main ()
{
    int a,b;
    float c;
    printf("Enter the two numbers you want to find the gcd of (has to be integers):\n");
    scanf("%d%d",&a,&b);
    gcd (a,b);

    a=0,b=0;
    printf("enter the number u want the absolute value of:\n");
    scanf("%f",&c);
    absv (c);
    return 0;
}