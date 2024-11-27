#include<stdio.h>
int main(){
	int mang[5] = {1, 2, 3, 4, 5};
	int max = mang[0];
	int min = mang[0];
	printf("Cac phan tu trong mang la: 1 , 2, 3, 4, 5 \n");
	for(int i = 1;i < 5;i++){
		if(mang[i]>max){
			max = mang[i];
		}
		if(mang[i]<min){
			min = mang[i];
		}
	}
	printf("Phan tu lon nhat la : %d \n", max);
	printf("Phan tu be nhat la : %d \n", min);
	return 0;

}
