#include <stdio.h>
#include <math.h>
int main(){

printf("enter customer ID:");
char customerID[50];
scanf("%s", customerID);
printf("enter customer name:");
char customername[50];
scanf("%s",customername);
printf("enter units consumed:");
float unit consumed;
scanf("%f", &unitconsumed);

float chargesperunit;
if(unit consumed<=100){
    chargesperunit=1.5;
}else if(unitconsumed<=200){
    chargesperunit=1.8;
}chargesperunit=2.0;
}
float totalbill=unitconsumed*chargesperunit;

if(totalbill>400){
    float surcharge=totalbill*0.15;
    totalbill+=surcharge;
}
if(totalbill,100){
    totalbill=100;
}
printf("\nelectricitybill\n-----\n");
printf("customer ID:%s\n", customerID);
printf("customer name:%s\n", customername);
printf("units consumed:%2f\n", unitconsumed);
printf("charges per unit:%2f\n", chargesperunit);
printf("total amount to pay:%2f\n", totalbill);
}
return 0;
}



	return 0;
}