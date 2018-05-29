//
// Created by karina on 24/05/18.
//

#include <fstream>
#include <iostream>
#include "QueryManager.h"

std::string QueryManager::readAll() {
    // read a JSON file
    std::ifstream i("../DataBase/database.json");
    nlohmann::json j;
    /*i >> j;

    nlohmann::json us = j.at("users")[0];
    if(us.at("username") == "KMG"){
        std::cout << "aaaaa" << std::endl;
    }
*/

    /*// special iterator member functions for objects
    for (nlohmann::json::iterator it = j.begin(); it != j.end(); ++it) {
        //std::string val = it.key();
                if(it.key() == "users"){
                    nlohmann::basic_json f = it[0];
                    std::cout << it.key() << " : " << it.value() << "\n";
                    std::cout << f.key() <<  " : " << f.value() << std::endl;
                }

    }*/

/*// write prettified JSON to another file
    std::ofstream o("../DataBase/output.json");
    o << std::setw(2) << j << std::endl;*/
}

void QueryManager::writefile() {
    // create an empty structure (null)
       nlohmann::json j;

   // add a number that is stored as double (note the implicit conversion of j to an object)
       j["pi"] = 3.141;

   // add a Boolean that is stored as bool
       j["happy"] = true;

   // add a string that is stored as std::string
       j["name"] = "Niels";

   // add another null object by passing nullptr
       j["nothing"] = nullptr;

   // add an object inside the object
       j["answer"]["everything"] = 42;

   // add an array that is stored as std::vector (using an initializer list)
       j["list"] = { 1, 0, 2 };

   // add another object (using an initializer list of pairs)
       j["object"] = { {"currency", "USD"}, {"value", 42.99} };

    // write prettified JSON to another file
    std::ofstream o("../DataBase/output.json");
    std::cout << j << std::endl;
    o << std::setw(4) << j << std::endl;
}

