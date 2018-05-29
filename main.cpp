#include <iostream>
#include <sys/user.h>
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    //Metadata metadata("Superman", "", "Superman", "", "kpop", "2013");
    //query.addNewTrack(metadata);
    SimpleLinkedList<std::string> friends;
    SimpleLinkedList<std::string> preferences;
    friends.insertRear("Bryan");
    friends.insertRear("KMG");
    friends.insertRear("Kimerly");
    friends.insertRear("Cristopher");
    preferences.insertFront("funk");
   preferences.insertFront("rock");

    Userdata userdata("Jojo","12345", friends, preferences);

    query.addNewUser(userdata);

    return 0;
}