//pattern question
#include<stdio.h>
int patt(int r, char t, char l){

    if(l=='u'){
        for(int i=r; i>=0; i--){
            for (int j=0; j<i; j++){
                printf("%c",t);
            }  
            printf("\n");
        }
    }
}

int main(){
    int r,c;
    patt(4,'*','u');


}