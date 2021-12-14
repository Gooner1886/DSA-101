// Majority element in an array using Moore's algo - GeeksForGeeks

int majorityElement(int a[], int size)
{
    int ansIndex = 0;
    int count = 1;
    int majority_count = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[i] == a[ansIndex])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            ansIndex = i;
            count = 1;
        }
    }
    int element_to_be_checked = a[ansIndex];

    for (int j = 0; j < size; j++)
    {
        if (a[j] == element_to_be_checked)
        {
            majority_count++;
        }
    }

    if (majority_count > (size / 2))
    {
        return element_to_be_checked;
    }
    return -1;
}