#include <stdio.h>

int main() {
    int n = 7;
    int spc = n;
    
    for(int i=1; i<=n; i++){
        for(int k=1; k<=spc+i; k++){
            if(k<=spc){
                printf(" ");
            }
            else{
                printf("%d ", i);
            }
        }
        printf("\n");
        spc--;
    }
}
