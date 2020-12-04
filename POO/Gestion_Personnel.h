#include "CAD.h"
#include"CL_Personnel.h"

namespace NS_SVC {
	ref class Gestion_Personnel
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_Personnel^ Personnel;
	public:
		Gestion_Personnel(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->Personnel = gcnew NS_Composants::CL_Personnel();
		}
		void AfficherByID(int ID, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			Personnel->setID(ID);
			cad->requete(Personnel->AFFICHERbyID());
			cad->readPersonnel(textBox7, textBox1, textBox2, textBox4, textBox3, textBox8);
			cad->datagrid(Personnel->AFFICHERbyID(), bindingsource2, datagridview2);
		}
		void AfficherByNom(System::String^ nom, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			Personnel->setNom(nom);
			cad->requete(Personnel->AFFICHERbyNom());
			cad->readPersonnel(textBox7, textBox1, textBox2, textBox4, textBox3, textBox8);
			cad->datagrid(Personnel->AFFICHERbyNom(), bindingsource2, datagridview2);
		}
		void AfficherByPrenom(System::String^ Prenom, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			Personnel->setPrenom(Prenom);
			cad->requete(Personnel->AFFICHERbyPrenom());
			cad->readPersonnel(textBox7, textBox1, textBox2, textBox4, textBox3, textBox8);
			cad->datagrid(Personnel->AFFICHERbyPrenom(), bindingsource2, datagridview2);
		}
		void Ajouter(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date) {
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setAdresse(adresse);
			Personnel->setDateEmb(date);
			cad->requete(Personnel->AJOUTER());
		}
		void AjouterP(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date) {
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setAdresse(adresse);
			Personnel->setDateEmb(date);
			cad->requete(Personnel->AJOUTERP());
		}
		void ModifierAjouterP(System::String^ nom, System::String^ prenom, System::String^ nomp, System::String^ prenomp) {
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setNomP(nomp);
			Personnel->setPrenomP(prenomp);
			cad->requete(Personnel->MODIFIERAJOUTERP());
		}
		void Modifier(int ID, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date) {
			Personnel->setID(ID);
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setAdresse(adresse);
			Personnel->setDateEmb(date);
			cad->requete(Personnel->MODIFIER());
		}
		void ModifierP(int ID, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date) {
			Personnel->setID(ID);
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setAdresse(adresse);
			Personnel->setDateEmb(date);
			cad->requete(Personnel->MODIFIERP());
		}
		void ModifierModifierP(System::String^ nom, System::String^ prenom, System::String^ nomp, System::String^ prenomp) {
			Personnel->setNom(nom);
			Personnel->setPrenom(prenom);
			Personnel->setNomP(nomp);
			Personnel->setPrenomP(prenomp);
			cad->requete(Personnel->MODIFIERMODIFIERP());
		}
		void Supprimer(int ID) {
			Personnel->setID(ID);
			cad->requete(Personnel->SUPPRIMER());
		}
	};
}
