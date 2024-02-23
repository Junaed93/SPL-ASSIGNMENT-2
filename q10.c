#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, j;
    scanf("%d", &n);

    int mid = n / 2;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i >= mid){
                if(i == mid || j == mid){
                    printf("$");
                }else if(abs(i - j) == mid || i + j == n - 1 + mid){
                    printf("$");
                }else{
                    printf("_");
                }
            }else{
                if(i == mid || j == mid){
                    printf("$");
                }else if(abs(i - j) == mid || i + j == mid){
                    printf("$");
                }else{
                    printf("_");
                }
            }
        }
        printf("\n");
    }

}