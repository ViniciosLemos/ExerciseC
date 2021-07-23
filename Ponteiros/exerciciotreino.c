#include <stdio.h>
int main (){
	int a, b, *p1, *p2;
	a = 4;
	b = 3;
	p1 = &a;
	p2 = p1;
	*p2 = *p1 + 3;
	b = b * (*p1);
	(*p2)++;
	p1 = &b;
	
	printf("%d %d\n", *p1, *p2);
	printf("%d %d\n", a, b);	
}

a = 4                    p1 =21
                         p2 = 8
b = 3                    a = 8
p1 = 4                  b = 21
p2 = 4
p2 = 4 + 3 = 7
b = 3 * 4 = 12
p2 = 8



