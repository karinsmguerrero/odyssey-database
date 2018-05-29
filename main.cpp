#include <iostream>
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    Metadata metadata("Superman", "", "Superman", "", "kpop", "2013");
    //query.addNewTrack(metadata);
    SimpleLinkedList<std::string> friends, preferences;
    friends.insertRear("Bryan");
    friends.insertRear("KMG");
    preferences.insertRear("funk");
    Userdata userdata("Jojo","12345",friends,preferences);
    query.addNewUser(userdata);

    return 0;
}