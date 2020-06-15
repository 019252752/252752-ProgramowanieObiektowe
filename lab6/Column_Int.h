#pragma once
#include "Column.h"
#include "Cell.class.h"

class KolumnaInt : public Kolumna{
	public:
		KolumnaInt(){
			ustawTyp();
			ustawTypyKomorek();
		}

	private:
		void ustawTyp(){
			typ = INT;
		}
		void ustawTypyKomorek(){
			for(int i = 0; i < rozmiarKolumnaa; i++){
				komorki[i].ustawTyp(typ);
			}
		}
};
