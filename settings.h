#pragma once

const int OFF_PWM = 0;
const int ON_PWM = 255;
const int STARTUP_DURATION = 30;
const int VELOCITY_DURATION = 200;
const int TOTAL_ON_DURATION = STARTUP_DURATION + VELOCITY_DURATION;
const int DEACTIVATE_TIME_REQUIRED = 200;
const int NOTE_HOLD_PWM = 50;
const int MIN_MIDI_VELOCITY = 0;
const int MAX_MIDI_VELOCITY = 127;
const int SUSTAIN_STARTUP_DURATION = 30;
const int SUSTAIN_POWER_DURATION = 200;
const int SUSTAIN_TOTAL_ON_DURATION = 230;
const int SUSTAIN_VELOCITY = 127;
const int SUSTAIN_HOLD_PWM = 50;
const int SUSTAIN_DEACTIVATE_TIME_REQUIRED = 200;
const int SDA_PIN = 21;
const int SCL_pin = 22;
