#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>

Display *display;
Window rootWindow;

int main(void) {
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        printf("Could not open display! Exiting...\n");
        return -1;
    }
    rootWindow = DefaultRootWindow(display);

    XCloseDisplay(display);
    return 0;
}