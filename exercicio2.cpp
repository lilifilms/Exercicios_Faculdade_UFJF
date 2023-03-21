#include <iostream>
using namespace std;

int main()
{
int inicioSegundos = 200000;
float calcMinuto = (inicioSegundos / 60);
float calcHoras = ((inicioSegundos / 60 )/60 );
float calcDias = (((inicioSegundos / 60 )/60 )/24 );

  cout << "minutos: " << calcMinuto << "\n" << "horas: " << calcHoras << "\n" << "dias: " << calcDias;
}

