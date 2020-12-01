#pragma once

ref class CAD
{
private:
	System::String^ cnx;
	System::String^ rq_sql;
	System::Data::SqlClient::SqlConnection^ CNX;
	System::Data::SqlClient::SqlCommand^ CMD;
	System::Data::SqlClient::SqlDataAdapter^ DA;
	void setSQL(System::String^) {

	}
public:
	CAD() {
		this->rq_sql = "RIEN";
		this->cnx = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		this->CNX = gcnew System::Data::SqlClient::SqlConnection(this->cnx);
		this->CMD = gcnew System::Data::SqlClient::SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = System::Data::CommandType::Text;
	}
	void requete(System::String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
	}
};

