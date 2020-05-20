#include "wl.h"

#include <stdlib.h>
#include <stdbool.h>
#include <wayland-client.h>

#include "../log.h"

struct window_wl {
};

struct wl_display *display;

void wl_init(void) {
        display = wl_display_connect(NULL);
        if (display == NULL) {
                LOG_E("Failed to connect to wayland\n");
        }
        printf("WL: %p\n", display);
}

void wl_deinit(void) {
        wl_display_disconnect(display);
}

window wl_win_create(void) {
        struct window_wl *win = g_malloc0(sizeof(struct window_wl));
        return win;
}

void wl_win_destroy(window win) {

}

void wl_win_show(window win) {

}

void wl_win_hide(window win) {

}

void wl_display_surface(cairo_surface_t *srf, window win, const struct dimensions* dim) {

}

bool wl_win_visible(window win) {
        return false;
}

cairo_t* wl_win_get_context(window win) {
        return NULL;
}

const struct screen_info* wl_get_active_screen(void) {
        return false;
}

bool wl_is_idle(void) {
        return false;
}
bool wl_have_fullscreen_window(void) {
        return false;
}
