#pragma once

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS {SONG(QWERTY_SOUND)}
#endif

#define HOLD_ON_OTHER_KEY_PRESS

#define RGBLIGHT_SLEEP
// #define RGBLIGHT_LAYERS
