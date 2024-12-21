# Min Heap Visualization

## Steps for Min Heap Push (Insertion)

1. **Insert the element at the end**:
    - Add the new element at the end of the Complete Binary Tree (CBT).

2. **Heapify Up**:
    - Compare the inserted element with its parent.
    - If the inserted element is smaller than its parent, swap them.
    - Repeat the process until the inserted element is in the correct position or it becomes the root.

Example -see notes

## Steps for Min Heap Pop (Deletion)

1. **Remove the root element**:
    - Replace the root element with the last element in the CBT.
    - Remove the last element.

2. **Heapify Down**:
    - Compare the new root with its children.
    - If the new root is larger than the smallest child, swap them.
    - Repeat the process until the new root is in the correct position or it becomes a leaf.
 