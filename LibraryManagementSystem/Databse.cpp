#include "Database.h"

Database* Database::instance = nullptr;

Database* Database::getInstance() {
    if (instance == nullptr) {
        instance = new Database();
    }
    return instance;
}

void Database::executeQuery(const string& query) {
    cout << "Executing query: " << query << endl;
}
