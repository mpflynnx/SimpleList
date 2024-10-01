#include "include/database.hpp"

void Database::write(std::vector<std::vector<std::string>> mainList) {
    

    std::ofstream db;
    db.open("db/list.sl");

    if (db.is_open()) {

        for(long unsigned int  user_index=0; user_index < mainList.size(); user_index++){
            for (long unsigned int  list_index=0; list_index < mainList[user_index][list_index].size(); list_index++) {
                db << mainList[user_index][list_index] << '\n';
            }
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

