#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase or upper case
 * 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase();
	int uppercase();
	int Qcase[];
	void trya();
	printf("Case choice: u for upper case & l for lower:");
	scanf("%d", Qcase);
	
	if(Qcase = '0')
	{
	    //display uppercase letters
	    printf("You have choosen upper cases: \n");
	    uppercase();
	}
	else if(Qcase = '1')
	{
	    //display lower case
	    printf("you have choosen lower case: \n");
	    lowercase();
	}
	else
	{
	    //repeats if input is wrong
	    printf("you have choosen the wrong case try again \n");
	    putchar('\n');
	    trya();
	}
	putchar('\n');
	

	
	return 0;
}
//upper case function 
int uppercase(int num1)
{
    //start from uppercase 
     int letter = 'A';
	    while(letter <= 'Z')
	    {
	        putchar(letter);
	        letter++;
	    }
}
//lower case function
int lowercase(int num1)
{
    int u = 'a';
	    while (u <= 'z')
	    {
	        putchar(u);
	        u++;
	    }
}
void trya()
{
    main();
}
