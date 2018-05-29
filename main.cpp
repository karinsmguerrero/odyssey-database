#include <iostream>
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    //Metadata metadata("Superman", "", "Superman", "", "kpop", "2013");
    //query.addNewTrack(metadata);
    SimpleLinkedList<std::string> friends;
    SimpleLinkedList<std::string> preferences;
    /*friends.insertRear("Bryan");
    friends.insertRear("KMG");*/
    preferences.insertFront("funk");
    preferences.insertFront("rock");

    //Userdata userdata("Jojo","12345", friends, preferences);
    //preferences.print();
    Node<std::string> *nonde = preferences.getHead();
    for(int s = 0; s < preferences.getSize(); s++){
        std::cout << nonde->getData() << std::endl;
        nonde = nonde->getNext();
    }
    //query.addNewUser(userdata);
    /*SimpleLinkedList<int> dd;
    dd.insertRear(1);
    dd.insertRear(2);
    dd.insertFront(0);
    dd.print();*/
    return 0;

    return 0;
}