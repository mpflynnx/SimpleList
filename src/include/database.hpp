#include <iostream>
#include <vector>
#include <fstream>

class Database {

    // only the class itself
    private:

    // inherited or belongs to class
    protected:

    public:

        Database() {
            // constructor

        }
        ~Database() {
            // deconstructor

        }


        std::vector<std::vector<std::string>> mainlist;

        std::string name;

        void write(std::vector<std::vector<std::string>> mainlist);

        std::vector<std::vector<std::string>> read();


};