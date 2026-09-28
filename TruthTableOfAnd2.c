#include <stdio.h>
int main(){
    printf("A  B  A&B\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  %d  %d\n",i,j,i&j);
            }}
    
    return 0;
        }