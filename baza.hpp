#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>

using namespace std;

class Baza{
public:
	
	virtual void afisare() = 0;
	virtual ~Baza() = 0;
	
	virtual bool is_color() = 0;
	virtual bool is_vaccin() =0;
	virtual int get_lungime() =0;
	virtual bool is_pui() = 0;
	virtual bool is_tinere() = 0;
	virtual bool  is_mature() = 0;
	
	
};

#endif
