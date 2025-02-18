// No arquivo main.cpp

#include "hora.h"
#include <iostream>

int main() {
  Hora padrao1;
  Hora custom(20, 15, 30);
  Hora teste1(10, 30, 45);

  std::cout << "Horário padrão: " << padrao1 << std::endl;

  std::cout << "Horário customizado: " << custom << std::endl;

  std::cout << "Hora: " << teste1.getHora() << std::endl;
  std::cout << "Minuto: " << teste1.getMinuto() << std::endl;
  std::cout << "Segundo: " << teste1.getSegundo() << std::endl;

  teste1.adicionarHorario(Hora(5, 10, 15));
  std::cout << "Horário após adicionar 5 horas, 10 minutos e 15 segundos: " << teste1 << std::endl;

  Hora teste2 = teste1 + Hora(3, 20, 25);
  std::cout << "Horário após adicionar 3 horas, 20 minutos e 25 segundos usando operador +: " << teste2 << std::endl;

  Hora diferenca = teste2 - teste1;
  std::cout << "Diferença entre os horários: " << diferenca << std::endl;

  return 0;
}
