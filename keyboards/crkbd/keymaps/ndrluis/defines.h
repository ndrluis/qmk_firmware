typedef enum {
  _QWERT,
  _GAMING,
  _GAMING_EXT,
  _NUM_UTIL,
  _SYM,
  _ADJUS
} CRKBD_LAYERS;

extern enum CRKBD_LAYERS crkbd_layers;
extern keymap_config_t keymap_config;

// Base Layers
#define QWERT TG(_QWERT)
#define GAMING TG(_GAMING)

// Layer Switch
#define S_NUM_UT MO(_NUM_UTIL)
#define S_SYM MO(_SYM)
#define S_ADJUS MO(_ADJUS)
#define S_GEXT MO(_GAMING_EXT)

// Shortcuts
#define COPY LCTL(LSFT(KC_C))
#define PASTE LCTL(LSFT(KC_V))
#define CTR_ESC CTL_T(KC_ESC)
#define PSCR_CP LCTL(LSFT(KC_PSCR))
