#include <stdio.h>

int compareArrays(int *a, int *b, int *size){
	for(int i =0;i < *size; i++){
		if(*(a+i) != *(b+i)){
			return 0;
		}
	}
	return 1;	
}

int main(){
	int a[100],b[100];
	int size=sizeof(a)/sizeof(b[0]);
	int i;
	printf("Nhap vao mang a: ");
	scanf("%d",&size);
	for(i = 0;i<size;i++){
		printf("so thu %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("nhap phan tu mang b:");
	scanf("%d",&size);
	for (i=0;i<size;i++){
	printf("Array[%d]:",i);
	scanf("%d",&b[i]);
	}
	compareArrays(a,b,&size);
	int result = compareArrays(a,b,&size);
	if(result == 1){
		printf("Hai mang giong nhau");
	}else{
		printf("Hai mang khac nhau");
	}
}
