template <typename ItemType>
bool LinkedQueue<ItemType>::dequeue() {
    if (isEmpty()) {
        return false; // Cannot dequeue an empty queue
    }
    Node* tempPtr = frontPtr; // Hold the node to be deleted
    frontPtr = frontPtr->next; // Move front pointer to the next node
    if (frontPtr == nullptr) { // If queue becomes empty
        backPtr = nullptr;
    }

    delete tempPtr; // Free the memory of the old front node
    return true;
}