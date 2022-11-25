cmake_minimum_required(VERSION 3.23)
project(assignment_POO)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src/exceptions)
include_directories(src/objects/animal)
include_directories(src/objects/auxiliary_objects)
include_directories(src/objects/classificacao_cientifica)
include_directories(src/system/CRUD)
include_directories(src/system/GUI)

add_executable(assignment_POO
        src/exceptions/temp.hpp
        src/objects/animal/implementation/animal.cpp
        src/objects/animal/implementation/biologist.cpp
        src/objects/animal/implementation/localization.cpp
        src/objects/animal/animal.hpp
        src/objects/animal/biologist.hpp
        src/objects/animal/localization.hpp
        src/objects/auxiliary_objects/implementation/general_functions.cpp
        src/objects/auxiliary_objects/general_functions.hpp
        src/objects/classificacao_cientifica/implementation/class.cpp
        src/objects/classificacao_cientifica/implementation/family.cpp
        src/objects/classificacao_cientifica/implementation/genus.cpp
        src/objects/classificacao_cientifica/implementation/kingdom.cpp
        src/objects/classificacao_cientifica/implementation/order.cpp
        src/objects/classificacao_cientifica/implementation/phylum.cpp
        src/objects/classificacao_cientifica/implementation/species.cpp
        src/objects/classificacao_cientifica/class.hpp
        src/objects/classificacao_cientifica/family.hpp
        src/objects/classificacao_cientifica/genus.hpp
        src/objects/classificacao_cientifica/kingdom.hpp
        src/objects/classificacao_cientifica/order.hpp
        src/objects/classificacao_cientifica/phylum.hpp
        src/objects/classificacao_cientifica/species.hpp
        src/system/CRUD/implementation/crud.cpp
        src/system/CRUD/crud.hpp
        src/system/GUI/implementation/menu.cpp
        src/system/GUI/colors.hpp
        src/system/GUI/menu.hpp
        _config.hpp
        main.cpp)
