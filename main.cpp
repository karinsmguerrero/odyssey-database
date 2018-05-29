#include <iostream>
#include "DataBase/QueryManager.h"
#include "DataBase/Query.h"
#include "XML/XML_Editor.h"

int main() {
    Query query;
    SimpleLinkedList<Metadata> tracksList = query.getAllTracks();
/*    Node<Metadata> *data = tracksList.getHead();
    for(int i = 0; i < tracksList.getSize(); i++){
        std::cout << "Song name: " << data->getData().getSongName() << std::endl;
        std::cout << "Artist: " << data->getData().getArtist() << std::endl;
        std::cout << "Album: " << data->getData().getAlbum() << std::endl;
        std::cout << "Duration: " << data->getData().getDuration() << std::endl;
        std::cout << "Genre: " << data->getData().getGenre() << std::endl;
        std::cout << "Year: " << data->getData().getYear() << std::endl;
        data = data->getNext();
        std::cout << "------#######------" << std::endl;
    }

    std::cout << "-----------------------------------------" << std::endl;*/
    XML_Editor editor;
    std::cout << editor.writeUploadRequest(tracksList.getHead()->getData(), "000001011010101101101110") << std::endl;
    return 0;
}