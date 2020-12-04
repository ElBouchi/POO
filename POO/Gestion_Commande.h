#pragma once

#include "CAD.h"
#include "CL_Commande.h"

namespace NS_SVC {
	ref class Gestion_Commande
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_Commande^ commande;
	public:
		Gestion_Commande(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->commande = gcnew NS_Composants::CL_Commande();
		}
		void Supprimer(System::String^ ref) {
			commande->setRef(ref);
			cad->requete(commande->SUPPRIMER());
		}
		void Afficher(System::String^ ref, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::ComboBox^ comboBox1, System::Windows::Forms::TextBox^ textBox13) {
			commande->setRef(ref);
			cad->requete(commande->AFFICHER());
			cad->readCommande(textBox1, textBox2, textBox3, textBox4, comboBox1, textBox13);
		}
		void Ajouter(System::String^ ref, System::String^ dateLiv, System::String^ dateEmi, System::String^ datePay, System::String^ moyen, System::String^ nom, System::String^ prenom) {
			commande->setRef(ref);
			commande->setDateLiv(dateLiv);
			commande->setDateEmi(dateEmi);
			commande->setDatePay(datePay);
			commande->setMoyen(moyen);
			commande->setNomC(nom);
			commande->setPrenomC(prenom);
			cad->requete(commande->AJOUTER());
		}
		void Modifer(System::String^ ref, System::String^ dateLiv, System::String^ dateEmi, System::String^ datePay, System::String^ moyen, System::String^ nom, System::String^ prenom, System::String^ ref2) {
			commande->setRef(ref);
			commande->setDateLiv(dateLiv);
			commande->setDateEmi(dateEmi);
			commande->setDatePay(datePay);
			commande->setMoyen(moyen);
			commande->setNomC(nom);
			commande->setPrenomC(prenom);
			commande->setRef2(ref2);
			cad->requete(commande->MODIFIER());
		}
	};
}
