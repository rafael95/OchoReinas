#include "Comunicacion_serial.h"
#include <iostream>
#include <unistd.h>
#include <string>
#include <cstring>
#include <stdio.h> // standard input / output functions
#include <string.h> // string function definitions
#include <unistd.h> // UNIX standard function definitions
#include <fcntl.h> // File control definitions
#include <errno.h> // Error number definitions
#include <termios.h> // POSIX terminal control definitionss
#include <time.h>   // time calls
#include "Comunicacion_serial.h"
#include <boost/lexical_cast.hpp>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#define BAUDRATE B9600
#include "Comunicacion_serial.h"
using namespace std;
Comunicacion_serial::Comunicacion_serial()
{
    //ctor
}

Comunicacion_serial::Comunicacion_serial(const Comunicacion_serial& other)
{
    //copy ctor
}





void Comunicacion_serial::apagar(int posicion ,int reina) {
     al_init();
     al_init_image_addon();
     switch(posicion){

        case 0:
            columna=8;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 1:
            columna=9;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 2:
            columna=10;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 3:
            columna=11;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 4:
            columna=12;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 5:
            columna=13;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 6:
            columna=14;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 7:
            columna=15;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 8:
            columna=8;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 9:
            columna=9;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 10:
            columna=10;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 11:
            columna=11;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 12:
            columna=12;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 13:
            columna=13;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 14:
            columna=14;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 15:
            columna=15;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 16:
            columna=8;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 17:
            columna=9;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 18:
            columna=10;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 19:
            columna=11;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 20:
            columna=12;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 21:
            columna=13;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 22:
            columna=14;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 23:
            columna=15;
            fila=3;
                casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 24:
            columna=8;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 25:
            columna=9;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 26:
            columna=10;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 27:
            columna=11;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 28:
            columna=12;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 29:
            columna=13;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 30:
            columna=14;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 31:
            columna=15;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 32:
            columna=8;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 33:
            columna=9;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 34:
            columna=10;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 35:
            columna=11;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 36:
            columna=12;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 37:
            columna=13;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 38:
            columna=14;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 39:
            columna=15;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 40:
            columna=8;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 41:
            columna=9;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 42:
            columna=10;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 43:
            columna=11;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 44:
            columna=12;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 45:
            columna=13;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 46:
            columna=14;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 47:
            columna=15;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 48:
            columna=8;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 49:
            columna=9;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 50:
            columna=10;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 51:
            columna=11;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 52:
            columna=12;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 53:
            columna=13;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 54:
            columna=14;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
         case 55:
            columna=15;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
        case 56:
            columna=8;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 57:
            columna=9;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 58:
            columna=10;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 59:
            columna=11;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 60:
            columna=12;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 61:
            columna=13;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
        case 62:
            columna=14;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");
            break;
         case 63:
            columna=15;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
            break;
     }




    int fileDescriptor = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

    struct termios newtio;
    bzero(&newtio, sizeof(newtio));
    newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;

    // set to 8N1
    newtio.c_cflag &= ~PARENB;
    newtio.c_cflag &= ~CSTOPB;
    newtio.c_cflag &= ~CSIZE;
    newtio.c_cflag |= CS8;

    newtio.c_iflag = IGNPAR;

    // output mode to
    //newtio.c_oflag = 0;
    newtio.c_oflag |= OPOST;

    /* set input mode (non-canonical, no echo,...) */
    newtio.c_lflag = 0;

    newtio.c_cc[VTIME] = 10; /* inter-character timer 1 sec */
    newtio.c_cc[VMIN] = 0; /* blocking read disabled  */

    tcflush(fileDescriptor, TCIFLUSH);
    if (tcsetattr(fileDescriptor, TCSANOW, &newtio)) {
        perror("could not set the serial settings!");

    }
    string test = "apagar";
    al_rest(1);
    al_draw_bitmap(casilla, 56*columna, 56*fila, 0);
    al_flip_display();

    string res = test+","+boost::lexical_cast<std::string>(posicion)+","+boost::lexical_cast<std::string>(reina)+", ";
    long wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;

}










void Comunicacion_serial::encender(int posicion,int reina) {
    al_init();
    al_init_image_addon();
    switch(posicion){

        case 0:
            columna=8;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 1:
            columna=9;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 2:
            columna=10;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 3:
            columna=11;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 4:
            columna=12;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 5:
            columna=13;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 6:
            columna=14;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 7:
            columna=15;
            fila=1;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 8:
            columna=8;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 9:
            columna=9;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 10:
            columna=10;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 11:
            columna=11;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 12:
            columna=12;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 13:
            columna=13;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 14:
            columna=14;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 15:
            columna=15;
            fila=2;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 16:
            columna=8;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 17:
            columna=9;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 18:
            columna=10;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 19:
            columna=11;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 20:
            columna=12;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 21:
            columna=13;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 22:
            columna=14;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 23:
            columna=15;
            fila=3;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 24:
            columna=8;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 25:
            columna=9;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 26:
            columna=10;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 27:
            columna=11;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 28:
            columna=12;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 29:
            columna=13;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 30:
            columna=14;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 31:
            columna=15;
            fila=4;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 32:
            columna=8;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 33:
            columna=9;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 34:
            columna=10;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 35:
            columna=11;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 36:
            columna=12;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 37:
            columna=13;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 38:
            columna=14;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 39:
            columna=15;
            fila=5;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 40:
            columna=8;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 41:
            columna=9;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 42:
            columna=10;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 43:
            columna=11;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 44:
            columna=12;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 45:
            columna=13;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 46:
            columna=14;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 47:
            columna=15;
            fila=6;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 48:
            columna=8;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 49:
            columna=9;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 50:
            columna=10;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 51:
            columna=11;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 52:
            columna=12;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 53:
            columna=13;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 54:
            columna=14;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
         case 55:
            columna=15;
            fila=7;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
        case 56:
            columna=8;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 57:
            columna=9;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 58:
            columna=10;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 59:
            columna=11;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 60:
            columna=12;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 61:
            columna=13;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;
        case 62:
            columna=14;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
            break;
         case 63:
            columna=15;
            fila=8;
            casilla= al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
            break;

     }

    int fileDescriptor = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

    struct termios newtio;
    bzero(&newtio, sizeof(newtio));
    newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;

    // set to 8N1
    newtio.c_cflag &= ~PARENB;
    newtio.c_cflag &= ~CSTOPB;
    newtio.c_cflag &= ~CSIZE;
    newtio.c_cflag |= CS8;

    newtio.c_iflag = IGNPAR;

    // output mode to
    //newtio.c_oflag = 0;
    newtio.c_oflag |= OPOST;

    /* set input mode (non-canonical, no echo,...) */
    newtio.c_lflag = 0;

    newtio.c_cc[VTIME] = 10; /* inter-character timer 1 sec */
    newtio.c_cc[VMIN] = 0; /* blocking read disabled  */

    tcflush(fileDescriptor, TCIFLUSH);
    if (tcsetattr(fileDescriptor, TCSANOW, &newtio)) {
        perror("could not set the serial settings!");

    }


    string test = "encender";
    //usleep(1000000);
    al_rest(1);
    cout << columna << endl;
    cout << fila << endl;
    al_draw_bitmap(casilla, columna*56, fila*56, 0);
    al_flip_display();
    string res = test+","+boost::lexical_cast<std::string>(posicion)+","+boost::lexical_cast<std::string>(reina)+", ";
    long wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;


}


void Comunicacion_serial::inicializar(){
  al_init();
    al_init_image_addon();
  int fileDescriptor = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

    struct termios newtio;
    bzero(&newtio, sizeof(newtio));
    newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;

    // set to 8N1
    newtio.c_cflag &= ~PARENB;
    newtio.c_cflag &= ~CSTOPB;
    newtio.c_cflag &= ~CSIZE;
    newtio.c_cflag |= CS8;

    newtio.c_iflag = IGNPAR;

    // output mode to
    //newtio.c_oflag = 0;
    newtio.c_oflag |= OPOST;

    /* set input mode (non-canonical, no echo,...) */
    newtio.c_lflag = 0;

    newtio.c_cc[VTIME] = 10; /* inter-character timer 1 sec */
    newtio.c_cc[VMIN] = 0; /* blocking read disabled  */

    tcflush(fileDescriptor, TCIFLUSH);
    if (tcsetattr(fileDescriptor, TCSANOW, &newtio)) {
        perror("could not set the serial settings!");

    }

 al_rest(1);
int fila=0;
int columna=8;
bool bandera= true;
 casilla_negra1 = al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_negra.png");
    casilla_blanca1 = al_load_bitmap("/home/rafael/Documentos/8reinas/reina_2_blanca.png");
   for(int n=0; n<=63;n++){
           if (n%8==0){
            fila++;
            columna=8;
            bandera=!bandera;
            }
            if (bandera==true){

                al_draw_bitmap(casilla_blanca1, columna*56, fila*56, 0);
                 al_flip_display();
                columna++;
                bandera=false;
            }
            else{
            al_draw_bitmap(casilla_negra1, columna*56, fila*56, 0);
             al_flip_display();
            columna++;
            bandera=true;
            }
}
             string test = "encendertodo";
    //usleep(1000000);


    string res = test+","+"1"+","+"1"+", ";
    long wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;



         al_rest(1);
    fila=0;
    columna=8;
    bandera= true;
   ;
  casilla_negra = al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_negra.jpg");
    casilla_blanca = al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_blanca.jpg");

     for(int n=0; n<=63;n++){
           if (n%8==0){
            fila++;
            columna=8;
            bandera=!bandera;
            }
            if (bandera==true){

                al_draw_bitmap(casilla_blanca, columna*56, fila*56, 0);
                 al_flip_display();
                columna++;
                bandera=false;
            }
            else{ al_flip_display();
            al_draw_bitmap(casilla_negra, columna*56, fila*56, 0);
            columna++;
            bandera=true;
            }




}
            al_flip_display();




     test = "apagartodo";
    //usleep(1000000);



     res = test+","+"1"+","+"1"+", ";
     wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;




 al_rest(1);


}


void Comunicacion_serial::apagararduino() {





    int fileDescriptor = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

    struct termios newtio;
    bzero(&newtio, sizeof(newtio));
    newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;

    // set to 8N1
    newtio.c_cflag &= ~PARENB;
    newtio.c_cflag &= ~CSTOPB;
    newtio.c_cflag &= ~CSIZE;
    newtio.c_cflag |= CS8;

    newtio.c_iflag = IGNPAR;

    // output mode to
    //newtio.c_oflag = 0;
    newtio.c_oflag |= OPOST;

    /* set input mode (non-canonical, no echo,...) */
    newtio.c_lflag = 0;

    newtio.c_cc[VTIME] = 10; /* inter-character timer 1 sec */
    newtio.c_cc[VMIN] = 0; /* blocking read disabled  */

    tcflush(fileDescriptor, TCIFLUSH);
    if (tcsetattr(fileDescriptor, TCSANOW, &newtio)) {
        perror("could not set the serial settings!");

    }
    string test = "apagararduino";
  //  usleep(1000000);




    string res = test+","+"1"+","+"1"+", ";
    long wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;

}


void Comunicacion_serial::choque(int posicion,int reina) {
    al_init();
    al_init_image_addon();

    choque1= al_load_bitmap("/home/rafael/Documentos/8reinas/ficha_choque.png");
 switch(posicion){

     case 0:

        columna=8;
        fila=1;

        break;
     case 1:
        columna=9;
        fila=1;

        break;
     case 2:
        columna=10;
        fila=1;

        break;
     case 3:
        columna=11;
        fila=1;

        break;
     case 4:
        columna=12;
        fila=1;

        break;
     case 5:
        columna=13;
        fila=1;

        break;
     case 6:
        columna=14;
        fila=1;

        break;
     case 7:
        columna=15;
        fila=1;

        break;
     case 8:
        columna=8;
        fila=2;
        break;
     case 9:
        columna=9;
        fila=2;
        break;
     case 10:
        columna=10;
        fila=2;
        break;
     case 11:
        columna=11;
        fila=2;
        break;
     case 12:
        columna=12;
        fila=2;
        break;
     case 13:
        columna=13;
        fila=2;
        break;
     case 14:
        columna=14;
        fila=2;
        break;
     case 15:
        columna=15;
        fila=2;
        break;
    case 16:
        columna=8;
        fila=3;
        break;
     case 17:
        columna=9;
        fila=3;
        break;
    case 18:
        columna=10;
        fila=3;
        break;
     case 19:
        columna=11;
        fila=3;
        break;
    case 20:
        columna=12;
        fila=3;
        break;
     case 21:
        columna=13;
        fila=3;
        break;
    case 22:
        columna=14;
        fila=3;
        break;
     case 23:
        columna=15;
        fila=3;
        break;
    case 24:
        columna=8;
        fila=4;
        break;
     case 25:
        columna=9;
        fila=4;
        break;
    case 26:
        columna=10;
        fila=4;
        break;
     case 27:
        columna=11;
        fila=4;
        break;
    case 28:
        columna=12;
        fila=4;
        break;
     case 29:
        columna=13;
        fila=4;
        break;
    case 30:
        columna=14;
        fila=4;
        break;
     case 31:
        columna=15;
        fila=4;
        break;
    case 32:
        columna=8;
        fila=5;
        break;
     case 33:
        columna=9;
        fila=5;
        break;
    case 34:
        columna=10;
        fila=5;
        break;
     case 35:
        columna=11;
        fila=5;
        break;
    case 36:
        columna=12;
        fila=5;
        break;
     case 37:
        columna=13;
        fila=5;
        break;
    case 38:
        columna=14;
        fila=5;
        break;
     case 39:
        columna=15;
        fila=5;
        break;
    case 40:
        columna=8;
        fila=6;
        break;
     case 41:
        columna=9;
        fila=6;
        break;
    case 42:
        columna=10;
        fila=6;
        break;
     case 43:
        columna=11;
        fila=6;
        break;
    case 44:
        columna=12;
        fila=6;
        break;
     case 45:
        columna=13;
        fila=6;
        break;
    case 46:
        columna=14;
        fila=6;
        break;
     case 47:
        columna=15;
        fila=6;
        break;
    case 48:
        columna=8;
        fila=7;
        break;
     case 49:
        columna=9;
        fila=7;
        break;
    case 50:
        columna=10;
        fila=7;
        break;
     case 51:
        columna=11;
        fila=7;
        break;
    case 52:
        columna=12;
        fila=7;
        break;
     case 53:
        columna=13;
        fila=7;
        break;
    case 54:
        columna=14;
        fila=7;
        break;
     case 55:
        columna=15;
        fila=7;
        break;
    case 56:
        columna=8;
        fila=8;
        break;
     case 57:
        columna=9;
        fila=8;
        break;
    case 58:
        columna=10;
        fila=8;
        break;
     case 59:
        columna=11;
        fila=8;
        break;
    case 60:
        columna=12;
        fila=8;
        break;
     case 61:
        columna=13;
        fila=8;
        break;
    case 62:
        columna=14;
        fila=8;
        break;
     case 63:
        columna=15;
        fila=8;
        break;





     }

    int fileDescriptor = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

    struct termios newtio;
    bzero(&newtio, sizeof(newtio));
    newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;

    // set to 8N1
    newtio.c_cflag &= ~PARENB;
    newtio.c_cflag &= ~CSTOPB;
    newtio.c_cflag &= ~CSIZE;
    newtio.c_cflag |= CS8;

    newtio.c_iflag = IGNPAR;

    // output mode to
    //newtio.c_oflag = 0;
    newtio.c_oflag |= OPOST;

    /* set input mode (non-canonical, no echo,...) */
    newtio.c_lflag = 0;

    newtio.c_cc[VTIME] = 10; /* inter-character timer 1 sec */
    newtio.c_cc[VMIN] = 0; /* blocking read disabled  */

    tcflush(fileDescriptor, TCIFLUSH);
    if (tcsetattr(fileDescriptor, TCSANOW, &newtio)) {
        perror("could not set the serial settings!");

    }


    string test = "encender";
    //usleep(1000000);
     al_rest(1);
    cout << columna << endl;
    cout << fila << endl;
    al_draw_bitmap(choque1, columna*56, fila*56, 0);
        al_flip_display();
    string res = test+","+boost::lexical_cast<std::string>(posicion)+","+boost::lexical_cast<std::string>(reina)+", ";
    long wrote = write(fileDescriptor, res.c_str(), sizeof(char) * res.size());

    cout << res << endl;


}






