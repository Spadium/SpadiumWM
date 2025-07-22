#include "spadiumwm.hxx"

#include <X11/X.h>
#include <X11/Xlib.h>
#include <cstdio>
#include <cstdlib>
#include <xcb/xcb.h>
#include <xcb/xcb_atom.h>
#include <xcb/xinerama.h>
#include <iostream>
#include <unistd.h>

// Display *display;
// Window rootWindow;
xcb_connection_t *connection;
int screen;

void exit_error(int status, const char* msg) {
    std::cerr << "Error: " << msg << "\n";
    exit(status);
}

int main(void) {
    connection = xcb_connect(NULL, &screen);
    if (xcb_connection_has_error(connection)) {
        exit_error(1, "Couldn't connect to X Server! Exiting");
    }
    pause();
    xcb_disconnect(connection);
    return 0;
}