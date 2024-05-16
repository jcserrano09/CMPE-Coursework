#pragma once

/***************************************************************************************
*    Title: <InsertionSort.h>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/


template<class ItemType>
void InsertItem(ItemType values[], int startIndex, int endIndex) {
    bool finished = false;
    int current = endIndex;
    bool moreToSearch = (current != startIndex);

    while (moreToSearch && !finished) {
        if (values[current] < values[current - 1]) {
            Swap(values[current], values[current - 1]);
            current--;
            moreToSearch = (current != startIndex);
        }
        else
            finished = true;
    }
}

template<class ItemType>
void InsertionSort(ItemType values[], int numValues) {
    for (int count = 0; count < numValues; count++)
        InsertItem(values, 0, count);
}



