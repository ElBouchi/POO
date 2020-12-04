#pragma once

#include "CAD.h"
#include "CL_client.h"

namespace NS_SVC {
	ref class Gestion_Client
	{
private:
	NS_Composants::CAD^ cad;
	NS_Composants::CL_client^ client;
public:
	Gestion_Client(void) {
		this->cad = gcnew NS_Composants::CAD();
		this->client = gcnew NS_Composants::CL_client();
	}
	void afficherByID(int ID, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
		client->setID(ID);
		cad->requete(client->AFFICHERbyID());
		cad->readClient(textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7);
		cad->datagrid(client->AFFICHERbyID(), bindingsource2, datagridview2);
	}
	void afficherByNom(System::String^ Nom, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
		client->setNom(Nom);
		cad->requete(client->AFFICHERbyNom());
		cad->readClient(textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7);
		cad->datagrid(client->AFFICHERbyNom(), bindingsource2, datagridview2);
	}
	void afficherByPrenom(System::String^ Prenom, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
		client->setPrenom(Prenom);
		cad->requete(client->AFFICHERbyPrenom());
		cad->readClient(textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7);
		cad->datagrid(client->AFFICHERbyPrenom(), bindingsource2, datagridview2);
	}
	void supprimer(int ID) {
		client->setID(ID);
		cad->requete(client->SUPPRIMER());
	}
	void ajouter(System::String^ Nom, System::String^ Prenom, System::String^ dateNai, System::String^ dateAchat, System::String^ adresseFac, System::String^ adresseLiv) {
		client->setNom(Nom);
		client->setPrenom(Prenom);
		client->setdateNai(dateNai);
		client->setdateAchat(dateAchat);
		client->setadresseFac(adresseFac);
		client->setadresseLiv(adresseLiv);
		cad->requete(client->AJOUTER());
	}
	void modifier(int ID, System::String^ Nom, System::String^ Prenom, System::String^ dateNai, System::String^ dateAchat, System::String^ adresseFac, System::String^ adresseLiv) {
		client->setID(ID);
		client->setNom(Nom);
		client->setPrenom(Prenom);
		client->setdateNai(dateNai);
		client->setdateAchat(dateAchat);
		client->setadresseFac(adresseFac);
		client->setadresseLiv(adresseLiv);
		cad->requete(client->MODIFIER());
	}
	};
}

