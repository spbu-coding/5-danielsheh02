#include <stdio.h>

void other()
{
    printf("Congratulations, you've entered the secret function. \n");
    fflush(stdout);
}

void input()
{
    char buffer[20];
    printf("Enter text! \n");
    fflush(stdout);
    scanf("%s",buffer);
    printf("You entered: %s\n",buffer);
    fflush(stdout);
}

int main()
{
	printf("%p \n", other);
	fflush(stdout);
    input();
    printf("You failed to get into the secret function.");
    fflush(stdout);
    return 0;
}

