// Leetcode - Flipping an Image

void flipAndInvert(vector<int> &row)
{
    int i = 0;
    int j = row.size() - 1;
    while (i <= j)
    {
        int temp = row[i];
        row[i] = row[j];
        row[j] = temp;
        i++;
        j--;
    }

    for (int x = 0; x < row.size(); x++)
    {
        if (row[x] == 0)
            row[x] = 1;
        else
            row[x] = 0;
    }
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    for (int i = 0; i < image.size(); i++)
    {
        flipAndInvert(image[i]);
    }
    return image;
}