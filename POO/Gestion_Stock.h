#pragma once

#include "CAD.h"
#include"CL_Stock.h"

namespace NS_SVC {
	ref class Gestion_Stock
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_Stock^ stock;
	public:
		Gestion_Stock(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->stock = gcnew NS_Composants::CL_Stock();
		}
		void afficherById(int ID, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox9, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			stock->setID(ID);
			cad->requete(stock->AFFICHERbyId());
			cad->readStock(textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4);
			cad->datagrid(stock->AFFICHERbyId(), bindingsource2, datagridview2);
		}
		void afficherByRef(System::String^ ref, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox9, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			stock->setReference(ref);
			cad->requete(stock->AFFICHERbyRef());
			cad->readStock(textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4);
			cad->datagrid(stock->AFFICHERbyRef(), bindingsource2, datagridview2);
		}
		void afficherByDesignation(System::String^ designation, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox9, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			stock->setDesignation(designation);
			cad->requete(stock->AFFICHERbyDesi());
			cad->readStock(textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4);
			cad->datagrid(stock->AFFICHERbyDesi(), bindingsource2, datagridview2);
		}
		void Supprimer(System::String^ ref) {
			stock->setReference(ref);
			cad->requete(stock->SUPPRIMER());
		}
		void Ajouter(System::String^ ref, System::String^ designation, int quantite, double montantHT, int seuil, System::String^ nature, System::String^ couleur) {
			stock->setReference(ref);
			stock->setDesignation(designation);
			stock->setQuantite(quantite);
			stock->setMontantHT(montantHT);
			stock->setSeuil(seuil);
			stock->setNature(nature);
			stock->setCouleur(couleur);
			cad->requete(stock->AJOUTER());
		}
		void Modifier(int ID, System::String^ ref, System::String^ designation, int quantite, double montantHT, int seuil, System::String^ nature, System::String^ couleur) {
			stock->setID(ID);
			stock->setReference(ref);
			stock->setDesignation(designation);
			stock->setQuantite(quantite);
			stock->setMontantHT(montantHT);
			stock->setSeuil(seuil);
			stock->setNature(nature);
			stock->setCouleur(couleur);
			cad->requete(stock->MODIFIER());
		}
	};
}