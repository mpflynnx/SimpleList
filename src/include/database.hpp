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


        std::vector<std::string> list;

        std::string name;

        void write(std::vector<std::string> list);
        void read();


};