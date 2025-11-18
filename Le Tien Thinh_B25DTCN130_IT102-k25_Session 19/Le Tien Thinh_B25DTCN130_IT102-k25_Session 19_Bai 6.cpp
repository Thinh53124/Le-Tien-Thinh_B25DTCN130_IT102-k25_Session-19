#include <stdio.h>
void copyArray(int  *firstarray,int *secondarray,int *size){
	for(int i=0;i<*size;i++){
		secondarray[i] = firstarray[i];	
}
}
int main () {
	int firstarray[100];
	int secondarray[100];
	int i;
	int size;
	printf("nhap phan tu mang :");
	scanf("%d",&size);
	for (int i=0;i<size;i++){
	printf("Number[%d]:",i);
	scanf("%d",&firstarray[i]);
	}
	copyArray(firstarray,secondarray,&size);
	printf("Mang thu hai sau khi duoc copy la:\n");
	for(i=0;i<size;i++){
	printf(" %d ",secondarray[i]);
	}
}

