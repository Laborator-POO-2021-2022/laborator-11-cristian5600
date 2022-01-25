#include "pui.hpp"
#include <string.h>
pui::pui() {

strcpy(nume," ");
strcpy(culoare," ");
strcpy(descriere," ");
varsta = 0;
vaccin = false;
}

pui::pui(char nume[], char culoare[], char descriere[], int varsta, bool vaccin) {
	strcpy(this -> nume,nume);
 	strcpy(this -> culoare,culoare);
	strcpy(this -> descriere , descriere);
	this -> varsta = varsta;
	this -> vaccin = vaccin;
}
void pui::afisare(){
 cout << "pui           , nume: "<<nume<<" ,culoare: "<<culoare<< ", descriere: '"<<descriere<<"' , varsta: "<<varsta<< " ,vaccin: ";
	if(vaccin == true)
  		cout<<"DA"<<endl;
  	else cout<<"NU"<<endl;
}
bool pui::is_pui() {
	return true;
}
bool pui::is_tinere(){
	return false;
}
bool pui::is_mature(){
	return false;
}
bool pui::is_color(){
	if(strcmp(culoare,"colorat") == 0)
		return true;
	else return false;
}
bool pui::is_vaccin(){
 	 if (this->vaccin == true)	
	  	return true;
	else return false;	  	
}
int   pui::get_lungime(){
	return strlen(descriere);
}

