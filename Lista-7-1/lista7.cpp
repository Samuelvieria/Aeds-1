// No arquivo main.cpp

#include "data.h"
#include <iostream>

using namespace std;

int main() {
  Data padrao1;
  Data custom(20, 2, 3);
  Data teste1(10, 20, 3);

  cout << "Data padrão: ";
  padrao1.print();

  cout << "Data custom: ";
  custom.print();

  cout << teste1.getDia() << endl;
  cout << teste1.getMes() << endl;
  cout << teste1.getAno() << endl;

  teste1.addDias(5);

  cout << "Data após adicionar 5 dias: " << teste1 << endl;

  Data teste2 = teste1 + 10;
  cout << "Data após adicionar 10 dias usando operador +: " << teste2 << endl;

  // Adicione mais testes conforme necessário

  return 0;
}
