#include <stdio.h>
void changeItem(int *arr, int size, int newValue, int index);

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(int);
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int newValue = 5;
    int index = 4;
    changeItem(arr, size, newValue, index);
    printf("Mang sau khi doi:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
changeItem(int *arr, int size, int newValue, int index) {
    if (index < 0 || index >= size) {
        printf("Vi tri %d khong hop le.\n", index);
        return;
    }
    arr[index] = newValue;
}

