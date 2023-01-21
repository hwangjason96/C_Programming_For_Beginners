#include <stdio.h>

#define years 5
#define months 12

int main ()
{
    float weather[years][months] ={
        {3.2 , 3.3 , 6.2 , 10.8 , 12.8 , 16.2 , 18.3 , 15.3 , 14.8 , 12.5, 10.2 ,  4.8},
        {3.8 , 4.0 , 9.2 , 13.2 , 15   , 18   , 19.2 , 13.3 , 12.2 , 10.2 , 5.5 ,  4.3},
        {3.6 , 5.0 , 11  , 11.2 , 12.2 , 18.7 , 19   , 18.2 , 17.1 , 15.8 , 13.3 , 5.0},
        {4.7 , 4.7 , 7.2 , 11   , 14.3 , 15.2 , 17.2 , 15.2 , 9.8  , 7.5 , 5.2  ,  4  },
        {5.2 , 5.9 , 8.2 , 10.8 , 12.2 , 14.5 , 17.5 , 15.3 , 15.9  , 13.7 , 12,  8.7 }
    };
    float avgm[months]={0},avgy[years]={0};
    printf("\nWelcome to the weather Channel:\nwhere we show you the last 5 years of rainfall for no apparent reason.\n");
    printf("Susie, What was rain like for the last five years?\n");
    printf("Susie: Well brian, the average rain fall for each year seems to be:\n\n");

    for (int y=0; y<years; y++) //5 outputs//
    {
        for (int m=0; m<months ;m++)
        {
            avgy[y] += weather[y][m];
        }
        avgy[y] /= months;
        printf("%i\t",2011+y);
        printf("%.3f\n",avgy[y]);
    }
    
    printf("\nLike so, and the average rainfall for each month for the past five years seems:\n");
    printf("January   Februrary March     April      May        June       July       August     September  October    November  December\n");
    for(int m2=0; m2<months; m2++) //12 outputs//
    {
        for (int y2=0;y2<years;y2++)
        {
            avgm[m2]+=weather[y2][m2];
        }
        avgm[m2] /= years;
        printf("%.3f     ",avgm[m2]);
    }
    printf("\n");
    return 0;
    /*The key thing to remember was that the outerloop decides how many outputs you are able to present with printf.
    I had a past understanding that the innerloop will ultimately print, but that was not the case.
    Another lesson to be learned is continuously trying to compile with each line after the for loop.
    When entering a non-entered territory, remember to hold your ego and try to compile as much as possible.*/
}