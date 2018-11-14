#ifndef ITEMS_H
#define ITEMS_H

enum Items
{
    HEALTH,
    TORCH,
    ARROW,
    MAX_ITEMS,
};

int countTotalItems(int *items)
{
    int totalItems = 0;
    for (int index=0; index < MAX_ITEMS; ++index)
        totalItems += items[index];

    return totalItems;
}

#endif // ITEMS_H
