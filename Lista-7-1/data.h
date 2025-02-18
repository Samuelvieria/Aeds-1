

#ifndef Data_h
#define Data_h

#include <iostream>

using namespace std;

class Data {
private:
  int dia;
  int mes;
  int ano;

public:
  Data();
  Data(int, int, int);
  void setData(int, int, int);
  void print() const;
  void addDias(int);
  int getDia() const;
  int getMes() const;
  int getAno() const;

  Data operator+(int) const;
  Data operator-(const Data&);
  friend ostream& operator<<(ostream&, const Data&);
};

#endif
