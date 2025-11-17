#include <stdio.h>
#include <math.h>
void insertNumber(int *array,int *size){
	printf("Nhap phan tu mang:");
	scanf("%d",size);
	for(int i=0;i<*size;i++){
		printf("Number[%d]:",i);
		scanf("%d",&array[i]);
	}
}
void evenNumber(int *array,int *size){
	int i;
	printf("cac phan tu la so chan trong mang la:");
	for(i=0;i<*size;i++){
	if (array[i]%2==0){
		printf("%d\t",array[i]);
	}
	}
}
int isPrime(int size){
	for(int i=2;i<=sqrt(size);i++){
		if(size % i==0){
			return 0;
		}
	}
	return 1;
}
int elementNumber (int *array,int *size){
	int *p;
	printf("cac so nguyen to trong mang:");
	for(int i=0;i<*size;i++){
		if(isPrime(array[i]))
		printf("%d\t",array[i]);
	}
}
void reverseArray(int *array,int *size){
	int left =0;
	int right = *size-1;
	int temp;
	while (left<right){
		temp = array[left];
		array[left] = array[right];
		array[right] = temp;
		left++;
		right--;
	}
}
void arrayIncrease(int *array,int *size){
	int temp;
	int i,j;
	for(i=0;i<*size;i++){
		for(j=i;j<*size;j++){
			if (array[j]<array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("mang sau khi sap xep la:");
	for (int i=0;i<*size;i++){
		printf("%d",array[i]);
	}
}
void arrayDecrease(int *array,int *size){
		int temp;
	int i,j;
	for(i=0;i<*size;i++){
		for(j=i;j<*size;j++){
			if (array[j]>array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("mang sau khi sap xep la: ");
	for (int i=0;i<*size;i++){
		printf(" %d ",array[i]);
	}
}
void search(int *array,int *size){
	int valuesearch;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&valuesearch);
	for(int i=0;i<*size;i++){
		if (array[i]==valuesearch){
			printf("so %d duoc tim thay o vi tri %d",valuesearch,i);
			break;
		}else {
			printf("Khong tim thay gia tri %d",valuesearch);
		}
	}
}
int main (){
	int choice=0;
	int array[100];
	int size;
	int sortchoice;
	do {
		printf("\n=====================MENU=====================");
		printf("\n1.Nhap phan tu");
		printf("\n2.in cac phan tu la so chan");
		printf("\n3.in cac phan tu la so nguyen to");
		printf("\n4.Dao nguoc mang");
		printf("\n5.Sap xep mang");
		printf("\n6.tim kiem phan tu");
		printf("\n7.thoat chuong trinh");
		printf("\nLua chon cua ban:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:{
				insertNumber(array,&size);
				break;
			}
			case 2:{
				evenNumber(array,&size);
				break;
			}
			case 3:{
				elementNumber(array,&size);
				break;
			}
			case 4:{
				reverseArray(array,&size);
				for(int i =0;i<size;i++){
					printf("%d",array[i]);
				}
				break;
			}
			case 5:{
				printf("\n1.Tang dan");
				printf("\n2.giam dan");
				printf("chon cach sap xep :");
				scanf("%d",&sortchoice);
				switch (sortchoice){
					case 1:{
						arrayIncrease(array,&size);
						break;
					}
					case 2:{
						arrayDecrease(array,&size);
						break;
					}
				}
				break;
			}
			case 6:{
				search(array,&size);
				break;
			}
			case 7:{
				printf("tam biet");
				return 0;
				break;
			}
			default:{
				printf("khong hop le,vui long nhap tu 1-7");
				break;
			}
		}
	}while (1);
}
