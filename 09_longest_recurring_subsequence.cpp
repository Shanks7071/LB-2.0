/*
    link: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

    ref: DP/8_longest_repeated...
*/


// ----------------------------------------------------------------------------------------------------------------------- //
int memo[1002][1002];
int LongestRepeatingSubsequence(string s) {bool isMatch(string s, string p)
{void recur(vector<string>& ans, string s, int l, int r)
{
    // Base case
    if (l == r) ans.push_back(s);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
bool isMatch(string s, string p)
{void recur(vector<string>& ans, string s, int l, int r)
{
    // Base case
    if (l == r) ans.push_back(s);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
bool isMatch(string s, string p)
{void recur(vector<string>& ans, string s, int l, int r)
{
    // Base case
    if (l == r) ans.push_back(s);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
bool isMatch(string s, string p)
{void recur(vector<string>& ans, string s, int l, int r)
{
    // Base case
    if (l == r) ans.push_back(s);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

            // Code here
    int len = s.size();

    for (int i = 0;i < len;i++) {
        memo[i][0] = 0;
        memo[0][i] = 0;
    }


    for (int i = 1;i <= len;i++) {
        for (int j = 1;j <= len;j++) {
            if (s[i - 1] == s[j - 1] && i != j) {
                // if char matches and index is not same as mentioned
                memo[i][j] = 1 + memo[i - 1][j - 1];
            }
            else {
                // if not matched then carry over the max value so far
                memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
            }
        }
    }
    return memo[len][len];
}
