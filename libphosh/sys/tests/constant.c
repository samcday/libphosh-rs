// Generated by gir (https://github.com/gtk-rs/gir @ 5223ce91b97a)
// from ../.. (@ e7336aeb0d1d+)
// from ../../gir-files (@ 6cd7b656acd6)
// DO NOT EDIT

#include "manual.h"
#include <stdio.h>

#define PRINT_CONSTANT(CONSTANT_NAME) \
    printf("%s;", #CONSTANT_NAME); \
    printf(_Generic((CONSTANT_NAME), \
                    char *: "%s", \
                    const char *: "%s", \
                    char: "%c", \
                    signed char: "%hhd", \
                    unsigned char: "%hhu", \
                    short int: "%hd", \
                    unsigned short int: "%hu", \
                    int: "%d", \
                    unsigned int: "%u", \
                    long: "%ld", \
                    unsigned long: "%lu", \
                    long long: "%lld", \
                    unsigned long long: "%llu", \
                    float: "%f", \
                    double: "%f", \
                    long double: "%ld"), \
           CONSTANT_NAME); \
    printf("\n");

int main() {
    PRINT_CONSTANT((gint) PHOSH_ANIMATION_TYPE_EASE_IN_QUINTIC);
    PRINT_CONSTANT((gint) PHOSH_ANIMATION_TYPE_EASE_OUT_BOUNCE);
    PRINT_CONSTANT((gint) PHOSH_ANIMATION_TYPE_EASE_OUT_CUBIC);
    PRINT_CONSTANT((gint) PHOSH_ANIMATION_TYPE_EASE_OUT_QUINTIC);
    PRINT_CONSTANT(PHOSH_APP_AUTH_PROMPT_CHOICES_FORMAT);
    PRINT_CONSTANT((guint) PHOSH_APP_FILTER_MODE_FLAGS_ADAPTIVE);
    PRINT_CONSTANT((guint) PHOSH_APP_FILTER_MODE_FLAGS_NONE);
    PRINT_CONSTANT((gint) PHOSH_APP_GRID_BUTTON_FAVORITES);
    PRINT_CONSTANT((gint) PHOSH_APP_GRID_BUTTON_LAUNCHER);
    PRINT_CONSTANT(PHOSH_APP_UNKNOWN_ICON);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_DRAG_MODE_FULL);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_DRAG_MODE_HANDLE);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_DRAG_MODE_NONE);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_STATE_DRAGGED);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_STATE_FOLDED);
    PRINT_CONSTANT((gint) PHOSH_DRAG_SURFACE_STATE_UNFOLDED);
    PRINT_CONSTANT((gint) PHOSH_END_SESSION_ACTION_LOGOUT);
    PRINT_CONSTANT((gint) PHOSH_END_SESSION_ACTION_REBOOT);
    PRINT_CONSTANT((gint) PHOSH_END_SESSION_ACTION_SHUTDOWN);
    PRINT_CONSTANT(PHOSH_EXTENSION_POINT_LOCKSCREEN_WIDGET);
    PRINT_CONSTANT(PHOSH_EXTENSION_POINT_QUICK_SETTING_WIDGET);
    PRINT_CONSTANT(PHOSH_FOLDERS_SCHEMA_ID);
    PRINT_CONSTANT((gint) PHOSH_HKS_TYPE_MIC);
    PRINT_CONSTANT(PHOSH_HOME_BAR_HEIGHT);
    PRINT_CONSTANT((gint) PHOSH_HOME_STATE_FOLDED);
    PRINT_CONSTANT((gint) PHOSH_HOME_STATE_UNFOLDED);
    PRINT_CONSTANT((gint) PHOSH_LAYOUT_CLOCK_POS_CENTER);
    PRINT_CONSTANT((gint) PHOSH_LAYOUT_CLOCK_POS_LEFT);
    PRINT_CONSTANT((gint) PHOSH_LAYOUT_CLOCK_POS_RIGHT);
    PRINT_CONSTANT((gint) PHOSH_LOCKSCREEN_PAGE_EXTRA);
    PRINT_CONSTANT((gint) PHOSH_LOCKSCREEN_PAGE_INFO);
    PRINT_CONSTANT((gint) PHOSH_LOCKSCREEN_PAGE_UNLOCK);
    PRINT_CONSTANT((gint) PHOSH_MEDIA_PLAYER_STATUS_PAUSED);
    PRINT_CONSTANT((gint) PHOSH_MEDIA_PLAYER_STATUS_PLAYING);
    PRINT_CONSTANT((gint) PHOSH_MEDIA_PLAYER_STATUS_STOPPED);
    PRINT_CONSTANT(PHOSH_MODE_DOCKED_PHONE_MASK);
    PRINT_CONSTANT((guint) PHOSH_MODE_HW_EXT_DISPLAY);
    PRINT_CONSTANT((guint) PHOSH_MODE_HW_KEYBOARD);
    PRINT_CONSTANT((guint) PHOSH_MODE_HW_NONE);
    PRINT_CONSTANT((guint) PHOSH_MODE_HW_POINTER);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_9PinDIN);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_Component);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_Composite);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_DSI);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_DVIA);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_DVID);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_DVII);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_DisplayPort);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_HDMIA);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_HDMIB);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_LVDS);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_SVIDEO);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_TV);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_Unknown);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_VGA);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_VIRTUAL);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_CONNECTOR_TYPE_eDP);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_MANAGER_CONFIG_METHOD_PERSISTENT);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_MANAGER_CONFIG_METHOD_TEMPORARY);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_MANAGER_CONFIG_METHOD_VERIFY);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_POWER_SAVE_MODE_OFF);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_POWER_SAVE_MODE_ON);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_180);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_270);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_90);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_FLIPPED);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_FLIPPED_180);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_FLIPPED_270);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_FLIPPED_90);
    PRINT_CONSTANT((gint) PHOSH_MONITOR_TRANSFORM_NORMAL);
    PRINT_CONSTANT(PHOSH_NOTIFICATIONS_SCHEMA_ID);
    PRINT_CONSTANT(PHOSH_NOTIFICATION_DEFAULT_ACTION);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_REASON_CLOSED);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_REASON_DISMISSED);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_REASON_EXPIRED);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_REASON_UNDEFINED);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_URGENCY_CRITICAL);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_URGENCY_LOW);
    PRINT_CONSTANT((gint) PHOSH_NOTIFICATION_URGENCY_NORMAL);
    PRINT_CONSTANT((guint) PHOSH_NOTIFY_SCREEN_WAKEUP_FLAG_ANY);
    PRINT_CONSTANT((guint) PHOSH_NOTIFY_SCREEN_WAKEUP_FLAG_CATEGORY);
    PRINT_CONSTANT((guint) PHOSH_NOTIFY_SCREEN_WAKEUP_FLAG_URGENCY);
    PRINT_CONSTANT((gint) PHOSH_ROTATE_INFO_MODE_LOCK);
    PRINT_CONSTANT((gint) PHOSH_ROTATE_INFO_MODE_TOGGLE);
    PRINT_CONSTANT((gint) PHOSH_ROTATION_MANAGER_MODE_OFF);
    PRINT_CONSTANT((gint) PHOSH_ROTATION_MANAGER_MODE_SENSOR);
    PRINT_CONSTANT((guint) PHOSH_SESSION_INHIBIT_AUTOMOUNT);
    PRINT_CONSTANT((guint) PHOSH_SESSION_INHIBIT_IDLE);
    PRINT_CONSTANT((guint) PHOSH_SESSION_INHIBIT_LOGOUT);
    PRINT_CONSTANT((guint) PHOSH_SESSION_INHIBIT_SUSPEND);
    PRINT_CONSTANT((guint) PHOSH_SESSION_INHIBIT_USER_SWITCH);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_ALL);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_LOCK_SCREEN);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_LOGIN_SCREEN);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_LOOKING_GLASS);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_NONE);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_NORMAL);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_OVERVIEW);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_POPUP);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_SYSTEM_MODAL);
    PRINT_CONSTANT((guint) PHOSH_SHELL_ACTION_MODE_UNLOCK_SCREEN);
    PRINT_CONSTANT((guint) PHOSH_SHELL_DEBUG_FLAG_ALWAYS_SPLASH);
    PRINT_CONSTANT((guint) PHOSH_SHELL_DEBUG_FLAG_FAKE_BUILTIN);
    PRINT_CONSTANT((guint) PHOSH_SHELL_DEBUG_FLAG_NONE);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_BUILTIN);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_IGNORE_AUTOREPEAT);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_IS_REVERSED);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_NONE);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_NON_MASKABLE);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_NO_AUTO_GRAB);
    PRINT_CONSTANT((guint) PHOSH_SHELL_KEY_BINDING_PER_WINDOW);
    PRINT_CONSTANT((gint) PHOSH_SHELL_LAYOUT_DEVICE);
    PRINT_CONSTANT((gint) PHOSH_SHELL_LAYOUT_NONE);
    PRINT_CONSTANT((guint) PHOSH_STATE_BLANKED);
    PRINT_CONSTANT((guint) PHOSH_STATE_LOCKED);
    PRINT_CONSTANT((guint) PHOSH_STATE_MODAL_SYSTEM_PROMPT);
    PRINT_CONSTANT((guint) PHOSH_STATE_NONE);
    PRINT_CONSTANT((guint) PHOSH_STATE_OVERVIEW);
    PRINT_CONSTANT((guint) PHOSH_STATE_SETTINGS);
    PRINT_CONSTANT(PHOSH_TOP_BAR_HEIGHT);
    PRINT_CONSTANT(PHOSH_TOP_BAR_MIN_PADDING);
    PRINT_CONSTANT((gint) PHOSH_TOP_PANEL_STATE_FOLDED);
    PRINT_CONSTANT((gint) PHOSH_TOP_PANEL_STATE_UNFOLDED);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_KEYBOARD);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_LID_SWITCH);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_NONE);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_POINTER);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_TABLET_MODE_SWITCH);
    PRINT_CONSTANT((guint) PHOSH_WAYLAND_SEAT_CAPABILITY_TOUCH);
    PRINT_CONSTANT((gint) PHOSH_WWAN_BACKEND_MM);
    PRINT_CONSTANT((gint) PHOSH_WWAN_BACKEND_OFONO);
    return 0;
}
