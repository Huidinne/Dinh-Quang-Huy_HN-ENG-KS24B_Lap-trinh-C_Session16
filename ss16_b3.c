#include <stdio.h>
int sum(int a, int b, int *result);

int main() {
    int num1 = 4, num2 =3 ;
    int result;
    sum(num1, num2, &result);
    printf("%d + %d = %d\n", num1, num2, result);
    return 0;
}
sum(int a, int b, int *result){
    *result = a + b;
}
