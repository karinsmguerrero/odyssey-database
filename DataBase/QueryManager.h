//
// Created by karina on 24/05/18.
//

#ifndef MAIN_QUERYMANAGER_H
#define MAIN_QUERYMANAGER_H


#include <string>
#include "../Server/json.hpp"

class QueryManager {
public:
    std::string readAll();
    void writefile();

};


#endif //MAIN_QUERYMANAGER_H
