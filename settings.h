#pragma once

const int OFF_PWM = 0;
const int ON_PWM = 255;
const int STARTUP_DURATION = 10;
const int VELOCITY_DURATION = 80;
const int TOTAL_ON_DURATION = STARTUP_DURATION + VELOCITY_DURATION;
const int DEACTIVATE_TIME_REQUIRED = 100;
const int NOTE_HOLD_PWM = 50;
const int MIN_MIDI_VELOCITY = 0;
const int MIDI_HALF_VELOCITY = 63;
const int MAX_MIDI_VELOCITY = 127;
const int SUSTAIN_STARTUP_DURATION = 30;
const int SUSTAIN_POWER_DURATION = 100;
const int SUSTAIN_TOTAL_ON_DURATION = SUSTAIN_STARTUP_DURATION + SUSTAIN_POWER_DURATION;
const int SUSTAIN_VELOCITY = 127;
const int SUSTAIN_HOLD_PWM = 50;
const int SUSTAIN_DEACTIVATE_TIME_REQUIRED = 200;
const int SDA_PIN = 21;
const int SCL_pin = 22;
// TODO: calibrate these values
const int BLUETOOTH_SOUND_DELAY = 75;
const int BLUETOOTH_SOUND_DURATION = 300;
const int POWER_SOUND_DURATION_ONE = 200;
const int POWER_SOUND_DURATION_TWO = 1000;
const int POWER_SOUND_DELAY = 100;