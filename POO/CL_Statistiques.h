#pragma once

namespace NS_Composants {
	ref class CL_Statistiques
	{
	private:
		int ID;
		int Mois;
		System::String^ MC;
		System::String^ RC;
		System::String^ DI;
	public:
		System::String^ Panier() {
			return "SELECT (SUM(Quantité_article * (Montant_TTC - (Montant_TTC * Remise/100)))/COUNT(DISTINCT([commande].reference_commande))) AS Panier_Moyen FROM Contient, Article, Commande WHERE[Contient].reference_article = [Article].reference_article AND[Commande].reference_commande = [Contient].reference_commande";
		}
		System::String^ Seuil() {
			return "SELECT reference_article, designation FROM Article WHERE seuil_de_reapprovisionnement > Quantite";
		}
		System::String^ pVendus() {
			return "SELECT designation, [Contient].reference_article, SUM(Quantité_article) AS Quantité FROM Contient, Article WHERE[Contient].reference_article = [Article].reference_article GROUP BY[Contient].reference_article, designation ORDER BY Quantité DESC ";
		}
		System::String^ mVendus() {
			return "SELECT designation, [Contient].reference_article, SUM(Quantité_article) AS Quantité FROM Contient, Article WHERE[Contient].reference_article = [Article].reference_article GROUP BY[Contient].reference_article, designation ORDER BY Quantité ASC ";
		}
		System::String^ ChiffreAff() {
			return "SELECT (SUM(Quantité_article * (Montant_TTC - (Montant_TTC * Remise/100)))) AS Chiffre_Affaire FROM Contient, Article, Commande WHERE[Contient].reference_article = [Article].reference_article AND[Commande].reference_commande = [Contient].reference_commande AND MONTH(Date_d_emission) = " + this->getMOIS() + " ";
		}
		System::String^ TotalAchat() {
			return "SELECT SUM(Montant_total_TTC) AS Montant_Total_Achats FROM Commande WHERE Id_Client = " + this->getID()+" ";
		}
		System::String^ ValeurAchat() {
			return "SELECT SUM(Montant_HT * Quantite) - SUM((Montant_HT * 0.2) * Quantite) AS Valeur_Achat_Stock FROM Article ";
		}
		System::String^ AffTout() {
			return "SELECT * FROM Client";
		}
		void setMC(System::String^ mc) {
			this->MC = mc;
		}
		void setRC(System::String^ rc) {
			this->RC = rc;
		}
		void setDI(System::String^ di) {
			this->DI = di;
		}
		void setID(int id) {
			this->ID = id;
		}
		void setMOIS(int mois) {
			this->Mois = mois;
		}
		System::String^ getMC() {
			return this->MC;
		}
		System::String^ getRC() {
			return this->RC;
		}
		System::String^ getDI() {
			return this->DI;
		}
		int getID() {
			return this->ID;
		}
		int getMOIS() {
			return this->Mois;
		}
	};
}
