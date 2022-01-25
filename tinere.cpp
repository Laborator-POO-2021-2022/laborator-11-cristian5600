#include "tinere.hpp"
#include <string.h>
tinere::tinere() {

strcpy(nume," ");
strcpy(culoare," ");
strcpy(descriere," ");
varsta = 0;
vaccin = false;
}

tinere::tinere(char nume[], char culoare[], char descriere[], int varsta, bool vaccin) {
	strcpy(this -> nume,nume);
 	strcpy(this -> culoare,culoare);
	strcpy(this -> descriere , descriere);
	this -> varsta = varsta;
	this -> vaccin = vaccin;
}
void tinere::afisare(){
	cout << "pisica matura , nume: "<<nume<<" ,culoare: "<<culoare<< ", descriere: '"<<descriere<<"' , varsta: "<<varsta<< " ,vaccin: ";
	if(vaccin == true)
  		cout<<"DA"<<endl;
  	else cout<<"NU"<<endl;
	
}
bool tinere::is_pui() {
	return false;
}
bool tinere::is_tinere(){
	return true;
}
bool tinere::is_mature(){
	return false;
}
bool tinere::is_color(){
	if(strcmp(culoare,"colorat") == 0)
		return true;
	else return false;
}
bool tinere::is_vaccin(){
 	 if (vaccin == true)	
	  	return true;
	else return false;	  	
}
int   tinere::get_lungime(){
	return strlen(descriere);
}

