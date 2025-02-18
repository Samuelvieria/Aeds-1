// No arquivo hora.h

#ifndef Hora_h
#define Hora_h

#include <iostream>

class Hora {
private:
  int hora;
  int minuto;
  int segundo;

public:
  Hora();
  Hora(int, int, int);
  void setHorario(int, int, int);
  void adicionarHorario(const Hora&);
  int getHora() const;
  int getMinuto() const;
  int getSegundo() const;

  Hora operator+(const Hora&) const;
  Hora operator-(const Hora&) const;
  friend std::ostream& operator<<(std::ostream&, const Hora&);
};

#endif
