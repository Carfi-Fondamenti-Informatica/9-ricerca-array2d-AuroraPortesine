#include <iostream>
#include "lib.h"
using namespace std;


void init(char nomi[10][20]){
    for (int j=0;j<20; j++){
        for (int i=0; i<10; i++){
            nomi[i][j]=' ';
        }
    }
}

void init1(char nome[20]){
    for (int i=0; i<20; i++){
        nome[i]=' ';
    }
}

void ins (char nomi[10][20]){
    for(int i=0; i<10; i++){
        char c[20];
        init1(c);
        cin >> c;
        for (int j=0; j<20; j++){
            nomi[i][j]=c[j];
        }
    }
}

void ins1 (char nome[20]){
    cin >> nome;
}

int main() {
    char nomi[10][20];
    char nome[20];
    init(nomi);
    init1(nome);
    ins (nomi);
    ins1(nome);
    if (posizione(nomi,nome)==-1){
        cout << "non presente";
        }else{
        cout << posizione (nomi, nome);
    }
    return 0;
}
