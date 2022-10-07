/*
    link: https://practice.geeksforgeeks.org/problems/word-break1352/1

    ref: 14_DP/55_word_break_problem.cpp
*/void recur(vector<string>& ans, string s, int l, int r)
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
