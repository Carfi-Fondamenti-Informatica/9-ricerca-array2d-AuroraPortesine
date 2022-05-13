#include "lib.h"

int posizione(char nomi[10][20], char nome[20]){
    for(int i=0;i<10; i++){
        int j=0;
        int count=0;
        for (j=0;j<20;j++){
            if(nomi[i][j]==nome[j]){
                count++;
            }
        }if (count==20){
            return i;
        }
    }
    return -1;
}
