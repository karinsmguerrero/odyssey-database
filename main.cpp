#include <iostream>
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    SimpleLinkedList<Metadata> tracksList = query.getAllTracks();

    XML_Editor editor;
    std::cout << editor.writeUploadRequest(tracksList.getHead()->getData(), "000001011010101101101110") << std::endl;
    return 0;
}