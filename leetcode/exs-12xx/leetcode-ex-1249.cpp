int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int acc = 0;
        string aux = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(') {
                if (!acc) continue;
                acc--;
            } else if (s[i] == ')') acc++;
            aux += s[i];
        }
        acc = 0;
        s = "";
        for (int i = aux.size() - 1; i >= 0; i--) {
            if (aux[i] == ')') {
                if (!acc) continue;
                acc--;
            } else if (aux[i] == '(') acc++;
            s += aux[i];
        }
        return s;
    }
};