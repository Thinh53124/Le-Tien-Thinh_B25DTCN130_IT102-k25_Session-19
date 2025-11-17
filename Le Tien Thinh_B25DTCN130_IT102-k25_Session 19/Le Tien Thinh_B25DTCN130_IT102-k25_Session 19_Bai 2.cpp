#include <stdio.h>

void insertElement(int *arr, int *n){
    int i;
    printf("Nhap so phan tu n: ");
    scanf("%d", n);

    for(i = 0; i < *n; i++){
        printf("number[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void countEvenOdd(int *arr, int n, int *even, int *odd){
    int i;
    *even = 0;
    *odd = 0;

    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            (*even)++;
        } else {
            (*odd)++;
        }
    }

    printf("So phan tu chan: %d\n", *even);
    printf("So phan tu le: %d\n", *odd);
}

int main(){
    int n;
    int arr[100];
    int even, odd;

    insertElement(arr, &n);
    countEvenOdd(arr, n, &even, &odd);

    return 0;
}


