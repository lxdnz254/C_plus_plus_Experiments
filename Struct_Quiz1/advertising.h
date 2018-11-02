#ifndef ADVERTISING_H
#define ADVERTISING_H

struct Advertising
{
    int adsShown;
    double clickThroughPercentage;
    double earningPerClick;
};
Advertising getAdvertising();
double todaysEarnigs(Advertising ad);
void printAdvertising(Advertising ad);

#endif // ADVERTISING_H
