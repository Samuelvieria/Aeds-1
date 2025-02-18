// No arquivo hora.cpp

#include "hora.h"

Hora::Hora() {
  hora = 0;
  minuto = 0;
  segundo = 0;
}

Hora::Hora(int hh, int mm, int ss) {
  setHorario(hh, mm, ss);
}

void Hora::setHorario(int hh, int mm, int ss) {
  if (hh >= 0 && hh < 24)
    hora = hh;
  else
    hora = 0;

  if (mm >= 0 && mm < 60)
    minuto = mm;
  else
    minuto = 0;

  if (ss >= 0 && ss < 60)
    segundo = ss;
  else
    segundo = 0;
}

void Hora::adicionarHorario(const Hora& outroHorario) {
  hora += outroHorario.hora;
  minuto += outroHorario.minuto;
  segundo += outroHorario.segundo;

  if (segundo >= 60) {
    segundo -= 60;
    minuto++;
  }
  if (minuto >= 60) {
    minuto -= 60;
    hora++;
  }
  if (hora >= 24) {
    hora -= 24;
  }
}

int Hora::getHora() const {
  return hora;
}

int Hora::getMinuto() const {
  return minuto;
}

int Hora::getSegundo() const {
  return segundo;
}

Hora Hora::operator+(const Hora& outroHorario) const {
  Hora resultado = *this;
  resultado.adicionarHorario(outroHorario);
  return resultado;
}

Hora Hora::operator-(const Hora& outroHorario) const {
  Hora resultado = *this;

  int segundosTotalAtual = hora * 3600 + minuto * 60 + segundo;
  int segundosTotalOutro = outroHorario.hora * 3600 + outroHorario.minuto * 60 + outroHorario.segundo;

  int diferencaSegundos = segundosTotalAtual - segundosTotalOutro;

  if (diferencaSegundos < 0) {
    diferencaSegundos += 24 * 3600; // Adiciona um dia em segundos
  }

  resultado.hora = diferencaSegundos / 3600;
  resultado.minuto = (diferencaSegundos % 3600) / 60;
  resultado.segundo = diferencaSegundos % 60;

  return resultado;
}

std::ostream& operator<<(std::ostream& os, const Hora& horario) {
  os << std::setw(2) << std::setfill('0') << horario.hora << ":"
     << std::setw(2) << std::setfill('0') << horario.minuto << ":"
     << std::setw(2) << std::setfill('0') << horario.segundo;
  return os;
}
