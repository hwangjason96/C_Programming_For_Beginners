#include <stdio.h>

int main ()
{
    enum weekday {monday=1, tuesday, wednesday, thursday, friday, saturday, sunday};
    enum weekday today;
    printf("what day is it today?:\n mon=1 tues=2 wed=3 thur=4 fri=5 sat=6 sun=7\n");
    scanf("%i", &today);
    
    switch(today)
    {
        case sunday:
        printf("Today is Sunday.\n");
        break;

        case monday:
        printf("Today is Monday.\n");
        break;

        case tuesday:
        printf("Today is Tuesday.\n");
        break;

        case wednesday:
        printf("Today is Wednesday.\n");
        break;

        case thursday:
        printf("Today is Thursday.\n");
        break;

        case friday:
        printf("Today is Friday.\n");
        break;

        case saturday:
        printf("Today is Saturday.\n");
        break;

        default:
        printf("Why tho\n");
        break;
    }

    printf("\n Alright, I get it, switch cases can be used for enums... but what about arithmetics? Make a calculator.\n");

    float v1,v2,ans,exp,cons;
    char op;
    printf("Input a number, a +, -, /, *, or ^, and another number.\n");
    printf("FOR EXAMPLE: 6+7\n");
    scanf("%f%c%f",&v1,&op,&v2);

    switch(op)
    {
        case '+':
        ans=v1+v2;
        printf("This equals: %.3f\n",ans);
        break;

        case '-':
        ans=v1-v2;
        printf("This equals: %.3f\n",ans);
        break;

        case '/':
        
        if (v2 == 0)
        {
            printf("You dummy, can't divide by zero man!\n");
        }
        else
        {
            ans=v1/v2;
            printf("This equals: %.7f\n",ans);
        }
        break;

        case '*':
        ans=v1*v2;
        printf("This equals: %.3f\n",ans);
        break;

        case '^':

        if(v2>0)
        {
            for (exp = v2-1 ;exp > 0; --exp)

                if(exp == v2-1)
                {
                cons=v1;
                v1*=v1;
                }
                else
                    {
                    v1*=cons;
                    }
        ans=v1;
        printf("This equals: %.3f\n",ans);
        }
        
        if (v2==0)
        {
            printf("This equals: 0 \n");
        }

        if (v2<0)
        {
        printf("can't do negative exponents... sorry!");
        }
        
        break;

        default:
        printf("I am still a stupid code, I can't calculate what you wrote.\n");

        break;
    }

    return 0;

}