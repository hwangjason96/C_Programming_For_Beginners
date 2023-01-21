#include <stdio.h>

int main()
{
    float workhour,netpay,grosspay,tax;

    printf("\nAnother humbug workday... Alright, step in here worker,\nyou wanna get paid, don't ya?\n");
    printf("How long have you worked?\n");
    scanf("%f", &workhour);
    printf("\nAlright... %.2fhours... Let's see here...\n",workhour);

    if (workhour > 40)
    {
        grosspay = (40*12)+(((workhour-40)*1.5)*12);
    }
    else
    grosspay = (workhour*12);


    if (grosspay <= 300)
    {
        tax = (grosspay*0.15);
        netpay = grosspay-tax;
        printf("Ok, Here is your money:%.2f\n",netpay);
    }

    else

    
        if (grosspay <= 450 && grosspay > 300 )
        {
            tax = ((300*0.15)+((grosspay-300)*0.2));
            netpay = grosspay-tax;
            printf("Ok, Here is your money:%.2f\n",netpay);
        }
    
        else

            {
                    tax = ((300*0.15)+(150*0.2)+(grosspay-450)*0.25);
                    netpay = grosspay-tax;
                    printf("Ok, Here is your money:%.2f\n",netpay);
            }

                
    printf("\nWait... that doesn't look right... Let's see your data.\n");
    printf("Net Pay:%.2f\nGross Pay:%.2f\nTaxes Exempted from pay:%.2f",netpay,grosspay,tax);
    printf("\n Oh, nevermind, it's them old eyes... haha... good luck friend\n\n");

    return 0;
}