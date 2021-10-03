string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    {
       st.insert(a1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(st.find(a2[i])==st.end())
        {
            return "No";
        }
    }
    return "Yes";
}
