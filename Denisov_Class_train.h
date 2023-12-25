#pragma once
/**
	@file		Denisov_Class_train.h
	@brief		Заголовочный файл класса Train
	@copyright	ВоГУ
	@author		Денисов М.С.
	@date		26-12-2023
	@version	1.0.0
\par Использует классы:
	@ref Denisov_Class_train
\par Содержит класс:
	@ref Denisov_Class_train
*/

/// Класс описания поездов
/** Содержит данные поездов и методы работы с ними
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Denisov_Class_train
{
protected:
	string _destination;			///< Пункт назначения
	int _train_number;				///< Номер поезда
	string _departure_time;			///< Время отправления
	int _number_of_common_seates;	///< Число общих мест
	int _number_of_reserved_seats;	///< Число купейных мест
	int _number_of_compartments;	///< Число плацкартных мест
public:
	/// Конструктор для заполнения списка поездами до заданного пункта
	/** Создает список поездов до заданного пункта
	\param train_number номер поезда
	\param destination
	*/

	void DenisovSearchPoezdaDoZadanogo(int train_number, string destination) {

	}

	/// Конструктор для заполнения списка поездами до заданного пункта и выбранного времени
	/** Создает список поездов до заданного пункта и времени
	*/

	void DenisovSearchPoezdaDoZadanogoIDoChasa(int train_number, string destination, string departure_time) {

	}
	/// Конструктор для заполнения списка поездами до заданного пункта и имеющими общие места
	/** Создает список поездов до заданного пункта и имеющими общие места
	*/
	void DenisovSearchPoezdaDoZadanogoIObshieMesta(int train_number, string destination, int number_of_common_seates) {

	}
	/// Декструктор освобождает ресурсы
	~Denisov_Class_train(void);

private:
	
};

