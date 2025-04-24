
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, m, l, r;
        scanf("%d %d %d %d", &n, &m, &l, &r);
        
        // The total number of left moves needed by final state is -l.
        int leftNeeded = -l;  
        
        // On day m, we can make as many left moves as possible,
        // but not more than m.
        int leftMoves = (m < leftNeeded ? m : leftNeeded);
        int rightMoves = m - leftMoves;
        
        // The intermediate state on day m will be [-leftMoves, rightMoves]
        printf("%d %d\n", -leftMoves, rightMoves);
    }
    
    return 0;
}

