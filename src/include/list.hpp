#include <iostream>
#include <vector>

class List {

    // only the class itself
    private:

    // inherited or belongs to class
    protected:

    public:

        List() {
            // constructor

        }
        ~List() {
            // deconstructor

        }

        std::vector<std::vector<std::string>> mainList;
        std::vector<std::string> list;
        std::string name;
        long unsigned int currentUserIndex;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
        bool find_userList();
        void save_list();


};