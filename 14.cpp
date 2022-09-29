#include <stdio.h>
 

int main(void){
	int x,y; 
	int bool_value;
	
	x = 5; 
	y = 6; 
	
	bool_value = ( x < 5 && y < 10 );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x > 1 && y > 3 );
	printf(" x < y ==> %d \n ",bool_value);	
}
