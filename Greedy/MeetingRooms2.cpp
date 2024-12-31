/*
Description
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), 
find the minimum number of conference rooms required
Ex - 1
Input: intervals = [(0,30),(5,10),(15,20)]
Output: 2
Explanation:
We need two meeting rooms
room1: (0,30)
room2: (5,10),(15,20)
*/

 /**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

// class Solution {
// public:

//     int minMeetingRooms(vector<Interval> &intervals) {
//         // Write your code here
//         int n = intervals.size();
//         vector <int> start(n);
//         vector <int> end(n);
//         for(int i=0; i<n; i++ ){
//             start[i] = intervals[i].start;
//             end[i] = intervals[i].end;
//         }
        
//         sort(start.begin(), start.end());
//         sort(end.begin(), end.end());

//         int i = 0,j=0;
//         int maxRooms = -1;
//         int rooms = 0;
//         while(i<n && j<n){
//             if(start[i] < end[j]){
//                 //one meeting starts
//                 rooms ++;
//                 maxRooms = max(maxRooms, rooms);
//                 i++;
//             }
//             else if( start[i] == end[j]){ // one ends and one starts at same time
//                 i++; j++;
//             }
//             else { //start[i] > end[j]
//                 //one meeting ends
//                 rooms--;
//                 j++;
//             }
//         }
//         return maxRooms;
//     }
// };