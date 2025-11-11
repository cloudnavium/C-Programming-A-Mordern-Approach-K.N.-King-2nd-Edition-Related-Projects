#include <stdio.h>

int main(void) {
    int h, m, t;

    /* departure times (min since midnight) */
    int d1 = 480;   /*  8:00 a.m. */
    int d2 = 583;   /*  9:43 a.m. */
    int d3 = 679;   /* 11:19 a.m. */
    int d4 = 767;   /* 12:47 p.m. */
    int d5 = 840;   /*  2:00 p.m. */
    int d6 = 945;   /*  3:45 p.m. */
    int d7 = 1140;  /*  7:00 p.m. */
    int d8 = 1305;  /*  9:45 p.m. */

    /* arrival times (min since midnight) */
    int a1 = 616;   /* 10:16 a.m. */
    int a2 = 712;   /* 11:52 a.m. */
    int a3 = 811;   /*  1:31 p.m. */
    int a4 = 900;   /*  3:00 p.m. */
    int a5 = 968;   /*  4:08 p.m. */
    int a6 = 1075;  /*  5:55 p.m. */
    int a7 = 1280;  /*  9:20 p.m. */
    int a8 = 1438;  /* 11:58 p.m. */

    printf("Enter a 24-hour time: ");
    if (scanf("%d:%d", &h, &m) != 2) return 1;
    t = h * 60 + m;

    /* pick the closest departure by comparing against midpoints */
    int dep, arr;
    if (t <= (d1 + d2) / 2) {
        dep = d1; arr = a1;
    } else if (t <= (d2 + d3) / 2) {
        dep = d2; arr = a2;
    } else if (t <= (d3 + d4) / 2) {
        dep = d3; arr = a3;
    } else if (t <= (d4 + d5) / 2) {
        dep = d4; arr = a4;
    } else if (t <= (d5 + d6) / 2) {
        dep = d5; arr = a5;
    } else if (t <= (d6 + d7) / 2) {
        dep = d6; arr = a6;
    } else if (t <= (d7 + d8) / 2) {
        dep = d7; arr = a7;
    } else {
        dep = d8; arr = a8;
    }

    /* print helper */
    int dh = dep / 60, dm = dep % 60;
    int ah = arr / 60, am = arr % 60;

    printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s.\n",
           (dh % 12 == 0) ? 12 : dh % 12, dm, dh < 12 ? "a.m." : "p.m.",
           (ah % 12 == 0) ? 12 : ah % 12, am, ah < 12 ? "a.m." : "p.m.");

    return 0;
}

