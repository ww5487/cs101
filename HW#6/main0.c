#include <stdio.h>

int main(){
	int i = 10;
	
	if((i & i - 1) == 0){
		printf("%d is true", i);
	}else{
		printf("%d is false", i);
	} 	
	
	return 0;
}
