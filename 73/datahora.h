

#ifndef DataHora_h
#define DataHora_h

#include "data.h"
#include "hora.h"
#include <iostream>

class DataHora : public Data, public Hora {
public:
  DataHora();
  DataHora(const Data& data, const Hora& hora);
  Hora diferencaDataHora(const DataHora& outraDataHora) const;
  DataHora operator-(const DataHora& outraDataHora) const;
  friend std::ostream& operator<<(std::ostream& os, const DataHora& dataHora);
};

#endif
