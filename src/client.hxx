#include <X11/X.h>
#include <xcb/xcb.h>
#include <xcb/xproto.h>

class Client {
    private:
    xcb_window_t childWin;
    xcb_window_t parentWin;
    xcb_window_t rootWin;
    xcb_connection_t * connection;
    xcb_window_t createParent(int width, int height, xcb_screen_t * scr);
    public:
    Client(
        xcb_connection_t * connection,
        xcb_window_t win, xcb_window_t rootWin, xcb_screen_t * screen
    );
};