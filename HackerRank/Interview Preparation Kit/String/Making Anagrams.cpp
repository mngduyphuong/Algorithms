#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b) {
    sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int i = 0;
  int j = 0;
  int ans = 0;
  while (i < a.size() || j < b.size()) {
    if (i >= a.size()) {
      j++;
      ans++;
    } else if (j >= b.size()) {
      i++;
      ans++;
    } else if (a[i] == b[j]) {
      i++;
      j++;
    } else if (a[i] < b[j]) {
      ans++;
      i++;
    } else if (b[j] < a[i]) {
      ans++;
      j++;
    }
  }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

