#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int alto_;
        int ancho_;

};

Rectangulo::Rectangulo(uint alto, uint ancho) : alto_(alto), ancho_(ancho) {};

uint Rectangulo::alto() {
    return alto_;
}

uint Rectangulo::ancho() {
    return ancho_;
}

float Rectangulo::area() {
    return alto_ * ancho_ ;
}

// Ejercicio 2
float PI = 3.14;

class Elipse {
    public:
        Elipse(uint r_a , uint r_b);
        uint r_a();
        uint r_b();
        float area();
    private:
        int radio_a_;
        int radio_b_;

};

Elipse::Elipse(uint radio_a, uint radio_b): radio_a_(radio_a), radio_b_(radio_b) {};

uint Elipse::r_a() {
    return radio_a_;
}
uint Elipse::r_b() {
    return radio_b_;
}

float Elipse::area() {
    return PI * radio_a_ * radio_b_;
}

// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo r_;
};

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {};

uint Cuadrado::lado() {
    return r_.alto();
}

float Cuadrado::area() {
    return r_alto() * r_alto();
}

// Ejercicio 4
class Circulo {
    public:
        Circulo(uint radio);
        uint radio();
        float area();
    private:
        Elipse e_;
}

Circulo::Circulo(uint radio) : e_(radio, radio) {};

uint Circulo::radio() {
    return e_.r_a();
}

float Circulo::area() {
    return e_.area();
}


// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.ancho() << ", " << r.alto() << ")";
    return os;
}

ostream& operator<<(ostream& os, Elipse e) {
    os << "Elip(" << e.r_a() << ", " << e.r_b() << ")";
    return os;
}

// Ejercicio 6

ostream& operator<<(ostream& os, Cuadrado cua) {
    os << "Cua(" << cua.lado() << ")";
    return os;
}

ostream& operator<<(ostream& os, Circulo cir) {
    os << "Cir(" << cir.radio() << ")";
    return os;
}
