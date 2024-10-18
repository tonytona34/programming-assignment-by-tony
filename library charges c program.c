//calculate library charges using c program :Author Tony
#include <stdio.h>
int main() {
int book ID,due date and return date, days overdue, fine rate, fine amount;
printf("enter book ID:");
scanf("%d", &bookID);
printf("enter the due date(in format YYYYMMDD):");
scanf("%d", &duedate);
printf("enter the return date(in format YYYYMMDD):");
scanf("%d", &returndate);

days overdue= return date-due date;

if(days over due<=7){
    fine rate=50;
}else f(days overdue<=14){
    fine rate=100;
}else if(days overdue<=21){
    fine rate=200;
}else{
    fine rate;
}

fine amount=days overdue *fine rate;

printf("\nbook ID:%d\n", book ID);
printf("due date:%d\n", due date);
printf("return date:%d\n", return date);
printf("days overdue:%d\n", days overdue);
printf("fine rate:%d\n", fine rate);
printf("fine amount:%d\n", fine amount);

	return 0;
}