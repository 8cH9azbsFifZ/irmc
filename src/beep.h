#include <stdio.h>
#include <math.h>
#include "portaudio.h"

#define NUM_SECONDS   (5)
#define SAMPLE_RATE   (44100)
#define FRAMES_PER_BUFFER  (64)

#ifndef M_PI
#define M_PI  (3.14159265)
#endif

typedef struct
{
    uint32_t total_count;
    uint32_t up_count;

    uint32_t counter;
    uint32_t prev_freq;
    uint32_t freq;
} paTestData;

void buzzer_set_freq(int frequency);
void buzzer_beep(int frequency, int msecs);
int buzzer_start(void);
int buzzer_stop();
void msleep(int d);
int beep_test(void);

// compatibility to old interface
int beep(double freq_hz, double duration_sec);
int beep_init();
