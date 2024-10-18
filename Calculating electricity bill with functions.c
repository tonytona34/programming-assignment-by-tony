#include <stdio.h>

float calculate-charges(int units){
    if(units<=199)
    return units*1.20;
    else if(units>=200 && unts<400)
    return units*1.50;
    else if(units>=400 && units<600)
    return units*1.80;
    else
    return units*2.00;
}
float calculate total bill(int units){
    float charges=calculate charges(units);
    
    if(charges>400)
    charges+=charges*0.15;
    
    if(charges<100)
    charges=100
    
    return charges;
}
int main(){
    int customerID, units consumed;
    char customername[50];
    float total bill;
    
    printf("enter custimerID:");
    scanf("%d", &customerID);
    printf("enter customer name:");
    scanf("%s", customername);
    printf("enter units consumed:");
    scanf("%d", &unitsconsumed);
    
    total bill=calculate total bill(units consumed);
    
    printf("\n----electricitybill----\n");
    printf("customer ID:%d\n", customerID);
    printf("customer name:%s\n", customername);
    printf("units consumed:%d\n", unitsconsumed);
    printf("total amount to pay:ksh.%2f\n", totalbill);
    
	return 0;
}