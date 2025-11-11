#include <stdio.h>

int main(void) {
    int h, m, t;

    int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int size = sizeof(departures) / sizeof(departures[0]);

    printf("Enter a 24-hour time: ");
    if (scanf("%d:%d", &h, &m) != 2) return 1;
    t = h * 60 + m;
    
    int dep, arr;
    for (int i = 0; i < size - 1; i++) {
        if (t <= (departures[i] + departures[i + 1]) / 2) {
            dep = departures[i];
            arr = arrivals[i];
            break;
        }
    }

    int dh = dep / 60, dm = dep % 60;
    int ah = arr / 60, am = arr % 60;

    printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s.\n",
           (dh % 12 == 0) ? 12 : dh % 12, dm, dh < 12 ? "a.m." : "p.m.",
           (ah % 12 == 0) ? 12 : ah % 12, am, ah < 12 ? "a.m." : "p.m.");

    return 0;
}

