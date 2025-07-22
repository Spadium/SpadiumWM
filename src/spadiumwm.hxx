#include <xcb/xcb.h>
#include <xcb/xproto.h>
class SpadiumWM {
    public:
    xcb_connection_t * conn;
    xcb_window_t root;
};

