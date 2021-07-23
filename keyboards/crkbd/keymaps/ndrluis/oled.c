static const char PROGMEM crkbd_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00};

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master()) {
    return OLED_ROTATION_270;
  } else {
    return rotation;
  }
}

void render_layer_state(void) {
  switch (get_highest_layer(layer_state)) {
    case _QWERT:
      oled_write_P(PSTR("TYPE "), false);
      break;
    case _GAMING:
      oled_write_P(PSTR("GAME "), false);
      break;
  }

  oled_write_P(PSTR("LAYER"), false);

  switch (get_highest_layer(layer_state)) {
    case 0:
      oled_write_P(PSTR("     "), false);
      break;
    case _SYM:
      oled_write_P(PSTR("SYMBL"), false);
      break;
    case _ADJUS:
      oled_write_P(PSTR("ADJUS"), false);
      break;
    case _NUM_UTIL:
      oled_write_P(PSTR("NUM  "), false);
      break;
    case _GAMING_EXT:
      oled_write_P(PSTR("EXT  "), false);
      break;
    default:
      oled_write_P(PSTR("UNKN "), false);
      break;
  }
}

void render_status_main(void) {
  render_layer_state();
}

void render_crkbd_logo(void) {
  oled_write_P(crkbd_logo, false);
}

void render_status_secondary(void) {
  render_crkbd_logo();
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    render_status_main();  // Renders the current keyboard state
  } else {
    render_status_secondary();
  }
}
