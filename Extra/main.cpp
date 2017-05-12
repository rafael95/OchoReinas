// Tutorial de programación de juegos en C++ y Allegro 5
#include "Algoritmo_backtraking.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "Comunicacion_serial.h"
ALLEGRO_DISPLAY *display;
ALLEGRO_EVENT_QUEUE *event_queue;
ALLEGRO_TIMER *timer;
ALLEGRO_BITMAP *mi_sprite;
ALLEGRO_BITMAP *casilla_blanca;
ALLEGRO_BITMAP *casilla_negra;

int main()
{

bool bandera= true;
int fila=0;
int columna=8;
    al_init();
    al_init_image_addon();

    display = al_create_display(1100, 600);



     mi_sprite = al_load_bitmap("/home/rafael/Documentos/8reinas/fondo.jpg");
     casilla_negra = al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
     casilla_blanca = al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
    al_draw_bitmap(mi_sprite, 0, 0, 0);
     for(int n=0; n<=63;n++){
           if (n%8==0){
            fila++;
            columna=8;
            bandera=!bandera;
            }
            if (bandera==true){

                al_draw_bitmap(casilla_blanca, columna*56, fila*56, 0);
                columna++;
                bandera=false;
            }
            else{
            al_draw_bitmap(casilla_negra, columna*56, fila*56, 0);
            columna++;
            bandera=true;
            }




}
            al_flip_display();
             al_rest(10.0);


 char mat[8][8];

//    initalize mat[][] by '-'
     memset(mat, '-', sizeof mat);
    Algoritmo_backtraking ocho_reinas;
    ocho_reinas.nQueen(mat,0,0);
 //   nQueen(mat, 0, 0);






//Comunicacion_serial controlar_matriz;

//for (int n=0;n<2;n++){

 //   controlar_matriz.inicializar();
 //    al_rest(3);
  //      controlar_matriz.encender(n,1);
//}
   //for (int n=63;n>=0;n--){

     //   controlar_matriz.apagar(n,1);
 //}
   al_rest(10.0);

    al_destroy_display(display);
    al_destroy_bitmap(mi_sprite);


}
