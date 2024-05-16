#pragma once

/***************************************************************************************
*    Title: <BubbleSort.h>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

template<class ItemType>
void BubbleUp(ItemType values[], int startIndex, int endIndex) {
    for (int index = endIndex; index > startIndex; index--)
        if (values[index] < values[index - 1])
            Swap(values[index], values[index - 1]);
}

template<class ItemType>
void BubbleSort(ItemType values[], int numValues) {
    int current = 0;

    while (current < numValues - 1)
    {
        BubbleUp(values, current, numValues - 1);
        current++;
    }
}