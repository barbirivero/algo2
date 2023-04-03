#include <iostream>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    Fecha(uint mes,uint dia);
    uint mes();
    uint dia();

    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif

  private:
    uint mes_;
    uint dia_;
};

Fecha::Fecha(uint mes, uint dia) : mes_(mes), dia_(dia) {}
/*
Fecha::Fecha(int mes, int dia): mes_(mes), dia_(dia) {};
*/

uint Fecha::mes(){
    return mes_;
}

uint Fecha::dia(){
    return dia_;
}

#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_fecha = this->dia() == o.dia() && this->mes() == o.mes();
    return igual_fecha;
}
#endif

ostream& operator<<(ostream& os, Fecha f) {
    os << f.dia()<< "/" <<f.mes();
    return os;
}

// Ejercicio 11, 12

// Clase Horario


// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda

