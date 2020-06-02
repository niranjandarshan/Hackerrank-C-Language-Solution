#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    if(a==1)
    return 1;
    if(b==2);
    return 2;
    if(c==3)
    return 3;
    else 
    (n-1)+find_nth_term(n-2,a,b,c );
    
  //Write your code here.
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
