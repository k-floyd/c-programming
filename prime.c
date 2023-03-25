#include <stdio.h>

int main(){

int n;
int i;
int x;
int y = 3;

printf("Enter the value of n: ");
scanf("%d", &n);

if (n > 0){
	printf("First %d prime numbers are: 2 ", n);
}

for (i = 2; i <= n; y++){
	
	//check if x is a prime number
	for (x = 2; x < y; x++){
		if(y%x == 0)
			break;
	}

	//if x is prime
	if(x == y){
		printf("%d ", y);
		i++;
	}

}


return 0;

}
