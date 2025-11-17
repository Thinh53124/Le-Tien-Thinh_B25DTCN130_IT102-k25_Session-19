#include <stdio.h>
void countValue(int *array,int *size,int *x){
	printf("Gia tri muon dem:");
	scanf("%d",(&*x));
	int count =0;
	for(int i=0;i<*size;i++){
		if (array[i]==*x){
			count++;
		}
	}
	printf("so %d xuat hien %d lan",*x,count);
}
int main () {
	int array[100];
	int size;
	int count;
	int x;
		printf("nhap phan tu mang:");
	scanf("%d",&size);
	for (int i=0;i<size;i++){
		printf("Array[%d]:",i);
		scanf("%d",&array[i]);
	}
	countValue(array,&size,&x);
}
