#pragma once

ref class CL_client
{
private:
	int ID;
public:
	CL_client() {
		//RIEN
	}
	System::String^ AFFICHER(void) {
		return "SELECT * FROM Client WHERE Id_Client = " + this->getID() + " ";
	}
	void setID(int sID) {
		this->ID = sID;
	}
	int getID() {
		return ID;
	}
};

