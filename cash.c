//Program to ask the user how much change and print the minimum number of coins with which that change can be made

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
// Declare variables
    float dollars;
    int cents;
    int coins = 0;
    

// Create a loop to reject negative values    
    do 
 {
    dollars = get_float("Change owed: ");
    {
        if (dollars <= 0)
       {
       printf("Change owed: foo\n");
       }
    }
 }
    while (dollars <= 0);

// Convert dollars into cents and round to int

    (cents = round(dollars * 100));

// Create a loop to find optimal / greedy least number of coins
   {
    while (cents >= 25)    
    {
      cents -= 25;
      coins++;
    }
    while (cents >= 10)
    {
      cents -= 10;
      coins++;
    }
    while (cents >= 5)
    {
      cents -= 5;
      coins++;
    }
    while (cents >= 1)
    {
      cents -= 1;
      coins++;
    }
        printf(" %i\n", coins);
   }
        
} 
