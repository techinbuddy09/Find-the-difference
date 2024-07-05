class Solution {
public:
    char findTheDifference(string s, string t) {
        int len1 = s.size();
        int len2 = t.size();
        char ans = 0; // to store the difference
        // now applying xor operation
        for (int i = 0; i < len1; i++) {
            ans ^= s[i];
        }
        for (int j = 0; j < len2; j++) {
            ans ^= t[j];
        }
        return ans;
    }
};
// dry run
// x=0
// i=0 &s[0]=a
// x^a=0^a=a
// i=1 =x^b=a^b
// i=2=x^c=a^b^c
// i=3=x^d=a^b^c^d at end of s x=a^b^c^d
// now at j=0 x^a=a^b^c^d^a(a^a=0)=b^c^d
// at j=1  x^b=b^c^d^b(b^b=0)=c^d
// at j=2  x^c=c^d^c(c^c=0)=d
// at j=3   x^d=d^d(d^d=0)=0
// at j=4  x^e=0^e(0^e=e)=e
// and finaly return this
