#pragma once

namespace NS_Composants {
	ref class CL_Stock
	{
	private:
		int ID;
		System::String^ reference;
		System::String^ designation;
		int quantite;
		double Montant_HT;
		double Montant_TVA;
		double Montant_TTC;
		int seuil;
		System::String^ nature;
		System::String^ couleur;
	public:
		System::String^ AFFICHERbyId() {
			return "SELECT * FROM Article WHERE Id_Article = '" + this->getID() + "' ";
		}
		System::String^ AFFICHERbyRef() {
			return "SELECT * FROM Article WHERE reference_article = '" + this->getReference() + "' ";
		}
		System::String^ AFFICHERbyDesi() {
			return "SELECT * FROM Article WHERE designation = '" + this->getDesignation() + "' ";
		}
		System::String^ SUPPRIMER() {
			return "DELETE FROM Article WHERE reference_article = '" + this->getReference() + "' ";
		}
		System::String^ AJOUTER() {
			return "INSERT INTO Article (reference_article,designation,Quantite,Montant_HT,seuil_de_reapprovisionnement, Nature_De_L_article, Couleur_de_l_article) VALUES('" + this->getReference() + "', '" + this->getDesignation() + "', " + this->getQuantite() + ", " + this->getMontantHT() + "," + this->getSeuil() + ", '" + this->getNature() + "', '" + this->getCouleur() + "') UPDATE Article SET Montant_TVA = Montant_HT * 19/100 WHERE reference_article = '" + this->getReference() + "' UPDATE Article SET Montant_TTC = Montant_HT + Montant_TVA WHERE reference_article = '" + this->getReference() + "' ";
		}
		System::String^ MODIFIER() {
			return "UPDATE Article SET reference_article = '"+this->getReference()+"', designation = '" + this->getDesignation() + "', Quantite = " + this->getQuantite() + ", Montant_HT = " + this->getMontantHT() + ", seuil_de_reapprovisionnement = " + this->getSeuil() + ", Nature_De_L_article = '" + this->getNature() + "', Couleur_de_l_article = '" + this->getCouleur() + "' WHERE Id_Article = '" + this->getID() + "' UPDATE Article SET Montant_TVA = Montant_HT * 19/100 WHERE reference_article = '" + this->getReference() + "' UPDATE Article SET Montant_TTC = Montant_HT + Montant_TVA WHERE reference_article = '" + this->getReference() + "' ";
		}
		void setReference(System::String^ ref){
			this->reference = ref;
		}
		System::String^ getReference() {
			return reference;
		}
		void setDesignation(System::String^ designation) {
			this->designation = designation;
		}
		System::String^ getDesignation() {
			return designation;
		}
		void setQuantite(int quantite) {
			this->quantite = quantite;
		}
		int getQuantite() {
			return quantite;
		}
		void setMontantHT(double HT) {
			this->Montant_HT = HT;
		}
		double getMontantHT() {
			return Montant_HT;
		}
		void setMontantTVA(double TVA) {
			this->Montant_TVA = TVA;
		}
		double getMontantTVA() {
			return Montant_TVA;
		}
		void setMontantTTC(double TTC) {
			this->Montant_TTC = TTC;
		}
		double getMontant_TTC() {
			return Montant_TTC;
		}
		void setSeuil(int seuil) {
			this->seuil = seuil;
		}
		int getSeuil() {
			return seuil;
		}
		void setNature(System::String^ nat) {
			this->nature = nat;
		}
		System::String^ getNature() {
			return nature;
		}
		void setCouleur(System::String^ coul) {
			this->couleur = coul;
		}
		System::String^ getCouleur() {
			return couleur;
		}
		void setID(int ID) {
			this->ID = ID;
		}
		int getID() {
			return ID;
		}

	};
}

