/**
 * \mainpage
Лабораторна робота №10

Коломійцев В.О.:КН-922Б

27.05.2023

 */

/*!
\file main.c
\brief Головний файл

Це файл, який містить точку входу,
виклики функцій filter_arr та значення для аргументів цих функцій.
*/

#include "lib.h"




int main()
{
	int arr_const[] = { 23, 89, 89, 23, 67, 89, 0, 37, 37 };
	int *arr = arr_const;
	int qua_elemnts = 8;

	filter_arr(arr, qua_elemnts, 0);

	return 0;
}
