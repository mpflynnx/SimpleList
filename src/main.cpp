#include "include/list.hpp"
#include "include/database.hpp"

int main(int arg_count, char *args[]){

    List simpleList;
    Database data;

    if (arg_count > 1) {

        simpleList.name = std::string(args[1]);
        simpleList.mainList = data.read();
        simpleList.find_userList();
        simpleList.print_menu();

    }
    else {

        std::cout << "Username not supplied.. exiting the program" << std::endl;

    }

    return 0;

}
