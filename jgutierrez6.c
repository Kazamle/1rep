
/*
Juan Gutierrez
csc-251
lab #6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x=0,y=0,z=0,i;
	//printf("Enter a Seed \n");
	//scanf("%d", &y);
	srand(time(NULL));

	for (i = 0; i <= 10; i++)
	{
		x = rand()%30;
		x = x+50;
		printf("z=%d y=%d x=%d \n", z,y,x);
	}

	return EXIT_SUCCESS;
}
