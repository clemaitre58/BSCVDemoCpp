#include "voyageur_titanic.hpp"

VoyageurTitanic::VoyageurTitanic(
		int survived,
		int pclass,
		std::string sex,
		double age,
		int sibsp,
		int parch,
		double fare,
		std::string embarked,
		std::string nclass,
		std::string who,
		bool adult_male,
		std::string deck,
		std::string embark_town,
		bool alive,
		bool alone){


	this->survived = survived;
 	this->pclass = pclass;
	this->sex = sex;
	this->age = age;
	this->sibsp = sibsp;
	this->parch = parch;
	this->fare = fare;
	this->embarked = embarked;
	this->nclass = nclass;
	this->who = who;
	this->adult_male = adult_male;
	this->deck = deck;
	this->embark_town = embark_town;
	this->alive = alive;
	this->alone = alone;

}

