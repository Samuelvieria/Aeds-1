#include <stdio.h>
#include <stdbool.h>

// Definição da estrutura de Data
struct Data {
    int ano;
    int mes;
    int dia;
};

// Função para validar a Data
struct Data validaData(int ano, int mes, int dia) {
    struct Data novaData;
    if (ano > 0 && mes >= 1 && mes <= 12 && dia >= 1 && dia <= 31) {
        novaData.ano = ano;
        novaData.mes = mes;
        novaData.dia = dia;
    } else {
        novaData.ano = 0;
        novaData.mes = 0;
        novaData.dia = 0;
    }
    return novaData;
}

// Função para acrescentar dias à Data
struct Data acrescentaDias(struct Data data, int dias) {
    // Implementação para acrescentar dias à data
    return data;
}

// Função para calcular a diferença entre datas
int diferencaDatas(struct Data data1, struct Data data2) {
    // Implementação para calcular a diferença entre as datas
    return 0;
}

// Definição da estrutura de Hora
struct Hora {
    int hora;
    int minuto;
    int segundo;
};

// Função para validar a Hora
struct Hora validaHora(int hora, int minuto, int segundo) {
    struct Hora novoHorario;
    if (hora >= 0 && hora < 24 && minuto >= 0 && minuto < 60 && segundo >= 0 && segundo < 60) {
        novoHorario.hora = hora;
        novoHorario.minuto = minuto;
        novoHorario.segundo = segundo;
    } else {
        novoHorario.hora = 0;
        novoHorario.minuto = 0;
        novoHorario.segundo = 0;
    }
    return novoHorario;
}

// Função para somar Horários
struct Hora somaHorarios(struct Hora horario1, struct Hora horario2) {
    // Implementação para somar os horários
    return horario1;
}

// Função para calcular a quantidade de segundos em um horário
int segundosDoHorario(struct Hora horario) {
    // Implementação para calcular os segundos do horário
    return 0;
}

// Definição da estrutura que contém Data e Hora
struct DataHora {
    struct Data data;
    struct Hora horario;
};

int main() {
    // Código de exemplo para usar as estruturas e funções
    return 0;
}
