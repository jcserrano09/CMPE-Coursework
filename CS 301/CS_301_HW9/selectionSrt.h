#pragma once
/***************************************************************************************
*    Title: <SelectionSort.h>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

template<class ItemType>
int MinIndex(ItemType values[], int startIndex, int endIndex) {
    int indexOfMin = startIndex;
    for (int index = startIndex + 1; index <= endIndex; index++)
        if (values[index] < values[indexOfMin])
            indexOfMin = index;
    return indexOfMin;
}

template<class ItemType>
void SelectionSort(ItemType values[], int numValues) {
    int endIndex = numValues - 1;
    for (int current = 0; current < endIndex; current++)
        Swap(values[current], values[MinIndex(values, current, endIndex)]);
}
