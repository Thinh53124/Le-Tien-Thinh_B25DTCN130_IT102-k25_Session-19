#include <stdio.h>

void findMax(int *arr, int n){
    int max = arr[0];
    int i;
    for(i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d", max);
}

int main(){
    int arr[100] = {1, 2, 36, 7, 8, 9, 11};
    int n = 7;
    findMax(arr, n);
}

