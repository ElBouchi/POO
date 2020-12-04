#pragma once

#include "CAD.h"
#include "CL_Contient.h"

namespace NS_SVC {
	ref class Gestion_Contient
	{
	private:	
		NS_Composants::CAD^ cad;
		NS_Composants::CL_Contient^ contient;
	public:
		Gestion_Contient(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->contient = gcnew NS_Composants::CL_Contient();
		}
		void Ajouter(System::String^ refc, System::String^ refa, int qt){
			contient->setRefC(refc);
			contient->setRefA(refa);
			contient->setQuantite(qt);
			cad->requete(contient->AJOUTER());
		}
		void Modifier(System::String^ refac, System::String^ refc, System::String^ refa, int qt) {
			contient->setRefAC(refac);
			contient->setQuantite(qt);
			contient->setRefC(refc);
			contient->setRefA(refa);
			cad->requete(contient->MODIFIER());
		}
		void Supprimer(System::String^ refa, System::String^ refc) {
			contient->setRefA(refa);
			contient->setRefC(refc);
			cad->requete(contient->SUPPRIMER());
		}
	};
}

