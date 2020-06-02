#include<stdio.h>
#include<conio.h>
int main() {
int n;
clrscr();
scanf("%d",&n);
int m=2*n-1;
int start=0;
int end=m-1;
int a[100][100];
while(n!=0){
for(int i=start;i<=end;i++){
for(int j=start;j<=end;j++){

if(i==start ||i==end ||j==start|| j==end)

a[i][j]=n;
}
}
start++;
end--;
n--;
}
start=0;
end=m-1;
for(int i=0;i<=end;i++){
for(int j=0;j<=end;j++){

printf("%d",a[i][j]);
}
printf("\n");
}
return -1;
}