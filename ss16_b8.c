#include <stdio.h>
#include <string.h>
void reverseString(char *chuoi, char *reverse);

int main() {
	char chuoi[50];
	char reverse[50];
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    reverseString(chuoi, reverse);
    printf("Chuoi dao nguoc: %s", reverse);
    return 0;
}
reverseString(char *chuoi, char *reverse) {
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        reverse[i] = chuoi[length - i - 1];
    }
    reverse[length] = '\0';
}
