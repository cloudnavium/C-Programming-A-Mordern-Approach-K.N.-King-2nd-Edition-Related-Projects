#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int h, m, t;
    char p;

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

    printf("Enter a 12-hour time: ");
    if(scanf("%d:%d %c", &h, &m, &p) != 3) return 1;

    printf("p = %c\n", p);

    char period[5];

    if (tolower(p) == 'a' && h == 12) {
        strcpy(period, "a.m.");
        t = m;
    } else if (tolower(p) == 'a') {
        strcpy(period, "a.m.");
        t = h * 60 + m;
    } else if (tolower(p) == 'p') {
        strcpy(period, "p.m.");
        t = h * 60 + m + (60 * 12);
    }

    int dep, arv;
    if (t <= (d1 + d2) / 2) {
      dep = d1;
      arv = a1;
    } else if (t <= (d2 + d3) / 2) {
      dep = d2;
      arv = a2;
    } else if (t <= (d3 + d4) / 2) {
      dep = d3;
      arv = a3;
    } else if (t <= (d4 + d5) / 2) {
      dep = d4;
      arv = a4;
    } else if (t <= (d5 + d6) / 2) {
      dep = d5;
      arv = a5;
    } else if (t <= (d6 + d7) / 2) {
      dep = d6;
      arv = a6;
    } else if (t <= (d7 + d8) / 2) {
      dep = d7;
      arv = a7;
    } else {
      dep = d8;
      arv = a8;
    }

    int dh, dm;
    int ah, am;
    char dperiod[5], aperiod[5];

    dm = dep % 60;
    dh = (dep - dm) / 60;

    am = arv % 60;
    ah = (arv - am) / 60;


    if (dh < 12)
      strcpy(dperiod, "a.m.");
    else if (dh == 12)
      strcpy(dperiod, "p.m.");
    else {
      strcpy(dperiod, "p.m.");
      dh -= 12;
    }

    if (ah < 12)
      strcpy(aperiod, "a.m.");
    else if (ah == 12)
      strcpy(aperiod, "p.m.");
    else {
      strcpy(aperiod, "p.m.");
      ah -= 12;
    }

/*
    dh < 12 ? char dperiod[] = "a.m" : char dperiod[] = "p.m";
    ah < 12 ? char aperiod[] = "a.m": char aperiod[] = "p.m";
*/

    printf("Closest departure time is %d:%02d%s arriving at %d:%02d%s\n", dh, dm, dperiod, ah, am, aperiod);
    /*
    if (dh > 12 && ah > 12) {
      dh -= 12;
      ah -= 12;
      printf("Closest departure time is %d:%02d%s arriving at %d:%02d%s\n", dh, dm, evening, ah, am, evening);
    } else if (dh == 12 && ah > 12) {
      ah -= 12;
      printf("Closest departure time is %d:%02d%s arriving at %d:%02d%s\n", dh, dm, evening, ah, am, evening);
    } else if (dh < 12 && ah > 12) {
      ah -= 12;
      printf("Closest departure time is %d:%02d%s arriving at %d:%02d%s\n", dh, dm, morning, ah, am, evening);
    } else {
      printf("Closest departure time is %d:%02d%s arriving at %d:%02d%s\n", dh, dm, morning, ah, am, morning);
    }
    */
         
    

    return 0;
}
