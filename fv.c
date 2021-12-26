#include<math.h>
#include<stdio.h>
int main()
{
float fv, rate, years, cashflow;

//prompt user for cashflowc
do
{
printf("Enter cashflow: ");
scanf("%f", &cashflow);
}
while ( cashflow <= 0);

// Ask user for rate of return
do
{
printf("Enter rate of return: ");
scanf("%f", &rate);
}
while( rate <= 0 || rate < 1);

//Ask user for period of investment
do
{
printf("Enter period in years: ");
scanf("%f", &years);
}
while(years < 1);

//calculate the future value

fv = cashflow * (pow((1 + rate / 100), years));

printf("Future Value is: %f\n", fv);

return 0;
}