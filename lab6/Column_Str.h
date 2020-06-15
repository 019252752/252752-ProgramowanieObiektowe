#pragma once
#include "Column.h"
#include "Cell_class.h"

class KolumnaStr : public Kolumna{
	public:
		KolumnaStr(){
			ustawTyp();
			ustawTypyKomorek();
		}

	private:
		void ustawTyp(){
			typ = STRING;
		}
		void ustawTypyKomorek(){
			for(int i = 0; i < rozmiarKolumnaa; i++){
				komorki[i].ustawTyp(typ);
			}
		}
};
