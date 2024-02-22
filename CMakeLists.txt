cmake_minimum_required(VERSION 3.27)
project(CS221)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS221
        main.cpp
)
add_executable(Example1
        InClassExamples/Example1Main.cpp
        InClassExamples/Example1Child.cpp
        InClassExamples/Example1Child.h
)
add_executable(Example2
        InClassExamples/Example2Main.cpp
)

add_executable(Example3
        InClassExamples/Example3Main.cpp
        InClassExamples/Example3Child.cpp
        InClassExamples/Example3Child.h
)
add_executable(Program1A Assignments/Program1A/TwoDay.cpp Assignments/Program1A/TwoDay.h
        Assignments/Program1A/Overnight.cpp
        Assignments/Program1A/Overnight.h
        Assignments/Program1A/Program1ATester.cpp)
add_executable(Program1B Assignments/Program1B/Package.cpp Assignments/Program1B/Package.h
        Assignments/Program1B/TwoDay.cpp
        Assignments/Program1B/TwoDay.h
        Assignments/Program1B/Overnight.cpp
        Assignments/Program1B/Overnight.h
        Assignments/Program1B/BTester.cpp)
add_executable(Test Testing/Shape.cpp Testing/Shape.h
        Testing/Circle.cpp
        Testing/Circle.h
        Testing/Tester.cpp)
add_executable(Program2 Assignments/Program2/InventoryManager.cpp Assignments/Program2/InventoryManager.h
        Assignments/Program2/Node.cpp
        Assignments/Program2/Node.h
        Assignments/Program2/ItemType.cpp
        Assignments/Program2/ItemType.h
        Assignments/Program2/Tester.cpp)
