void printDups(string S)
{
    map<char, int> count;
    for (int i = 0; i < S.length(); i++) {
        count[S[i]]++;
    }
    vector<char> Dups;
    for (auto it : count) {
        if (it.second > 1)
            Dups.push_back(it.first);
    }
}