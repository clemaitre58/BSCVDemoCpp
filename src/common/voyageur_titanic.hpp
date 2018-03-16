#ifndef VOYAGE_TITANIC_HPP
#define VOYAGE_TITANIC_HPP

# include <string> 

class VoyageurTitanic{

	private:
		int survived;
		int pclass;
		std::string sex;
		double age;
		int sibsp;
		int parch;
		double fare;
		std::string embarked;
		std::string nclass;
		std::string who;
		bool adult_male;
		std::string deck;
		std::string embark_town;
		bool alive;
		bool alone;

	public :
		VoyageurTitanic(
				int,
				int,
				std::string,
				double,
				int,
				int,
				double,
				std::string,
				std::string,
				std::string,
				bool,
				std::string,
				std::string,
				bool,
				bool);
};


#endif 
