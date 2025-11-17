#include <stdio.h>

float average(int *arr, int *size){
    int sum = 0;
    for (int i = 0; i < *size; i++){
        sum += arr[i];
    }
    float avg = (float)sum / (*size);
    printf("Trung binh cua mang la: %.1f\n", avg);
    return avg;
}

int main () {
    int array[100];
    int size;

    printf("Nhap so phan tu mang: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    average(array, &size);

    return 0;
}

