#include "client.hxx"
#include <cstddef>
#include <xcb/xcb.h>
#include <xcb/xproto.h>

Client::Client(xcb_connection_t * connection, xcb_window_t win, xcb_window_t rootWin, xcb_screen_t * screen) {
    this->childWin = win;
    this->parentWin = this->createParent(150, 150, screen);
    this->rootWin = rootWin;
    xcb_reparent_window(connection, this->childWin, this->parentWin, 0, 0);
}

xcb_window_t Client::createParent(int width, int height, xcb_screen_t *scr) {
    xcb_window_t window = xcb_generate_id(connection);
    xcb_create_window(
        this->connection, 8, window, rootWin, 0, 0, width, height, 0,
        XCB_WINDOW_CLASS_INPUT_OUTPUT, scr->root_visual,
        0, NULL
    );
    xcb_map_window(connection, window);
    return window;
}