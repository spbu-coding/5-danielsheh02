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
    return 0;
}

