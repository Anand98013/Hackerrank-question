/*
Sample Input
10 4
4.0 2.0

Sample Output
14 6
6.0 2.0
When we sum the integers 10 and 4, we get the integer 14. When we subtract the second number 4 from the first number 10, we get 6 as their difference.
When we sum the floating-point numbers 4.0 and 2.0, we get 6.0. When we subtract the second number 2.0 from the first number 4.0, we get 2.0 as their difference.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int a,b;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("%d %d\n%.1f %.1f",(a+b),(a-b),(c+d),(c-d));    
    return 0;
}
