/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Comment before main()
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	char *ch = argv[1];
	int flag = 1;
	while(*ch!='\0'){
		if(!(*ch>=48 && *ch<=57)){
			flag = -1;
			break;
		}	
		ch++;		
	}
	if(flag==1){
		int input = atoi(argv[1]);
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	}
	else{
		printf("Input is an invalid number\n");	
	}
	printf("End of program. Exiting.\n");
	return(0);

} // end main
