// Leetcode - 452 - Minimum arrows to burst balloons
static bool desc(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1]; // Sorting the points array on the basis of ending point of each balloon
}

int findMinArrowShots(vector<vector<int>> &points)
{
    sort(points.begin(), points.end(), desc); // Calling the sort method on points

    int arrows = 1;
    int compare = points[0][1]; // Initially the end point of first balloon will be used as a comparator

    for (int i = 1; i < points.size(); i++)
    { // Iterate from balloon at 1st index till the end
        if (points[i][0] <= compare)
        { // If the start of the current balloon has not crossed the comparator, that means both baloons overlap
            continue;
        }
        arrows++;
        compare = points[i][1]; // make the comparator the end of the current balloon for further iterations
    }
    return arrows;
}