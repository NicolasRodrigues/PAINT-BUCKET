#include <iostream>
#include <stdlib.h>
#include "pilha.h"

using namespace std;

int main()
{
    int opc, x, y, xi, yi;
    Pilhaon<int> p;

    char matriz[5][5]{{'X','O','X', 'X', 'O'},{'X','X','X', 'O', 'O'}, {'O','X','O', 'O', 'O'}, {'X','O','O', 'O', 'O'}, {'O', 'O', 'O','O','O'}};
    cout<<"  ";
    for (xi = 0; xi < 5; xi++){
        cout<<xi<< " ";
    }

    for (xi = 0; xi < 5; xi++){
            cout<<""<<endl;
        for (yi = 0; yi < 5; yi++){
            if (yi == 0){
                cout<<xi<<" "<<matriz[xi][yi]<<" ";
            }
            else if (yi < 5){
                cout<<matriz[xi][yi]<<" ";
            } else {
                cout<<matriz[xi][yi]<<endl;
            }
        }
    }//endfor

    cout<<""<<endl;
    cout<<""<<endl;
    do {
    cout<<"Digite qual linha quer pintar: ";
    cin>>x;
    if ((x<0) || (x>4)){
        cout<<"ERRO"<<endl;
    }
    } while ((x < 0) || (x>4));
    do {
    cout<<"Digite qual coluna quer pintar: ";
    cin>>y;
     if ((y<0) || (y>4)){
        cout<<"ERRO"<<endl;
    }
    } while ((y < 0) || (y>4));
    if (matriz[x][y] == 'X'){
        cout<<"ESSA POSICAO ESTA PREENCHIDA!"<<endl;
    }
    else{
        p.empilha(x);
        p.empilha(y);
    }
    while (p.pilhavazia() == false){
        y = p.elementotop();
        p.desempilha();
        x = p.elementotop();
        p.desempilha();
        matriz[x][y] = 'X';
        if (x+1 < 5){
                if (matriz[x+1][y] == 'O'){
                p.empilha(x+1);
                p.empilha(y);
            }
        }
        if (x-1 >= 0){
            if (matriz[x-1][y] == 'O'){
                p.empilha(x-1);
                p.empilha(y);
            }
        }
        if (y+1 < 5){
            if (matriz[x][y+1] == 'O'){
                p.empilha(x);
                p.empilha(y+1);
            }
        }
        if (y-1 >= 0){
            if (matriz[x][y-1] == 'O'){
                p.empilha(x);
                p.empilha(y-1);
            }
        }






    }

    cout<<"  ";
    for (xi = 0; xi < 5; xi++){
        cout<<xi<< " ";
    }

    for (xi = 0; xi < 5; xi++){
            cout<<""<<endl;
        for (yi = 0; yi < 5; yi++){
            if (yi == 0){
                cout<<xi<<" "<<matriz[xi][yi]<<" ";
            }
            else if (yi < 5){
                cout<<matriz[xi][yi]<<" ";
            } else {
                cout<<matriz[xi][yi]<<endl;
            }
        }
    }//endfor


}
