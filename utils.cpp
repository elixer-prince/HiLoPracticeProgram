#include "utils.h"
#include <iostream>

/**
 * This function clears the console window
 *
 * @return void
 * */
void clearScreen() {
    // This checks if the player is on Windows and asumes they are on Unix otherwise
    // This allows it to call the right command basedon the OS of the player.
    #if defined(_WIN32) || defined(WIN32)
        std::system("cls");
    #else
        std::system("clear");
    #endif
}
