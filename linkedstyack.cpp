

// Default Constructor
template <typename ItemType>
LinkedStack<ItemType>::LinkedStack() : topPtr(nullptr) {}

// Copy Constructor
template <typename ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack<ItemType>& aStack) : topPtr(nullptr) {
    if (aStack.topPtr == nullptr) {
        topPtr = nullptr; // Original stack is empty
    } else {
        // Copy each node in the original stack
        topPtr = new Node(aStack.topPtr->data);
        Node* newChainPtr = topPtr;
        Node* origChainPtr = aStack.topPtr->next;

        while (origChainPtr != nullptr) {
            newChainPtr->next = new Node(origChainPtr->data);
            newChainPtr = newChainPtr->next;
            origChainPtr = origChainPtr->next;
        }
        newChainPtr->next = nullptr;
    }
}

// Push a new item onto the stack
template <typename ItemType>
bool LinkedStack<ItemType>::push(const ItemType& newItem) {
    Node* newNode = new Node(newItem, topPtr); // Create a new node
    topPtr = newNode; // Update the top pointer
    return true;
}

// Pop the top item off the stack
template <typename ItemType>
bool LinkedStack<ItemType>::pop() {
    if (isEmpty()) {
        return false; // Stack is empty, cannot pop
    }

    Node* tempPtr = topPtr; // Hold the node to delete
    topPtr = topPtr->next;  // Move the top pointer to the next node
    delete tempPtr;         // Free memory
    return true;
}

// Peek at the top item of the stack
template <typename ItemType>
ItemType LinkedStack<ItemType>::peek() const {
    if (isEmpty()) {
        throw std::runtime_error("peek() called on an empty stack.");
    }
    return topPtr->data; // Return the top node's data
}