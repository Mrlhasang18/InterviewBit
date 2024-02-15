
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval>ans;
    sort(A.begin(), A.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });
     Interval var=A[0];
    for(int i=1;i<A.size();i++){
         if(var.end>=A[i].start){
        var.end=max(var.end,A[i].end);
        var.start=min(var.start,A[i].start);
    }
         else{
        ans.push_back(var);
        var=A[i];
    }
 }
  ans.push_back(var);
 return ans;
}
