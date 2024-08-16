
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
WPM_ENABLE = yes
SRC += features/achordion.c
COMBO_ENABLE = yes

DEFERRED_EXEC_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

STENO_ENABLE = yes
STENO_PROTOCOL = geminipr

# RGBLIGHT_SUPPORTED = yes
# RGB_MATRIX_SUPPORTED = yes

RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes


MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
# AUTO_SHIFT_ENABLE = yes # Auto Shift
# CAPS_WORD_ENABLE = yes
# REPEAT_KEY_ENABLE = yes


# include "quantum.h"



# Save space
LTO_ENABLE = yes 
COMMAND_ENABLE = no
MUSIC_ENABLE = no
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
AVR_USE_MINIMAL_PRINTF = yes



CONSOLE_ENABLE = yes

# TRACKPOINT_ENABLE = yes
# PS2_ENABLE = yes
# PS2_MOUSE_ENABLE = yes
# PS2_DRIVER = vendor

# MH_AUTO_BUTTONS = yes
# OPT_DEFS += -DMH_AUTO_BUTTONS