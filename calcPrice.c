#include <stdio.h>

int main(){

int item;
double unit;
int quant;
char date[12];

printf("Enter item number: ");
scanf("%d", &item);
printf("Enter unit price: ");
scanf("%lf", &unit);
printf("Enter quantity: ");
scanf("%d", &quant);
printf("Enter purchase date (mm/dd/yyy): ");
scanf("%s", date);

printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal\tAmount\n");
printf("%d\t$%9.21lf\t&d\t%s\t$%9.21lf\n\n", item, unit, quant, date, unit*quant);

return 0;

}
