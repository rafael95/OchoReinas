#ifndef ALGORITMO_BACKTRAKING_H
#define ALGORITMO_BACKTRAKING_H
#include <bits/stdc++.h>
#include "Comunicacion_serial.h"
using namespace std;

class Algoritmo_backtraking
{
    public:
        Algoritmo_backtraking();
        void nQueen(char mat[][8], int r, int c);
        bool isSafe(char mat[][8], int r, int c);
    protected:
    private:
    int pos;
    Comunicacion_serial controlar_matriz;
};

#endif // ALGORITMO_BACKTRAKING_H
