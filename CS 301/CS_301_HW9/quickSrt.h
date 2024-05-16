#pragma once

/***************************************************************************************
*    Title: <QuickSort.h>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

template <class ItemType>
void Split(ItemType values[], int first, int last, int& splitPoint) {
    ItemType splitVal = values[first];
    int saveFirst = first;
    bool onCorrectSide;

    first++;
    do {
        onCorrectSide = true;
        while (onCorrectSide)         
            if (values[first] > splitVal)
                onCorrectSide = false;
            else {
                first++;
                onCorrectSide = (first <= last);
            }

        onCorrectSide = (first <= last);
        while (onCorrectSide)             
            if (values[last] <= splitVal)
                onCorrectSide = false;
            else {
                last--;
                onCorrectSide = (first <= last);
            }

        if (first < last) {
            Swap(values[first], values[last]);
            first++;
            last--;
        }
    } while (first <= last);

    splitPoint = last;
    Swap(values[saveFirst], values[splitPoint]);
}

template<class ItemType>
void QuickSort(ItemType values[], int first, int last) {
    if (first < last) {
        int splitPoint;

        Split(values, first, last, splitPoint);
        QuickSort(values, first, splitPoint - 1);
        QuickSort(values, splitPoint + 1, last);
    }
}