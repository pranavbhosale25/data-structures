class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    struct meeting {
        int start;
        int end;
        int pos;
    };
    
    bool static comparator(meeting m1, meeting m2){
        if(m1.end < m2.end) return true;
        else if(m1.end > m2.end) return false;
        else if(m1.pos < m2.pos) return true;
        return false;
    }
    
    
    int maxMeetings(int start[], int end[], int n){
        if (n == 1) return 1;
        
        struct meeting meetings[n];
        for(int i = 0 ; i < n ; i++){
            meetings[i].start = start[i];
            meetings[i].end = end[i];
            meetings[i].pos = i;
        }
        
        sort(meetings,meetings+n,comparator);
        
        int maxMeetings = 1;
        int endTime = meetings[0].end;
        
        for(int i = 1 ; i < n ; i++){
            if(meetings[i].start > endTime){
                endTime = meetings[i].end;
                maxMeetings++;
            }
        }
        
        return maxMeetings;
    }
};