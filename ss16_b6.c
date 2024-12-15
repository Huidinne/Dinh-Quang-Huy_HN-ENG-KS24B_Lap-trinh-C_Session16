#include <stdio.h>
int findItem(int *arr, int size, int value);

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    int value;
    printf("Nhap phan tu muon tim kiem: ");
    scanf("%d",&value);
    int index = findItem(arr, size, value);
    if (index != -1) {
        printf("%d duoc tim thay tai vi tri: %d", value, index);
    } else {
        printf("%d khong co trong mang", value);
    }
    return 0;
}
findItem(int *arr, int size, int value) {
    for (int i = 0; i < size; i++){
        if (*(arr + i) == value) {
            return i;
        }
    }
    return -1;
}

