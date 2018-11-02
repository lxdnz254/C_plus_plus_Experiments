#include <iostream>
#include "advertising.h"
#include "round.h"

using namespace std;


Advertising getAdvertising()
{
    Advertising temp;
    cout << "Enter the number of ads shown today: ";
    cin >> temp.adsShown;
    cout << "Enter the percentage of users clicking ads: ";
    cin >> temp.clickThroughPercentage;
    cout << "Enter the average earnings per click: ";
    cin >> temp.earningPerClick;

    return temp;
}

double todaysEarning(Advertising ad)
{
    return ad.adsShown * ad.clickThroughPercentage/100 * ad.earningPerClick;
}

void printAdvertising(Advertising ad)
{
    cout << '\n' << "Number of ads shown today: " << ad.adsShown << '\n';
    cout << "Percentage of users clicking ads: " << ad.clickThroughPercentage << "%" << '\n';
    cout << "Average earnings per click: $" << ad.earningPerClick << '\n' << '\n';
    cout << "Earnings today: $" << round(todaysEarning(ad), 2) << '\n';
}
