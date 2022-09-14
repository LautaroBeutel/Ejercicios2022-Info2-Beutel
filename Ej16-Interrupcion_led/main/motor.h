#ifndef _MOTOR_H_
#define _MOTOR_H_

#include <Arduino.h>

class motor_pap{
  public:
    //motor_pap();
    motor_pap(int pin_a, int pin_b, int pin_c, int pin_d);
    void init();
    void una_bobina(bool direccion, int tiempo);
    void dos_bobina(bool direccion, int tiempo);
    void medio_paso(bool direccion, int tiempo);
  private:
    int bobina_A, bobina_B, bobina_C , bobina_D;
};

#endif
