#include <iostream>
using namespace std;


class BALH{
	private :
		string nombres,apellidos,cui;
	private :
		BALH (){
		}
		BALH (string nom,string ape,string c){
			nombres= nom;
			apellidos= ape;
			cui = c;
		}
	void crear ();
	void leer ();
	void actualizar();
	void borrar();
};
