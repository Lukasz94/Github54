//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

int Factorial(int value) {
  int wynik=1;

  if(value>12)
  {
    return 0;
  }
  else if(value==0)
  {
    return 1;
  }

  while(value>0)
  {
    wynik=wynik*value;
    value--;

  }

  while(value<0)
  {
    wynik=wynik*value;
    value++;
  }



  return wynik;
}
