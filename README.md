# SpaceInvaders
Техноатом Mail.ru & МИФИ
Выпускной проект группы C++11: Дмитрий Петрищев, Дмитрий Иванов

If you wanted to play "Space Invaders", you should do next steps:
1)$ git clone https://github.com/DmitryPetrishchev/SpaceInvaders.git (or git@github.com:DmitryPetrishchev/SpaceInvaders.git)
2)$ cmake CMakeLists.txt
3)$ make
4)$ ./game

If cmake threw the error:
"Could not find a package configuration file provided by "Qt5OpenGL" with any of the following names:
    Qt5OpenGLConfig.cmake
    qt5opengl-config.cmake",
you should try to install some packages:
$ sudo apt-get install libqt5opengl5-dev

Also don't forget to install googletests:
$ git submodule init
$ git submodule update

Good luck!
