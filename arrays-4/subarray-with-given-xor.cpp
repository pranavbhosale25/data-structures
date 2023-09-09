int Solution::solve(vector<int> &A, int B) {

    // stores how many times a particular xor value was found
    unordered_map<int,int> discoveredXors;

    // currentXor will always have prefix xor i.e xor of all elements until that point
    int count = 0, currentXor = 0;
    int wanted = 0;

    for( int num : A ){
        currentXor ^= num;
        if( currentXor == B ){
            count++;
        }
        wanted = currentXor^B;
        
        count += discoveredXors[wanted];
        
        discoveredXors[currentXor]++;
    }
    
    return count;   

}

// Brute Force solution
// int Solution::solve(vector<int> &arr, int B) {
    
//     int result = 0;
//     int xorr = 0;
    
//     for(int i = 0 ; i < arr.size() ; i++){
//         xorr = arr[i];
//         if(xorr == B ) result++;
//         for( int j = i+1 ; j < arr.size() ; j++){
//             xorr ^= arr[j];  
//             if(xorr == B){
//                 result++;
//             }
//         }
//     }
    
//     return result;
// }
