#include <stdio.h>

void update(int *a,int *b) {
    int *sum;
    int*diff;
    *sum=(*a)+(*b);
    *diff=abs((*a)-(*b));
    printf("%d",*sum);
    printf("\n%d",*diff);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
   // printf("%d\n%d", su, b);

    return 0;
}
