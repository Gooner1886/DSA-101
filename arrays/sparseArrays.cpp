// Sparse Arrays - Hackerrank

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> results;
    int total = 0;
    for(int j = 0; j < queries.size(); j++) {
        results.push_back(total);
        total = 0;
        for(int i = 0; i < strings.size(); i++) {
            if(queries[j] == strings[i]) {
                total += 1;
            }
        }
    }
    results.push_back(total);
    results.erase(results.begin());
    return results;
}