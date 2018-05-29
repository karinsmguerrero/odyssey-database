//
// Created by karina on 27/05/18.
//

#include "Userdata.h"

 std::string Userdata::getUsername()  {
    return username;
}

void Userdata::setUsername( std::string username) {
    Userdata::username = username;
}

 std::string Userdata::getPassword()  {
    return password;
}

void Userdata::setPassword( std::string password) {
    Userdata::password = password;
}

 std::string Userdata::getFriends[]()  {
    return friends;
}

 std::string Userdata::getPreferences[]()  {
    return preferences;
}

void Userdata::setPreferences( std::string preferences[]) {
    Userdata::preferences = preferences;
}

Userdata::Userdata() {
    this->username = "";
    this->password = "";
    this->friends = nullptr;
    this->preferences = nullptr;
}

Userdata::Userdata(std::string username, std::string password, std::string friends[], std::string preferences[]) {
    this->username = username;
    this->password = password;
    this->friends = friends;
    this->preferences = preferences;
}
