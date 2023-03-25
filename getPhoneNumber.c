#include<stdio.h>
int main(){
char phone[13];

printf("Enter a phone number in the form (999) 999-9999");
scanf("%s",phone);

char formatPhone[12];

int i;
for (i=1; i<13; i++){
if(i!=4)
formatPhone[i]=phone[i-1];
else
formatPhone[i]=')';
}

printf("You entered %s",formatPhone);
return 0;
}
