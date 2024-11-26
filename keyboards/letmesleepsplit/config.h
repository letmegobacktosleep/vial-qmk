#pragma once

/* Change Mouse acceleration */
#define MOUSEKEY_INERTIA
#define MOUSEKEY_DELAY 100
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 32
#define MOUSEKEY_MAX_SPEED 48
#define MOUSEKEY_FRICTION 24
#define MOUSEKEY_MOVE_DELTA 1

/* Change Tapping Term increment */
#define TAPPING_TERM 200
#define DYNAMIC_TAPPING_TERM_INCREMENT 50

/* Add RGB Lighting for onboard WS2812 led on RP2040 zero */
#define RGBLIGHT_MAX_LAYERS 4

// caps lock = white
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_WHITE}, // starting at 1st LED, affecting 2 LEDs in the chain, makes it white.
);

// layer 1
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_MAGENTA},
);

// layer 2
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_CORAL},
);

// layer 3
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_CHARTREUSE},
);

// Define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer,    // Overrides other layers
    my_layer3_layer     // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

/* make the leds do something */
bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(1, layer_state_cmp(state, _LAYER1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _LAYER2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _LAYER3));
    return state;
}