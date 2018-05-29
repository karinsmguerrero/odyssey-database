//
// Created by karina on 27/05/18.
//

#ifndef SERVERDATABASE_USERDATA_H
#define SERVERDATABASE_USERDATA_H


#include <string>

class Userdata {
private:
    std::string username;
    std::string password;
    std::string friends[];
    std::string preferences[];
public:
    Userdata();

    Userdata(std::string username, std::string password, std::string friends[], std::string preferences[]);

    std::string getUsername();

    void setUsername(std::string username);

    std::string getPassword();

    void setPassword(std::string password);

    std::string getFriends[]();

    void setFriends(std::string friends[]);

    std::string getPreferences[]();

    void setPreferences(std::string preferences[]);

};


#endif //SERVERDATABASE_USERDATA_H
