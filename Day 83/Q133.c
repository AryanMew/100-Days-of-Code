// Q133: Create an enum for months and print how many days each month has.


#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month month;

    for ( int month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("Month %d: 31 days\n", month);
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d: 30 days\n", month);
                break;

            case FEBRUARY:
                printf("Month %d: 28 or 29 days\n", month);
                break;
        }
    }

    return 0;
}