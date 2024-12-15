#include <stdio.h>
int swap(int *x, int *y) {
    int temp = *x; 
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("gia tri cua a truoc = %d\n",a);
	printf("gia tri cua b truoc = %d\n",b);
	swap(&a,&b);
	printf("gia tri cua a sau = %d\n",a);
	printf("gia tri cua b sau = %d\n",b);
    return 0;
}

