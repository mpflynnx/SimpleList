#include "include/database.hpp"

void Database::write(std::vector<std::string> list) {
    

    std::ofstream db;
    db.open("db/list.sl");

    if (db.is_open()) {

        for(long unsigned int  i=0; i < list.size(); i++){

            db << list[i] << '\n';

        }

    } 
    
    else {

        std::cout << "Error, cannot open file for writing./n";

    }


    db.close();

}


void Database::read() {

    std::string line;

    std::ifstream db;
    db.open("db/list.sl");

    if (db.is_open()) {

        while( getline(db, line, '\n')) {

            std::cout << line << '\n';

        }

    } 
    
    else {

        std::cout << "Error, cannot open file for reading./n";

    }


    db.close();


}

