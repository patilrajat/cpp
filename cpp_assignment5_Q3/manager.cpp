/*
 * manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "employee.h"
#include "manager.h"

manager::manager() {
	this->bonus = 0.0f;
}

/*
manager::manager(int id, float sal, float bonus) {
	this->bonus = bonus;
	this->set_id(id);
	this->set_sal(sal);
}
*/

manager::manager(int id,float sal,float bonus):employee(id,sal)
	{
	this->bonus = bonus;
}
void manager::accept()
{
	employee::accept();

	cout << "bonus: ";
	cin >> this->bonus;
	}

void manager::display() {
	employee::display();
	cout << "bonus: " << this->bonus << endl;
	}

float manager::get_bonus() {
	return this->bonus;
}
void manager::set_bonus(float bonus) {
	this->bonus = bonus;
}
void manager::display_manager()
{
	cout<<"bonus:"<<this->bonus<<endl;
}
void manager::accept_manager()
{
	cout<<"bonus:"<<endl;
	cin>>this->bonus;
}

/*
void manager::display() {
	cout << "id: " << this->get_id() << endl;
	cout << "sal: " << this->get_sal() << endl;
	cout << "bonus: " << this->bonus << endl;
}
*/
manager::~manager() {
}
