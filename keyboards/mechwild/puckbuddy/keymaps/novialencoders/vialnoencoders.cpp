void encoder_update_user(uint8_t index, bool clockwise) {
  // Encoder 1
  if (index == 0) {
    switch(biton32(layer_state)) {
    case 1:
      if (clockwise) {
        tap_code16(KC_PLUS);
      } else {
        tap_code16(KC_MINUS);
      }
      break;
    default:
      if (clockwise) {
        tap_code16 (KC_RBRC);
      } else {
        tap_code16(KC_LBRC);
      }
      break;
    }
  } else {
        // Encoder 2
        if (index == 1) {
        switch(biton32(layer_state)) {
        case 1:
        if (clockwise) {
            tap_code16(KC_UP);
            } else {
            tap_code16(KC_DOWN);
        }
        break;
        default:
      if (clockwise) {
        tap_code16 (ctrl_shft_z);
      } else {
        tap_code16(ctrl_z);
      }
      break;
    }
  }
}}