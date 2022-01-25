#include "pui.hpp"
#include "tinere.hpp"
#include "mature.hpp"
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int	capacitate= 300;
int	capacitate_aux= 300;
int zile =0;
int cantitate = 0;


	
	Baza ** pisici;
  Baza * aux;
  pisici = new Baza * [8];
  pisici[0] = new pui   ("beni","negru","cute si jucaus",1,true);
  pisici[1] = new tinere("gica","alb","cute si blanos",2,true);
  pisici[2] = new pui   ("ana","colorat","cute cu pede galbene",1,false);
  pisici[3] = new tinere("michi","colorat","cute dar doarme mult",3,true);
  pisici[4] = new pui   ("andrei","alb","cute dar mananca doar ananas",1,true);
  pisici[5] = new mature("cichi","alb","cute dar fioros",4,true);
  pisici[6] = new pui   ("pichi","alb","cute si mic",1,true);
  pisici[7] = new mature("choco","alb","cute dar musca",7,false);

	for(int i=0; i<8;i++)
	pisici[i]->afisare();
	
	///cerinta 1
	cout<<endl<<" \t cerinta 1";
	while(capacitate_aux >= 150){
		capacitate_aux -= 2;
		zile +=1;
	}
	cout<<endl<<zile<<" zile ";
	///cerinta 2
	cout<<endl<<" \t cerinta 2"<<endl;
	capacitate_aux = capacitate;
	zile=0;
	//cout<<endl<<"capacitate :"<<capacitate_aux;
	while(zile <= 100 ){
		zile +=1;
	//	cout<<"capacitate :"<<capacitate_aux;
		cantitate += 100*capacitate_aux;
		capacitate_aux -= 2;
	//	cout<<"  cantitate: "<<cantitate<<endl;
	}
	cout<<endl << cantitate << "g mancare in 100 zile";
	///cerinta 3
	cout<<endl<<" \t cerinta 3"<<endl;
	int nr=0;
	int nr_vaccin=0;
	int nr_colorate=0;
	for(int i=0;i<8;i++){
		if(pisici[i]->is_pui() == true)
		{
			nr++;
			if(pisici[i]->is_color() == true)
				nr_colorate++;
			if(pisici[i]->is_vaccin() == true)
				nr_vaccin++;
		
		}
	}
	cout<<endl<<"sunt "<<nr<<" pui"<<endl;
	cout<<"sunt "<<nr_colorate<<" pui colorati"<<endl;
	cout<<"sunt "<<nr_vaccin<<" pui vaccinati"<<endl;
	
 	nr=0;
	nr_vaccin=0;
 	nr_colorate=0;
	for(int i=0;i<8;i++){
		if(pisici[i]->is_tinere() == true)
		{
			nr++;
			if(pisici[i]->is_color() == true)
				nr_colorate++;
			if(pisici[i]->is_vaccin() == true)
				nr_vaccin++;
		
		}
	}
	cout<<endl<<"sunt "<<nr<<" pisici tinere"<<endl;
	cout<<"sunt "<<nr_colorate<<" pisici tinere colorate "<<endl;
	cout<<"sunt "<<nr_vaccin<<" pisici tinere colorate vaccinate"<<endl;
	
	nr=0;
	nr_vaccin=0;
 	nr_colorate=0;
	for(int i=0;i<8;i++){
		if(pisici[i]->is_mature() == true)
		{
			nr++;
			if(pisici[i]->is_color() == true)
				nr_colorate++;
			if(pisici[i]->is_vaccin() == true)
				nr_vaccin++;
		
		}
	}
	cout<<endl<<"sunt "<<nr<<" pisici mature"<<endl;
	cout<<"sunt "<<nr_colorate<<" pisici mature colorate "<<endl;
	cout<<"sunt "<<nr_vaccin<<" pisici mature colorate vaccinate"<<endl;
	
	
	// cerinta 4 
	cout<<"cerinta 4"<<endl <<"pisicile cu cele mai lungi descrieri"<<endl <<endl;
	for(int i=0; i<(9-1); i++)
    {
        for(int j=0; j<(8-i-1); j++)
        {
            if(pisici[j]->get_lungime() < pisici[j+1]->get_lungime())
            {
                aux = pisici[j];
                pisici[j] = pisici[j+1];
               pisici[j+1] = aux;
            }
        }
    }
	
	for(int i=0; i<3; i++)
	pisici[i]->afisare();

	
	return 0;
}
