#ifndef TINERE_HPP
#define TINERE_HPP
#include "baza.hpp"
class tinere: public Baza {

	char nume[20];
	char culoare[20];
	char descriere[40];
	int  varsta;
	bool vaccin;
  public:
    tinere();
  tinere(char[],char[],char[], int, bool);
  void afisare();
	 bool is_pui();
	 bool is_tinere();
	 bool is_mature();
	 bool is_color();
 	 bool is_vaccin();
     int  get_lungime();


};
#endif
