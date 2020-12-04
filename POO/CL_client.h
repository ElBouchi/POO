#pragma once

namespace NS_Composants {

	ref class CL_client
	{
	private:
		int ID;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ dateNai;
		System::String^ dateAchat;
		System::String^ adresseFac;
		System::String^ adresseLiv;
	public:
		CL_client() {
			//RIEN
		}
		System::String^ AFFICHERbyID(void) {
			return "SELECT * FROM Client WHERE Id_Client = " + this->getID() + " ";
		}
		System::String^ AFFICHERbyNom(void) {
			return "SELECT * FROM Client WHERE Nom = '" + this->getNom() + "' ";
		}
		System::String^ AFFICHERbyPrenom(void) {
			return "SELECT * FROM Client WHERE Prenom = '" + this->getPrenom() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return "DELETE FROM Client WHERE Id_Client = "+this->getID()+" ";
		}
		System::String^ AJOUTER(void) {
			return "INSERT INTO Client (Nom, Prenom, Date_de_naissance, Date_du_premier_achat, Adresse_Facturation, Adresse_Livraison) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getdateNai() + "', '" + this->getdateAchat() + "', '" + this->getadresseFac() + "', '" + this->getadresseLiv() + "') ";
		}
		System::String^ MODIFIER(void) {
			return "UPDATE Client SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Date_de_naissance = '" + this->getdateNai() + "', Date_du_premier_achat = '" + this->getdateAchat() + "', Adresse_Facturation = '" + this->getadresseFac() + "', Adresse_Livraison = '" + this->getadresseLiv() + "' WHERE Id_Client = " + this->getID() + " ";
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
		void setdateNai(System::String^ dateNai) {
			this->dateNai = dateNai;
		}
		System::String^ getdateNai() {
			return dateNai;
		}
		void setdateAchat(System::String^ dateAchat) {
			this->dateAchat = dateAchat;
		}
		System::String^ getdateAchat() {
			return dateAchat;
		}
		void setadresseFac(System::String^ adresseFac) {
			this->adresseFac = adresseFac;
		}
		System::String^ getadresseFac() {
			return adresseFac;
		}
		void setadresseLiv(System::String^ adresseLiv) {
			this->adresseLiv = adresseLiv;
		}
		System::String^ getadresseLiv() {
			return adresseLiv;
		}
	};
}

