/*
    link: https://www.geeksforgeeks.org/transform-one-string-to-another-using-minimum-number-of-given-operation/
*/


// ----------------------------------------------------------------------------------------------------------------------- //
/*
    eg. EACBD -> EABCD

    1st iter. : both pointer at D
    2nd: 1st at C and 2nd at C adding res = 1(to transfer that B).
    3rd: now let's assume we have B at very first pos then also still we have to
    transfer EA hence cost of that too will be counted
*/

int minOps(string& A, string& B)
{
  void recur(vector<string>& ans, string s, int l, int r)
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

        // If there is a mismatch, then keep incrementing
        // result 'res' until B[j] is not found in A[0..i]
        while (i >= 0 && A[i] != B[j])
        {
            i--;
            res++;
        }


        // If A[i] and B[j] match
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}