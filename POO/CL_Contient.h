#pragma once

namespace NS_Composants {
	ref class CL_Contient
	{
	private:
		System::String^ ReferenceC;
		System::String^ ReferenceA;
		System::String^ ReferenceAChange;
		int quantite;
	public:	
		CL_Contient() {
			//RIEN
		}
		System::String^ AJOUTER() {
			return "INSERT INTO Contient (reference_commande, reference_article, Quantité_article) VALUES ('" + this->getRefC() + "', '" + this->getRefA() + "', " + this->getQuantite() + ") ";
		}
		System::String^ MODIFIER() {
			return "UPDATE Contient SET reference_article = '" + this->getRefAC() + "', Quantité_article = " + this->getQuantite() + " WHERE reference_commande = '" + this->getRefC() + "' AND reference_article = '" + this->getRefA() + "' ";
		}
		System::String^ SUPPRIMER() {
			return "DELETE FROM Contient WHERE reference_article = '" + this->getRefA() + "' AND reference_commande = '" + this->getRefC() + "' ";
		}
		void setRefC(System::String^ referenceC) {
			this->ReferenceC = referenceC;
		}
		System::String^ getRefC() {
			return ReferenceC;
		}
		void setRefA(System::String^ referenceA) {
			this->ReferenceA = referenceA;
		}
		System::String^ getRefA() {
			return ReferenceA;
		}
		void setQuantite(int qt) {
			this->quantite = qt;
		}
		int getQuantite() {
			return quantite;
		}
		void setRefAC(System::String^ referenceAC) {
			this->ReferenceAChange = referenceAC;
		}
		System::String^ getRefAC() {
			return ReferenceAChange;
		}
	};
}

