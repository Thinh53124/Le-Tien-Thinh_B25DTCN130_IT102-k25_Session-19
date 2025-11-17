#include <stdio.h>
void insertNumber (int *array,int *size){
	printf("nhap phan tu mang:");
	scanf("%d",size);
	for (int i=0; i<*size;i++){
		printf("Number[%d]:",i);
		scanf("%d",&array[i]);
	}
}
void printNumber (int *array,int *size){
	for(int i=0;i<*size;i++){
		printf("%d ",array[i]);
	}
}
void lenghtOfArray(int *array,int *size){
	printf("do dai cua mang la: %d ",*size);
}
void sumArray(int *array,int *size){
	int sum =0;
	for (int i =0;i<*size;i++){
		sum += array[i];
	}
	printf("tong cua cac phan tu trong mang: %d",sum);
}
void maxArray(int *array,int *size){
	int max;
	max = array[0];
	for(int i=0;i<*size;i++){
		if (max<array[i]){
			max = array[i];
		}
	}
	printf("so lon nhat trong mang la: %d",max);
}
int main () {
	int choice=0;
	int sum;
	int size;
	int array [100];
	do {
		printf("\n=====================MENU=====================\n");
		printf("\n1.Nhap phan tu ");
		printf("\n2.Hien thi cac phan tu");
		printf("\n3.Tinh do dai cua mang");
		printf("\n4.Tong cua cac phan tu trong mang");
		printf("\n5.Hien thi phan tu lon nhat");
		printf("\n6.thoat");
		printf("\nLua chon cua ban:");
		scanf("%d",&choice);
		switch (choice) {
			case 1:{
				insertNumber(array,&size);
				break;
			}
			case 2:{
				printNumber(array,&size);
				break;
			}
			case 3:{
				lenghtOfArray(array,&size);
				break;
			}
			case 4:{
				sumArray(array,&size);
				break;
			}
			case 5:{
				maxArray(array,&size);
				break;
			}
			case 6:{
				printf("thoat chuong trinh");
				return 0;
				break;
			}
			default:{
				printf("vui long nhap tu 1-6");
				break;
			}
		}
	}while (1);
}
