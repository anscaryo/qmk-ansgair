#include QMK_KEYBOARD_H
#include "ansgair.h"
// TODO: condicional, al pasar al layer confg, activa el teclado numerico, al salir del mismo lo desactiva.
// TODO: ACTUALIZAR LOS COMENTARIOS DE ESTE ARCHIVO.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_wrapper(

        ____________________QWUERTY1__________________,

        ____________________QWUERTY2__________________,

        ____________________QWUERTY3__________________,

        ____________________QWUERTY4__________________),

    [_LOWER] = LAYOUT_wrapper(

        ____________________LOWER1____________________,

        ____________________LOWER2____________________,

        ____________________LOWER3____________________,

        ____________________LOWER4____________________),

    [_RAISER] = LAYOUT_wrapper(

        ____________________RAISER1___________________,

        ____________________RAISER2___________________,

        ____________________RAISER3___________________,

        ____________________RAISER4___________________),

    [_CONFIG] = LAYOUT_wrapper(

        ____________________CONFIG1___________________,

        ____________________CONFIG2___________________,

        ____________________CONFIG3___________________,

        ____________________CONFIG4___________________)};
