/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

//#define VIAL_KEYBOARD_UID {0xFD, 0x91, 0xD2, 0xB9, 0xFA, 0xD5, 0x59, 0xAB}


#define RGBLIGHT_ANIMATIONS
//#define DYNAMIC_KEYMAP_LAYER_COUNT 4
//#define VIAL_TAP_DANCE_ENTRIES 8
#define NO_ACTION_ONESHOT


// OLED driver
#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X32
  #define OLED_TIMEOUT 30000
  #define SPLIT_OLED_ENABLE
#endif

// RGB underglow and per key
//#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLED_NUM 36
  #define RGBLED_SPLIT \
        { 18, 18 }
  #define RGBLIGHT_SPLIT
  #define RGBLIGHT_LIMIT_VAL 150
  #define RGBLIGHT_HUE_STEP 10
  #define RGBLIGHT_SAT_STEP 17
  #define RGBLIGHT_VAL_STEP 17
  #define RGBLIGHT_SLEEP
#endif


#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE


// the maximum time (ms) allowed between taps of your Tap Dance key
// this is also determines how long a hold takes
#define TAPPING_TERM 125

// per-key control of tapping term
#define TAPPING_TERM_PER_KEY
// if you hold a mod key, and then press-and-release another key, the hold-function of that key
// will be executed instead of the tap-function even if the mod key was released before the tapping_term
#define PERMISSIVE_HOLD
//#define PERMISSIVE_HOLD_PER_KEY

// if you hold a mod key, and then JUST-press-and-NOT-release another key, the hold-function of that key
// will be executed instead of the tap-function even if the mod key was released before the tapping_term
//#define HOLD_ON_OTHER_KEY_PRESS

// you can enable per-key timing to ensure that each key pressed provides you with more time to finish the sequence
#define LEADER_PER_KEY_TIMING
// This is the amount of time you have to complete a sequence once the leader key has been pressed
#define LEADER_TIMEOUT 200

