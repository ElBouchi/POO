#pragma once

namespace NS_Composants {

	ref class CL_Commande
	{
	private:
		System::String^ reference;
		System::String^ reference2;
		System::String^ adresseLiv;
		System::String^ dateLiv;
		System::String^ dateEmi;
		System::String^ datePay;
		System::String^ moyen;
		System::String^ NomC;
		System::String^ PrenomC;
		int quantite;
		double remise;
	public:
			CL_Commande() {
			//RIEN
			}

			System::String^ AFFICHER(void) {

			return "SELECT * FROM Commande WHERE reference_commande = '" + getRef() + "'  ";

			}
			System::String^ AFFICHERdatagrid(void) {

				return "SELECT [Commande].reference_commande, Date_de_livraison, Date_d_emission, Date_de_paiement, Moyen_de_paiement, Quantite_Total_Articles, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Remise, [Commande].Id_Client, Nom, Prenom, [Contient].reference_article, designation, Quantité_article  FROM Commande INNER JOIN Client ON [Commande].Id_Client = [Client].Id_Client INNER JOIN Contient ON [Contient].reference_commande = [Commande].reference_commande INNER JOIN Article ON [Article].reference_article = [Contient].reference_article WHERE [Commande].reference_commande = '" + getRef() + "' ";

			}


			System::String^ SUPPRIMER(void) {

			return "DELETE FROM Commande WHERE reference_commande = '" + getRef() + "'  ";

			}
			System::String^ AJOUTER(void) {

			return  "INSERT INTO Commande (reference_commande, Date_de_livraison, Date_d_emission, Date_de_paiement, Moyen_de_paiement, Id_Client) VALUES ('" + this->getRef() + "', '" + this->getDateLiv() + "', '" + this->getDateEmI() + "', '" + this->getDatePay() + "', '" + this->getMoyen() + "', (SELECT Id_Client FROM Client WHERE Nom = '" + this->getNomC() + "' AND Prenom = '" + this->getPrenomC() + "') ) ";

			}

			System::String^ MODIFIER(void) {

				return  "UPDATE Commande SET reference_commande = '" + this->getRef2() + "', Date_de_livraison = '" + this->getDateLiv() + "', Date_d_emission = '" + this->getDateEmI() + "', Date_de_paiement = '" + this->getDatePay() + "', Moyen_de_paiement = '" + this->getMoyen() + "', Remise = " + this->getRemise() + ", Id_Client = (SELECT Id_Client FROM Client WHERE Nom = '" + this->getNomC() + "' AND Prenom = '" + this->getPrenomC() + "') WHERE reference_commande = '" + this->getRef() + "' ";

			}

			void setRef(System::String^ reference) {
				this->reference = reference;
			}
			System::String^ getRef() {
				return reference;
			}
			void setAdresseLiv(System::String ^ adresseLiv) {
				this->adresseLiv = adresseLiv;
			}
			System::String^ getAdresseLiv() {
				return adresseLiv;
			}
			void setDateLiv(System::String ^ dateLiv) {
				this->dateLiv = dateLiv;
			}
			System::String^ getDateLiv() {
				return dateLiv;
			}
			void setDateEmi(System::String ^ dateEmi) {
				this->dateEmi = dateEmi;
			}
			System::String^ getDateEmI() {
				return dateEmi;
			}

			void setDatePay(System::String ^ datePay) {
				this->datePay = datePay;
			}
			System::String^ getDatePay() {
				return datePay;
			}

			void setMoyen(System::String ^ moyen) {
				this->moyen = moyen;
			}
			System::String^ getMoyen() {
				return moyen;
			}
			void setQuantite(int quantite) {
				this->quantite = quantite;
			}
			int getQuantite() {
				return quantite;
			}
			void setRemise(double remise) {
				this->remise = remise;
			}
			double getRemise() {
				return remise;
			}
			void setNomC(System::String^ nomc) {
				this->NomC = nomc;
			}
			System::String^ getNomC() {
				return NomC;
			}
			void setPrenomC(System::String^ prenomc) {
				this->PrenomC = prenomc;
			}
			System::String^ getPrenomC() {
				return PrenomC;
			}
			void setRef2(System::String^ reference2) {
				this->reference2 = reference2;
			}
			System::String^ getRef2() {
				return reference2;
			}
		};
	}