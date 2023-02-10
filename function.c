/*
Sample Input
3
4
6
5

Sample Output
6

Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note
There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format
Input will contain four integers - a,b,c,d, one on each line.

Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.
*/


#include <stdio.h>
int max_of_four(int,int,int,int);

int max_of_four(int a,int b,int c,int d)
{
    int gre;
    if(a>b && a >c && a >d)
        gre = a;
    else if(b>a && b>c && b>d)
        gre = b;
    else if(c>a && c>b && c>d)
        gre = c;
    else if(d>a && d>b && d>c)
        gre = d;
    else if(a=b=c=d)
        gre = a;
return gre;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
