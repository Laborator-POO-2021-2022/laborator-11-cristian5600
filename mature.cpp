#include "mature.hpp"
#include <string.h>
mature::mature() {

strcpy(nume," ");
strcpy(culoare," ");
strcpy(descriere," ");
varsta = 0;
vaccin = false;
}

mature::mature(char nume[], char culoare[], char descriere[], int varsta, bool vaccin) {
	strcpy(this -> nume,nume);
 	strcpy(this -> culoare,culoare);
	strcpy(this -> descriere , descriere);
	this -> varsta = varsta;
	this -> vaccin = vaccin;
}
void mature::afisare(){
 cout << "mature           , nume: "<<nume<<" ,culoare: "<<culoare<< ", descriere: '"<<descriere<<"' , varsta: "<<varsta<< " ,vaccin: ";
	if(vaccin == true)
  		cout<<"DA"<<endl;
  	else cout<<"NU"<<endl;
}
bool mature::is_pui() {
	return false;
}
bool mature::is_tinere(){
	return false;
}
bool mature::is_mature(){
	return true;
}
bool mature::is_color(){
	if(strcmp(culoare,"colorat") == 0)
		return true;
	else return false;
}
bool mature::is_vaccin(){
 	 if (vaccin == true)	
	  	return true;
	else return false;	  	
}
int mature::get_lungime(){
	return strlen(descriere);
}

