#include <stdio.h>

int main() {
   	int mang[5]= {1 , 4, 5, 10, 9};
   	int soChan = 0;
   	printf("Cac so chan trong mang la : \n ");
   	for(int i = 0;i < 5;i++){
   		if(mang[i] % 2 == 0){
   			printf("%d ", mang[i]);
   			soChan = 1 ;
		   }
	   }
	   if(!soChan){
	   	printf("Mang khong chua so chan ");
	   }
    printf("\n");
    return 0;
}

