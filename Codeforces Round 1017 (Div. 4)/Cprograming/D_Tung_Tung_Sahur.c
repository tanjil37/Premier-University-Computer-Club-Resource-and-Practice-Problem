


#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char p[200005], s[200005];
        scanf("%s", p);
        scanf("%s", s);
        
        int lenp = strlen(p), lens = strlen(s);
        int x = lens - lenp; // required number of double outputs
        int d = 0;         // doubles used so far
        int j = 0;         // pointer in s
        int valid = 1;     // flag indicating a valid segmentation
        
        for (int i = 0; i < lenp; i++){
            // Check if current character in s matches the hit p[i]
            if(j >= lens || s[j] != p[i]){
                valid = 0;
                break;
            }
            
            int remaining = lenp - i;      // number of hits (including current) remaining
            int required_remaining = x - d;  // number of doubles still needed
            
            // If doubling is possible (next character is the same as p[i])
            if(j+1 < lens && s[j+1] == p[i]){
                // If we must choose a double here because even if all later hits are doubled,
                // single here would not allow us to reach the required count.
                if(required_remaining > (remaining - 1)){
                    d++;
                    j += 2;
                } else {
                    // Otherwise, choose the single option
                    j++;
                }
            } else {
                // Doubling not available; take the single character
                j++;
            }
        }
        
        // After processing, j must exactly be at the end of s and we must have used exactly x doubles.
        if(j != lens || d != x)
            valid = 0;
        
        printf("%s\n", valid ? "YES" : "NO");
    }
    
    return 0;
}