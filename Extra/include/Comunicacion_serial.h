#ifndef COMUNICACION_SERIAL_H
#define COMUNICACION_SERIAL_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <string>
#include <cstring>

using namespace std;
class Comunicacion_serial
{
    public:
        Comunicacion_serial();
        Comunicacion_serial(const Comunicacion_serial& other);
  void  encender (int posicion ,int reina);
  void  apagar   (int posicion ,int reina);
   void  apagararduino   ();
   void choque(int posicion,int reina);
  void  inicializar ();
    protected:
    private:
    ALLEGRO_BITMAP *casilla;
    ALLEGRO_BITMAP *casilla1;
    ALLEGRO_BITMAP *choque1;
    int fila;
    int columna;
   ALLEGRO_BITMAP *casilla_negra;
   ALLEGRO_BITMAP *casilla_blanca;
      ALLEGRO_BITMAP *casilla_negra1;
   ALLEGRO_BITMAP *casilla_blanca1;
};

#endif // COMUNICACION_SERIAL_H

