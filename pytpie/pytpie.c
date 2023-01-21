#include <stdio.h>

int main ()
{
    float remainder [100], pie= 100, percentage = 0.01, share [100];

    for (int x=0; x<pie; ++x)
    {
        if(x==0) //the first iteration has to set the first remainder of the pie. So, I have decided to put the first iteration as an if statement//
        {
            share[x]=pie*percentage; //the first share of the pie is the entire pie multiplied by the given percentage of 0.01//

            remainder[x]=pie-share[x]; // the first share of the pie has to be subtracted from the whole pie//

            printf("person %d gets: %.9f\n", x+1, share[x]); //the first person gets this many pies//
        }
        
        else //from second iteration on, the algorithm is like so: //
        {
            share[x]=remainder[x-1] * (percentage * (x+1)); //to evaluate the current share://
            //multiply the previous remaining pie with the current person's percentage of shares//

            remainder[x]=remainder[x-1]- share[x]; 
            //to evaluate the current remaining pie: subtract the previous remainder and the current share//

            printf("person %d gets: %.9f\n", x+1, share[x]); //print the current share//
        }
    }
    return 0;
}