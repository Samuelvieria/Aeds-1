

#include "datahora.h"

DataHora::DataHora() : Data(), Hora() {}

DataHora::DataHora(const Data& data, const Hora& hora) : Data(data), Hora(hora) {}

Hora DataHora::diferencaDataHora(const DataHora& outraDataHora) const {
  return (*this - outraDataHora);
}

DataHora DataHora::operator-(const DataHora& outraDataHora) const {
  DataHora resultado = *this;

  long long segundosTotalAtual = getSegundosTotal();
  long long segundosTotalOutra = outraDataHora.getSegundosTotal();

  long long diferencaSegundos = segundosTotalAtual - segundosTotalOutra;

  if (diferencaSegundos < 0) {
    diferencaSegundos += (static_cast<long long>(365) * 24 * 3600);
  }

  resultado.setSegundosTotal(diferencaSegundos);

  return resultado;
}

std::ostream& operator<<(std::ostream& os, const DataHora& dataHora) {
  os << std::setw(4) << std::setfill('0') << dataHora.getAno() << "/"
     << std::setw(2) << std::setfill('0') << dataHora.getMes() << "/"
     << std::setw(2) << std::setfill('0') << dataHora.getDia() << "-"
     << std::setw(2) << std::setfill('0') << dataHora.getHora() << ":"
     << std::setw(2) << std::setfill('0') << dataHora.getMinuto() << ":"
     << std::setw(2) << std::setfill('0') << dataHora.getSegundo();

  return os;
}
