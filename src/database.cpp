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


std::vector<std::vector<std::string>> Database::read() {

    std::string line;

    std::ifstream db;
    db.open("db/list.sl");

    std::vector<std::string> userList;
    std::vector<std::vector<std::string>> mainList;

    if (db.is_open()) {

        while( getline(db, line, '\n')) {

            if (line.front() == '#') { // Find username

                std::cout << "Found # " << line << '\n'; // debug

                line.erase(line.begin()); // erase first char i.e. '#'

                userList.push_back(line);

            } 
            
            else if (line.front() == '%') { // Find end of users list i.e '%'

                std::cout << "Found %" << line << '\n'; // debug

                mainList.push_back(userList);
                userList.clear();

            }

            else { // Found list item

                std::cout << "Found an item: " << line << '\n';
                userList.push_back(line);

            }

        }

    } 
    
    else {

        std::cout << "Error, cannot open file for reading./n";

    }


    db.close();

    return mainList;


}

