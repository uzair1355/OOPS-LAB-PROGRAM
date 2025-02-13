 
 #include <stdio.h>
 #include <stdlib.h>
int main(){

float days1,month1,year1;

float days,month,year ;
printf("enter them 1st date :\n");
scanf("%f%f%f",&days,&month,&year);
printf("%f %f %f\n",days,month,year);

printf("enter them 2st date :\n");
scanf("%f%f%f",&days1,&month1,&year1);

printf("%f %f %f\n",days1,month1,year1);



float daycounter1=0;

for(int i=1;i<=month;i++)
{
    daycounter1++;

}
 float M1D= daycounter1*30.41666666666667;

printf("%f\n",M1D);

float daycounter2=0;

for(int j=1;j<=month1;j++)
{
    daycounter2++;

}
 float M2D = daycounter2*30.41666666666667;
printf("%f\n",M2D);

float MTD = M1D + M2D;


float  yeardiff = year - year1;
float yeardaycounter = yeardiff*365;






    // Manual method to make it positive
    if ( yeardaycounter< 0) {
   yeardaycounter = -yeardaycounter;
    }

    printf("The positive value is: %f\n", yeardaycounter);

  



float totaldiff = yeardaycounter + MTD;

printf("the days between these two dates are : %.2f \n",totaldiff);




}




