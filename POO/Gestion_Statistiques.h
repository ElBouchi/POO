#pragma once

#include "CL_Statistiques.h"
#include"CAD.h"

namespace NS_SVC {
	ref class Gestion_Statistiques
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_Statistiques^ statistiques;
	public:
		Gestion_Statistiques(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->statistiques = gcnew NS_Composants::CL_Statistiques();
		}
		void Afficher(System::String^ mc, System::String^ rc, System::String^ di, System::String^ rq, System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			statistiques->setMC(mc);
			statistiques->setRC(rc);
			statistiques->setDI(di);
			cad->requete(rq);
			cad->close();
			cad->datagrid(rq, bindingsource, datagridview);
		}
		void Panier(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->Panier());
			cad->close();
			cad->datagrid(statistiques->Panier(), bindingsource, datagridview);
		}
		void Seuil(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->Seuil());
			cad->close();
			cad->datagrid(statistiques->Seuil(), bindingsource, datagridview);
		}
		void pVendus(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->pVendus());
			cad->close();
			cad->datagrid(statistiques->pVendus(), bindingsource, datagridview);
		}
		void mVendus(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->mVendus());
			cad->close();
			cad->datagrid(statistiques->mVendus(), bindingsource, datagridview);
		}
		void ChiffreAff(int mois, System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			statistiques->setMOIS(mois);
			cad->requete(statistiques->ChiffreAff());
			cad->close();
			cad->datagrid(statistiques->ChiffreAff(), bindingsource, datagridview);
		}
		void TotalAchat(int id, System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			statistiques->setID(id);
			cad->requete(statistiques->TotalAchat());
			cad->close();
			cad->datagrid(statistiques->TotalAchat(), bindingsource, datagridview);
		}
		void ValeurAchat(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->ValeurAchat());
			cad->close();
			cad->datagrid(statistiques->ValeurAchat(), bindingsource, datagridview);
		}
		void AffTout(System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			cad->requete(statistiques->AffTout());
			cad->close();
			cad->datagrid(statistiques->AffTout(), bindingsource, datagridview);
		}
	};
}
