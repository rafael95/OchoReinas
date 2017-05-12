#include "Algoritmo_backtraking.h"
#include <bits/stdc++.h>
#include "Comunicacion_serial.h"
using namespace std;
Algoritmo_backtraking::Algoritmo_backtraking()
{
    //ctor
}
bool Algoritmo_backtraking::isSafe(char mat[][8], int r, int c)
{
        bool bandera=true;
    // return false if two queens share the same column
        controlar_matriz.encender((r*8)+c,1);
        for (int i = 0; i < r; i++){
            if (mat[i][c] == 'Q'){
            for(int y=0;y<=2;y++){
            for(int z=i+1;z<r;z++){
                controlar_matriz.choque(z*8+c,1);
            }
            for(int z=i+1;z<r;z++){
                controlar_matriz.apagar(z*8+c,1);
            }

            }
            controlar_matriz.apagar((r*8)+c,1);
            bandera= false;
            }
        }



    // return false if two queens share the same \ diagonal
        for (int i = r, j = c; i >= 0 && j >= 0; i--, j--){
            if (mat[i][j] == 'Q'){



             for(int y=0;y<=2;y++){

            for(int z=i-1, v=j-1;z>0&&v>0;z--,v--){
                controlar_matriz.choque(v*8+z,1);
            }
            for(int z=i-1, v=j-1;z>0&&v>0;z--,v--){
                controlar_matriz.apagar(v*8+z,1);
            }

            }







            bandera= false;
            }
        }

    // return false if two queens share the same / diagonal
        for (int i = r, j = c; i >= 0 && j < 8; i--, j++){
            if (mat[i][j] == 'Q'){

             for(int y=0;y<=2;y++){
               for(int z=i-1, v=j-1;z>0&&v<8;z--,v++){
                controlar_matriz.choque(z*8+v,1);
            }
            for(int z=i-1, v=j-1;z>0&&v<8;z--,v++){
                controlar_matriz.apagar(z*8+v,1);
            }

            }
            bandera= false;
            }
        }
        if (bandera==false){
        controlar_matriz.apagar((r*8)+c,1);

         return false;
        }
        else{
        return true;
        }
}

void Algoritmo_backtraking::nQueen(char mat[][8], int r, int c)
{
    // if N queens are placed successfully, print the solution
    if (c == 0 && r == 8)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        for (int n=0;n<2;n++){
        al_rest(3);
        controlar_matriz.inicializar();
        al_rest(3);
        controlar_matriz.apagararduino();

        }
        return;
    }

    // place Queen at every square in current row r
    // and recurse for each valid movement
    for (int i = 0; i < 8; i++)
    {

        // if no two queens threaten each other
        if (isSafe(mat, r, i))
        {
            // place queen on current square

            mat[r][i] = 'Q';
            controlar_matriz.encender((r*8)+i,1);
            // recurse for next row
            nQueen(mat, r + 1, 0);
            // backtrack and remove queen from current square
            mat[r][i] = '-';
            al_rest(3);




        }
    }
}
