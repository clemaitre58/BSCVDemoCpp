//  Copyright Cedric Lemaitre 2018

#include "passager_reader.hpp"

PassagerReader::PassagerReader(const std::string & file_name) {
    nb_col_csv = 15; 
    filename = file_name;
    std::ifstream if_file;
    if_file.open(file_name.c_str());
    std::string val_line;
    while (if_file.good()) {
        getline(if_file, val_line);
        parse_line(val_line);
    }
}// end PassagerReader


void PassagerReader::parse_line(std::string line) {
    bool survived;  ///< survived or not
    int pclass;  ///< range class
    bool sex;  ///< male true, female 0
    int age;
    int slbsp;  ///< see owner for wahit for
    int parch;  ///< see owner for wahit for
    int fare;
    std::string embarked;
    std::string type_class;
    std::string who;
    bool adult_male;
    std::string deck;
    std::string embark_town;
    bool alive;
    bool alone;
    std::stringstream line_stream(line);
    std::string cell;
    int count = 0;
    
    while (std::getline(line_stream, cell, ',')) {
        switch (count) {
            case 0: 
                if (cell == "1") survived = true;
                else survived = false;
                count ++;
                break;
            case 1:
                pclass = atoi(cell.c_str());
                count ++;
                break;
            case 2:
                if (cell == "male") sex = true;
                else sex = false;
                count ++;
                break;
            case 3:
                age = atoi(cell.c_str());
                count ++;
                break;
            case 4:
                slbsp = atoi(cell.c_str());
                count ++;
                break;
            case 5:
                parch = atoi(cell.c_str());
                count ++;
                break;
            case 6:
                fare = atoi(cell.c_str());
                count ++;
                break; 
            case 7:
                embarked = cell;
                count ++;
                break; 
            case 8:
                type_class = cell;
                count ++;
                break; 
            case 9:
                who = cell;
                count ++;
                break; 
            case 10:
                if (cell == "1") adult_male= true;
                else adult_male = false;
                count ++;
                break;
            case 11:
                deck = cell;
                count ++;
                break;
            case 12:
                embark_town = cell;
                count ++;
                break;
            case 13:
                if (cell == "yes") alive = true;
                else alive = false;
                count ++;
                break;
            case 14:
                if (cell == "1") alone = true;
                else alone = false;
                count ++;
                break;
            default:
                std::cout << "Warning : value of count in [0, 14]\n";
                
        }
    }


}
