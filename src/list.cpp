#include "include/list.hpp"

void List::print_menu() {
    int choice;

    std::cout << "**********************\n";
    std::cout << " 1 - Print list.\n";
    std::cout << " 2 - Add to list.\n";
    std::cout << " 3 - Delete from list.\n";
    std::cout << " 4 - Quit.\n";
    std::cout << "\n Enter your choice and press return/enter key.\n";

    std::cin >> choice;

    if (choice == 4){
        exit(0);
    }
    else if (choice == 3){
        delete_item();
    }
    else if (choice == 2){
        add_item();
    }
    else if (choice == 1){
        print_list();
    }
    else {
        std::cout << " Sorry invalid choice.\n";
        exit(0);
    }
}

void List::add_item() {

    std::cout << "\n\n\n\n";
    std::cout << "*** Add Item ***\n";
    std::cout << "Type in a item and press enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);

    std::cout << "Successfully added an item to the list \n\n\n\n";
    std::cin.clear();

    print_menu();

}

void List::delete_item(){
    std::cout << "\n\n\n\n";
    std::cout << "*** Delete Item ***\n";
    std::cout << "Type in a item index number and press enter: ";

    if (list.size()){

        for(long unsigned int i=0; i < list.size(); i++){

            std::cout << i << ":  " << list[i] << "\n";

        }

    } else {
        std::cout << "No items in the list or to delete.\n";
    }

    print_menu();
}

void List::print_list(){
    std::cout << "\n\n\n\n";
    std::cout << "*** Printing List ***\n";

    if (list.size()){

        for(long unsigned int  i=0; i < list.size(); i++){

            std::cout << " * " << list[i] << "\n";

        }

    } else {
        std::cout << "No items in the list.\n";
    }

}