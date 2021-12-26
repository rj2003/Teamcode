#include<stdio.h>
void Swap(int, int);
int main()
{
 int a=10, b=20;
 printf("\n Before swap: a=%d and b=%d", a, b);
 Swap(a, b);
 return 0;
}

void Swap(int a, int b)
{
 int t;
 t=a;
 a=b;
 b=t;
 printf("\n After swapping a=%d and b=%d", a, b);
}
