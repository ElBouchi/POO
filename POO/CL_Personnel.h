#pragma once

namespace NS_Composants {

	ref class CL_Personnel
	{
	private:
		int ID;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Adresse;
		System::String^ dateDemb;
		System::String^ Superieur;
		System::String^ NomP;
		System::String^ PrenomP;
		int ID_Supp;
	public:
		CL_Personnel() {
			//RIEN
		}
		System::String^ AFFICHERbyID(void) {
			return "SELECT * FROM Personnel WHERE Id_Personnel = "+getID()+" ";
		}
		System::String^ AFFICHERbyNom(void) {
			return "SELECT * FROM Personnel WHERE Nom = '" + this->getNom() + "' ";
		}
		System::String^ AFFICHERbyPrenom(void) {
			return "SELECT * FROM Personnel WHERE Prenom = '" + this->getPrenom() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return "UPDATE Personnel SET Id_Personnel_encadrer = NULL, Supperieur_hierarchique = 0 WHERE Id_Personnel_encadrer = " + getID() + " DELETE FROM Personnel WHERE Id_Personnel = " + getID() + " ";
		}
		System::String^ AJOUTER(void) {

			return  "INSERT INTO Personnel(Nom, Prenom, Adresse, Date_d_embauche, Supperieur_hierarchique) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getAdresse() + "', '" + this->getDateEmb() + "', 0) ";
		}
		System::String^ AJOUTERP(void) {

			return  " INSERT INTO Personnel(Nom, Prenom, Adresse, Date_d_embauche, Supperieur_hierarchique) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getAdresse() + "', '" + this->getDateEmb() + "', 1) ";
		}
		System::String^ MODIFIERAJOUTERP(void) {
			return "UPDATE Personnel SET Id_Personnel_encadrer = (SELECT ID_Personnel FROM Personnel WHERE Nom = '" + this->getNomP() + "' AND Prenom = '" + this->getPrenomP() + "') WHERE Nom = '" + this->getNom() + "' AND Prenom = '" + this->getPrenom() + "' ";
		}
		System::String^ MODIFIER(void) {

			return "UPDATE Personnel SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' , Adresse = '" + this->getAdresse() + "', Date_d_embauche = '" + this->getDateEmb() + "', Supperieur_hierarchique = 0, Id_Personnel_encadrer = NULL WHERE Id_Personnel = " + this->getID() + " ";
		}
		System::String^ MODIFIERP(void) {

			return "UPDATE Personnel SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' , Adresse = '" + this->getAdresse() + "', Date_d_embauche = '" + this->getDateEmb() + "', Supperieur_hierarchique = 1 WHERE Id_Personnel = " + this->getID() + " ";
		}
		System::String^ MODIFIERMODIFIERP(void) {

			return "UPDATE Personnel SET Id_Personnel_encadrer = (SELECT ID_Personnel FROM Personnel WHERE Nom = '" + this->getNomP() + "' AND Prenom = '" + this->getPrenomP() + "') WHERE Nom = '" + this->getNom() + "' AND Prenom = '" + this->getPrenom() + "' ";
		}
		void setID(int sID) {
			this->ID = sID;
		}
		int getID() {
			return ID;
		}
		void setNom(System::String^ Nom) {
			this->Nom = Nom;
		}
		System::String^ getNom() {
			return Nom;
		}
		void setPrenom(System::String^ Prenom) {
			this->Prenom = Prenom;
		}
		System::String^ getPrenom() {
			return Prenom;
		}
		void setDateEmb(System::String^ dateEmb) {
			this->dateDemb = dateEmb;
		}
		System::String^ getDateEmb() {
			return dateDemb;
		}
		void setAdresse(System::String^ adresse) {
			this->Adresse = adresse;
		}
		System::String^ getAdresse() {
			return Adresse;
		}
		void setSuperieur(System::String^ superieur) {
			this->Superieur = superieur;
		}
		System::String^ getSuperieur() {
			return Superieur;
		}
		void setNomP(System::String^ Nomp) {
			this->NomP = Nomp;
		}
		System::String^ getNomP() {
			return NomP;
		}
		void setPrenomP(System::String^ Prenomp) {
			this->PrenomP = Prenomp;
		}
		System::String^ getPrenomP() {
			return PrenomP;
		}
		void setIDp(int idp) {
			this->ID_Supp = idp;
		}
		int getIDp() {
			return ID_Supp;
		}

	};
}