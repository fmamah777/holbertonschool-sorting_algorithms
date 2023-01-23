void heap_sort(int *array, size_t size)
{
    int i;
    /* Build the heap */
    for (i = size / 2 - 1; i >= 0; i--)
        sift_down(array, i, size);

    /* Sort the array */
    for (i = size - 1; i >= 0; i--)
    {
        /* Move the root (largest element) to the end of the array */
        swap(array, 0, i);
        /* Sift down the new root (element at index 0) to maintain the heap property */
        sift_down(array, 0, i);
    }
}

