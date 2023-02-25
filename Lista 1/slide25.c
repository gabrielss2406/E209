#include <stdio.h>

void main(void) {
	
	unsigned int j=0;
	int i;
	
	for(i=0; i<10; i++){
		j++;
	}
	
	printf("%d", j);
	
	j=0;
	for(i=5; i>0; i--)
		j++;
	
	printf("\n%d", j);
}