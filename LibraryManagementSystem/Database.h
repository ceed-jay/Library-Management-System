#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <iostream>
using namespace std;

class Database {
private:
    static Database* instance;

    Database() { cout << "Database connection established.\n"; }

public:
    static Database* getInstance();
    void executeQuery(const string& query);
};

#endif
