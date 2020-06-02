#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100];
    char s1[200];   
      scanf("%c%*c", &ch);
    scanf("%s%*c", &s);
    scanf("%[^\n]%*c", &s1);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",s1);
    return 0;
}