// class Solution {
// public:
//     int reverse(int x) {
//        // int negcheck=1;
//         //if (x<0) negcheck =-1;
//         //x=x*negcheck;
//         long long ans=0;
//         while (x!=0){
//             int lastdigit=x%10;
//             x=x/10;
//             ans=(ans*10)+lastdigit;
//         }
//         if (ans > INT_MAX || ans < INT_MIN) {
//                 return 0;
//             }
//         return (int) ans;
//     }
// };
class Solution {
public:
    int reverse(int x) {
       // int negcheck=1;
        //if (x<0) negcheck =-1;
        //x=x*negcheck;
        long long ans=0;
        while (x!=0){
            int lastdigit=x%10;
            x=x/10;

            ans=(ans*10)+lastdigit;
             if (ans > INT_MAX || ans < INT_MIN) {
                return 0;
        }
       
            }
        return (int) ans;
    }
};