// No arquivo data.cpp

#include "data.h"

Data::Data() {
  dia = 1;
  mes = 1;
  ano = 1;
}

Data::Data(int dd, int mm, int aa) {
  setData(dd, mm, aa);
}

void Data::setData(int dd, int mm, int aa) {
  if (dd > 0 && dd <= 31)
    dia = dd;
  else
    dia = 1;

  if (mm > 0 && mm <= 12)
    mes = mm;
  else
    mes = 1;

  if (aa > 0 && aa < 2023)
    ano = aa;
  else
    ano = 1;
}

void Data::print() const {
  cout << dia << "/" << mes << "/" << ano << endl;
}

void Data::addDias(int num) {
  dia += num;
}

int Data::getDia() const {
  return dia;
}

int Data::getMes() const {
  return mes;
}

int Data::getAno() const {
  return ano;
}

Data Data::operator+(int numDias) const {
  Data result = *this;
  result.addDias(numDias);
  return result;
}

Data Data::operator-(const Data& outraData) {
  // Implementação para calcular a diferença entre duas datas
}

ostream& operator<<(ostream& os, const Data& data) {
  os << data.getDia() << "/" << data.getMes() << "/" << data.getAno();
  return os;
}
