#include <stdio.h>
#define MAX 100
int main(void){
	FILE *file;
	file = fopen("c_test.txt","w");
	float r = 1.50;
	float x = 0.7;
	float list[MAX];
	for(int i = 0; i<MAX; i++){
		list[i] = x; 
		fprintf(file,"%.3f",list[i]); 
		fprintf(file,"\n");
		x = r * (1 - x) * x; 
	}
	fclose(file); 
	printf("終了しました");
	return 0;
}