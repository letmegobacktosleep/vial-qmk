/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENTER,
		KC_LSFT, KC_RSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,
		KC_LCTL,   KC_LGUI,   KC_LALT,   MO(1),                                                   KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT,
											        KC_SPACE,						  KC_SPACE,
													          MO(2),            MO(3)
	),

	[1] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		                                            KC_TRNS,                            KC_TRNS,
		                                                      KC_TRNS,          KC_TRNS
	),

	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		                                            KC_TRNS,                            KC_TRNS,
		                                                      KC_TRNS,          KC_TRNS
	),

	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		                                            KC_TRNS,                            KC_TRNS,
		                                                      KC_TRNS,          KC_TRNS
	),

};

/* name the layers */
enum layer_names {
    _BASE,
    _LAYER1,
    _LAYER2,
	_LAYER3,
};


/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
		},

	[1] = { 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
		},

	[2] = { 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
		},

	[3] = { 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
		ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
		},

};
#endif



// caps lock = white
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_WHITE} // starting at 1st LED, affecting 2 LEDs in the chain, makes it white.
);

// layer 1
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_MAGENTA}
);

// layer 2
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_CORAL}
);

// layer 3
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_CHARTREUSE}
);

// Define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer,    // Overrides other layers
    my_layer3_layer,     // Overrides other layers
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