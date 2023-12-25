#pragma once
/**
	@file		Denisov_Class_train.h
	@brief		������������ ���� ������ Train
	@copyright	����
	@author		������� �.�.
	@date		26-12-2023
	@version	1.0.0
\par ���������� ������:
	@ref Denisov_Class_train
\par �������� �����:
	@ref Denisov_Class_train
*/

/// ����� �������� �������
/** �������� ������ ������� � ������ ������ � ����
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Denisov_Class_train
{
protected:
	string _destination;			///< ����� ����������
	int _train_number;				///< ����� ������
	string _departure_time;			///< ����� �����������
	int _number_of_common_seates;	///< ����� ����� ����
	int _number_of_reserved_seats;	///< ����� �������� ����
	int _number_of_compartments;	///< ����� ����������� ����
public:
	/// ����������� ��� ���������� ������ �������� �� ��������� ������
	/** ������� ������ ������� �� ��������� ������
	\param train_number ����� ������
	\param destination
	*/

	void DenisovSearchPoezdaDoZadanogo(int train_number, string destination) {

	}

	/// ����������� ��� ���������� ������ �������� �� ��������� ������ � ���������� �������
	/** ������� ������ ������� �� ��������� ������ � �������
	*/

	void DenisovSearchPoezdaDoZadanogoIDoChasa(int train_number, string destination, string departure_time) {

	}
	/// ����������� ��� ���������� ������ �������� �� ��������� ������ � �������� ����� �����
	/** ������� ������ ������� �� ��������� ������ � �������� ����� �����
	*/
	void DenisovSearchPoezdaDoZadanogoIObshieMesta(int train_number, string destination, int number_of_common_seates) {

	}
	/// ����������� ����������� �������
	~Denisov_Class_train(void);

private:
	
};

