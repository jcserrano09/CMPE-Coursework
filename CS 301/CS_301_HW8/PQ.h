#pragma once
/***************************************************************************************
*    Title: <PQType.h>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

class FullPQ {};
class EmptyPQ {};
#include "Heap.h"
template<class ItemType>
class PQ {

public:
    PQ(int);
    ~PQ();

    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void Enqueue(ItemType newItem);
    void Dequeue(ItemType& item);
private:
    int length;
    HeapType<ItemType> items;
    int maxItems;

};

template<class ItemType>
PQ<ItemType>::PQ(int max) {

    maxItems = max;
    items.elements = new ItemType[max];
    length = 0;

}

template<class ItemType>
void PQ<ItemType>::MakeEmpty() {

    length = 0;

}

template<class ItemType>
PQ<ItemType>::~PQ() {

    delete[] items.elements;

}
template<class ItemType>
void PQ<ItemType>::Dequeue(ItemType& item) {

    if (length == 0)
        throw EmptyPQ();
    else {

        item = items.elements[0];
        items.elements[0] = items.elements[length - 1];
        length--;
        items.ReheapDown(0, length - 1);

    }
}

template<class ItemType>
void PQ<ItemType>::Enqueue(ItemType newItem) {

    if (length == maxItems)
        throw FullPQ();
    else {

        length++;
        items.elements[length - 1] = newItem;
        items.ReheapUp(0, length - 1);

    }
}
template<class ItemType>
bool PQ<ItemType>::IsFull() const {

    return length == maxItems;

}

template<class ItemType>
bool PQ<ItemType>::IsEmpty() const {

    return length == 0;

}

