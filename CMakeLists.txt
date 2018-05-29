cmake_minimum_required(VERSION 3.10)
project(ServerDataBase)

set(CMAKE_CXX_STANDARD 11)

add_executable(ServerDataBase main.cpp DataBase/QueryManager.cpp Server/json.hpp DataBase/Query.cpp DataBase/Query.h DataBase/Metadata.cpp DataBase/Metadata.h XML/pugixml.cpp XML/XML_Editor.cpp DataBase/Userdata.cpp DataBase/Userdata.h)