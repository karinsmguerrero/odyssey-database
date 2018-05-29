#include <iostream>
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    XML_Editor xml;
    std::string message = xml.writeAlbumSearchRequest("Sorry sorry");
    std::cout << message << std::endl;
    SimpleLinkedList<Metadata> tracksList = query.getAllTracks();

    XML_Editor editor;
    std::cout << editor.writeUploadRequest(tracksList.getHead()->getData(), "000001011010101101101110") << std::endl;
    return 0;
}