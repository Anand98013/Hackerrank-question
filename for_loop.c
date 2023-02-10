/*
Sample Input
8
11

Sample Output
eight
nine
even
odd

Task

For each integer n in the interval [a,b] (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
   
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight",  "nine", "even", "odd"};

    scanf("%d\n%d", &a, &b);
    for (int i=a; i<=b; i++) 
    {
            if (i <= 9) 
        {
                printf ("%s\n", str[i-1]);
        }
            else
        {
                printf ("%s\n", str[9+(i%2)]);
        }
        
    }
    return 0;
}
